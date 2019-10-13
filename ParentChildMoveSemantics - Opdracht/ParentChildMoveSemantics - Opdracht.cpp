#include <iostream>
#include "Parent.h"

Parent passThis(Parent a)
{
	return a;
}

int main() {

	Parent* p1 = new Parent("Parent1");
	std::cout << "p1:" << *p1 << std::endl;

	Parent* p2 = new Parent(*p1); // roept de copy constructor aan
	std::cout << "p2:" << *p2 << std::endl;

	Parent* p3 = new Parent("Parent3");
	std::cout << "p3:" << *p3 << std::endl;

	*p3 = *p1; // roept de assignment operator aan
	std::cout << "p3:" << *p3 << std::endl;

	delete p1;
	delete p2;
	delete p3;


	std::cout << std::endl << "Making shared pointers:" << std::endl;
	std::shared_ptr<Parent> p4 = std::make_shared<Parent>("Parent4");
	std::cout << "p4=@" << p4 << " usecount:" << p4.use_count() << std::endl;
	std::shared_ptr<Parent> p5 = p4;
	std::cout << "p5=@" << p5 << " usecount:" << p4.use_count() << std::endl;
	std::shared_ptr<Parent> p6 = p4;
	std::cout << "p6=@" << p6 << " usecount:" << p4.use_count() << std::endl;


	//move semantics test
	Parent p7 = passThis(Parent("Parent7"));
	Parent p8 = std::move(p7);

	return 0;
}