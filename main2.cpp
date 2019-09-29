#include <iostream>

extern "C" {
    int myfunc(int,int);
}

int main() {
    std::cout << "Call myfunc with 10,11: " << myfunc(10,11) << std::endl;

    return 0;
}
