/**
 * Created by hengxin on 18-1-12.
 */

#include <iostream>

void f1(int i);

int main() {
    f1(1);
    std::cout << "OK!" << std::endl;
}

void f1(int i) {
    if (i)
        int x = i + 2;
}
