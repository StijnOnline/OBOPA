
#include <queue>
#include <thread>
#include <iostream>
#include <mutex>

int counter = 0;
std::queue<int> goods;

std::condition_variable flag;
std::mutex mutex;
bool notified = false;

void producer() {
	
	for (int i = 0; i < 500; ++i) {
		goods.push(i);
		counter++;
	}

	flag.notify_one();
	notified = true;
}

void consumer() {
	std::unique_lock<std::mutex> lock(mutex);
	while (!notified) {		 //is this notified loop needed?
		flag.wait(lock);
	}

	while (!goods.empty()) {
		goods.pop();
		counter--;
	}
}

int main() {
	std::thread producerThread(producer);
	std::thread consumerThread(consumer);

	producerThread.join();
	consumerThread.join();

	std::cout << "Net: " << counter << " " << goods.size() << " " << std::endl;
}