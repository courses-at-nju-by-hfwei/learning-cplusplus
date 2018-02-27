//
// Created by hengxin on 18-2-1.
//

#include <iostream>
#include <string>
#include <vector>

using std::string;

int main() {
  std::vector<string> v = {};

  for (string s; std::cin >> s;) {
    v.push_back(s);
  }

  for (const auto& s : v) {
    std::cout << s << std::endl;
  }
}
