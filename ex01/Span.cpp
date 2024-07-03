#include "Span.hpp"
#include <limits>

Span::Span(unsigned int n) : _n(n) {}

Span::~Span() {}

Span::Span(const Span& cp) {
	*this = cp;
}

Span& Span::operator=(const Span& cp) {
	if (this != &cp) {
		_n = cp._n;
		_stock = cp._stock;
	}
	return *this;
}


void Span::addNumber(int n) {
	if (_stock.size() >= _n) {
		throw std::runtime_error("Spans _stock is full");
	}
	_stock.push_back(n);
}

unsigned int Span::shortestSpan() const {
	if (_stock.size() < 2) {
		throw std::runtime_error("not enough numbers");
	}

	std::vector<int> sort = _stock;
	std::sort(sort.begin(), sort.end());

	 unsigned int minSpan = std::numeric_limits<unsigned int>::max();
	for (size_t i = 0; i < sort.size() - 1; i++) {
	 unsigned int span = static_cast<unsigned int>(sort[i+1] - sort[i]);
		if (span < minSpan) {
			minSpan = span;
		}
	}
	return minSpan;
}

unsigned int Span::longestSpan() const {
	if (_stock.size() < 2) {
		throw std::runtime_error("not enough numbers");
	}

	std::vector<int>::const_iterator minIt = std::min_element(_stock.begin(), _stock.end());
	std::vector<int>::const_iterator maxIt = std::max_element(_stock.begin(), _stock.end());

	return *maxIt - *minIt;
}

