#include <iostream>
#include <memory>
#include "Parent.h"

Parent::Parent(std::string name) {
	this->name = name;
	std::string childName = "ChildOf" + name;
	this->child = std::make_unique<Child>(childName);
}

Parent::Parent(const Parent& other) {
	std::cout << "Parent cctor" << std::endl;
	this->name = other.name;
	child = std::make_unique<Child>("ChildOf" + other.name);
}

Parent::~Parent() {
	std::cout << "Parent dtor : " << this->name << std::endl;
}

Parent& Parent::operator=(const Parent& other) {
	std::cout << "Parent assignment" << std::endl;

	if (this == &other) return *this;

	this->name = other.name;
	child = std::make_unique<Child>("ChildOf" + other.name);

	return *this;
}

Parent::Parent(Parent&& other) noexcept {  // move-constructor
	std::cout << "MCTOR from Parent"  << std::endl;
	child = std::move(other.child);

	// 'reset' 't originele object
	other.name = "(nodata: has been moved)";
}

std::ostream& operator<<(std::ostream& os, const Parent& parent) {
	os << "parent name: " << parent.name << "," << *parent.child;
	return os;
}