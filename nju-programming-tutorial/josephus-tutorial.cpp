// Solving the Josephus puzzle in C++,
// using the singly-linked list.

// Created by hengxin on 2018-02-27.

#include <iostream>
#include <forward_list>
#include <numeric>

int solving_josephus(int n);

int main() {
  auto n = 0ul;
  std::cin >> n;

  for (int i = 1; i <= n; ++i)
    std::cout << i << " : " << solving_josephus(i) << std::endl;
}

int solving_josephus(int n) {
  std::forward_list<int> soldiers (n);
  std::iota(soldiers.begin(), soldiers.end(), 1);

  auto iter = soldiers.begin();
  // note: not std::next(iter); changed to std::next(soldiers.begin())
  while (std::next(soldiers.begin()) != soldiers.end()) {  // >= 2 soliders
    soldiers.erase_after(iter); // kill the next soldier
    iter = std::next(iter); // find the next killer

    if (iter == soldiers.end()) // circular
      iter = soldiers.begin();
    else if (std::next(iter) == soldiers.end()) {
      soldiers.pop_front();
      iter = soldiers.begin();
    }
  }

  return *iter;
}
