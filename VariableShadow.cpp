#include <iostream>
int main() {
    int p = 100;  // outer p
    for (int x = 0; x < 3; x++) {
        int p = 8;  // inner p shadows outer p
        p += 2;
        std::cout << "Inner p: " << p << std::endl;
    }
    std::cout << "Outer p: " << p << std::endl;
    return 0;
}
