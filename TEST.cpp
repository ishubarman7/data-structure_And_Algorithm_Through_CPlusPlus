#include <iostream>
#include <bitset>

int main() {
    int num = -8; // Example negative integer
    std::bitset<sizeof(int) * 8> bits(num);
    std::cout << "Binary representation of " << num << " is: " << bits << std::endl;

    return 0;
}
