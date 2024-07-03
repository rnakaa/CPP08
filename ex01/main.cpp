#include "Span.hpp"
#include <iostream>

int main(){
	//pdf test case
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	//my test case (NG)
	std::cout << "\n\nNG case " << std::endl;
	{	
		Span sp(5);

		try {
			std::cout << sp.shortestSpan() << std::endl;
		} catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << sp.longestSpan() << std::endl;
		} catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			sp.addNumber(1);
			sp.addNumber(2);
			sp.addNumber(3);
			sp.addNumber(4);
			sp.addNumber(5);
			sp.addNumber(6);
		} catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	//my test case (OK)
	{
		std::cout << "\n\nOK case" << std::endl;
		Span sp(3);
		try {
			std::cout << "add -2147483648 and 2147483647" << std::endl;
			sp.addNumber(-2147483648);
			sp.addNumber(2147483647);

			std::cout << "shortest: " << sp.shortestSpan() << std::endl;
			std::cout << "longest: " << sp.longestSpan() << std::endl;
			std::cout << "\naddNumber(0)" << std::endl;
			sp.addNumber(0);
			std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
			std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
		} catch (const std::exception& e) {
			std::cout << "catch exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n\nOK case" << std::endl;
		Span sp(1001);
		std::vector<int> vec;

		for (size_t i = 0; i <= 1000; i++){
			vec.push_back(i);
		}
		sp.addNumbers(vec.begin(), vec.end());
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;

		
	}


	return 0;
}
