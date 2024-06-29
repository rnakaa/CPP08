#include "easyfind.hpp"
#include <iostream>
#include <vector>

template <typename T>
void testEasyFind(T& container, int value) {
	try {
		typename T::iterator result = easyfind(container, value);
		std::cout << "value = " << value << " easyfind = " << *result << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

int main() {
	std::vector<int> vec;
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(7);
	testEasyFind(vec, 3);
	testEasyFind(vec, 100);
	return 0;
}
