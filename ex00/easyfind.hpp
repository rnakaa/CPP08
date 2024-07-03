#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T& cnt, int n) {
	typename T::iterator it = std::find(cnt.begin(), cnt.end(), n);
	if (it == cnt.end()) {
		throw std::runtime_error("not found");
	}
	return it;
}

#endif
