#include <iostream>

int main() {
    int num;

    while (true) {
        std::cout << "Enter a number: ";
        std::cin >> num;

        if (num == 0)
            break;

        std::cout << "You entered: " << num << "\n";
    }

    std::cout << "Program ended.\n";
    return 0;
}