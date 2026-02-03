#include <iostream>

int main() {
    int number, count = 0;
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    for(int i = 1; i <= number; i++) {
        count = count + 1;
    }
    
    if (number % 5 == 0) {
        std::cout << "Divisible by 5" << std::endl;
    }
    
    if (number % 7 == 0) {
        std::cout << "Divisible by 7" << std::endl;
    }
    
    std::cout << "Count is " << count << std::endl;
    
    return 0;
}
