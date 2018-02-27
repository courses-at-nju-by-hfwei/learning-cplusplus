//
// Created by hengxin on 18-2-2.
//

#include <string>
#include <iostream>
#include <vector>
using std::string;
using std::ostream;

class Tracer {
 private:
  string mess;
 public:
  explicit Tracer(const string& s) : mess{s} {
    std::cout << mess << " in constructor.";
  }

  Tracer(const Tracer& tr) : mess{tr.mess} {
    std::cout << mess << " in copy constructor";
  }

  ~Tracer() {
    std::cout << '~' << mess;
  }

  friend ostream& operator<< (ostream& os, Tracer tr) {
    os << tr.mess;
    return os;
  }
};

void f(const std::vector<int>& v) {
  Tracer t {"in f()\n"};

  std::vector<Tracer> vt {};
  for (auto x : v) {
    Tracer tr {string{"v loop"} + std::to_string(x) + "\n"};
    vt.push_back(tr);
  }

//  for (const auto& tr : vt) {
//    std::cout << tr << std::endl;
//  }
}

int main() {
  f({1,2});
}

