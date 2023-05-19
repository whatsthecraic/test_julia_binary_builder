#include "library.hpp"

#include <iostream>

using namespace std;

extern "C" {

int hello_binary_builder(int value1, int value2) {
    cout << "Hello binary builder (" << value1 << ", " << value2 << ")" << endl;
    return 42;
}

} // extern "C"
