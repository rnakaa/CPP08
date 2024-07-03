#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

template <typename T>
void test(T& container, int n) {
	try {
		typename T::iterator it = easyfind(container, n);
		std::cout << "num = " <<n << " easyfind = " << *it << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

int main() {
	std::vector<int> vc;
	vc.push_back(1);
	vc.push_back(2);
	vc.push_back(3);
	test(vc, 3);
	test(vc, 100);


	std::list<int> ls;
	ls.push_back(1);
	ls.push_back(2);
	ls.push_back(3);
	test(ls, 3);
	test(ls, 100);
	return 0;
}
