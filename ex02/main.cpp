#include "MutantStack.hpp"

int main() {
  {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
    std::stack<int> s(mstack);
  }
  {
    std::cout << "------------------------------------------ " << std::endl;
    std::list<int> list;

    list.push_back(5);
    list.push_back(17);

    std::cout << list.back() << std::endl;

    list.pop_back();

    std::cout << list.size() << std::endl;

    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);

    std::list<int>::iterator it = list.begin();
    std::list<int>::iterator ite = list.end();

    ++it;
    --it;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
    std::list<int> lst(list);
  }
  {
    std::cout << "------------------------------------------ " << std::endl;
    MutantStack<int> mstack;

    mstack.push(0);
    mstack.push(1);
    mstack.push(2);
    mstack.push(3);
    mstack.push(4);
    mstack.push(5);
    mstack.push(6);
    mstack.push(7);
    mstack.push(8);
    mstack.push(9);
    mstack.push(10);
    mstack.push(11);

	std::cout << "msatack.size() = ";
    std::cout << mstack.size() << std::endl;

	std::cout << "msatack.top() = ";
    std::cout << mstack.top() << std::endl;

	std::cout << "msatack.pop()\n";
    mstack.pop();

	std::cout << "msatack.size() = ";
    std::cout << mstack.size() << std::endl;

    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();

	std::cout << "\nmsatack" << std::endl;
    while (rit != rite) {
      std::cout << *rit << std::endl;
      ++rit;
    }
    std::stack<int> s(mstack);
  }
  return 0;
}
