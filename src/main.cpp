#include <iostream>
#include <stdexcept>
#include "calculator.hpp"
int main() {
    int choice;
    double a, b;
    while (true) {
    std::cout << "====CALCULATOR C++====\n\n";
    std::cout << "1. Addition\n2.Subtraction\n3. Multiplication\n4. Division\n5. Power\n6. Nth Root\n7. Logarithm\n8. Natural Logarithm\n9. Sine\n10. Cosine\n11. Tangent\n12. Cotangent\n13. Arcsine\n14. Arccosine\n15. Arctangent\n16. Arccotangent\n0. Exit\nChoose an operation: ";
    std::cin >> choice;
    if (choice == 0) {
        std::cout << "Goodbye!\n";
        return 0;
    }
    if (choice < 0 || choice > 16) {
        std::cout << "Invalid choice. Please select a valid operation.\n";
        continue;
    }
    std::cout << '\n';
    std::cout << "Enter the first number: ";
    std::cin >> a;
    if (choice >= 1 && choice <= 7) {
        std::cout << "Enter the second number: ";
        std::cin >> b;
    }
    std::cout << '\n';
    try {
        switch (choice) {
            case 1:
                std::cout << "Result: " << add(a, b) << '\n';
                break;
            case 2:
                std::cout << "Result: " << subtract(a, b) << '\n';
                break;
            case 3:
                std::cout << "Result: " << multiply(a, b) << '\n';
                break;
            case 4:
                std::cout << "Result: " << divide(a, b) << '\n';
                break;
            case 5:
                std::cout << "Result: " << power(a, b) << '\n';
                break;
            case 6:
                std::cout << "Result: " << nth_root(a, static_cast<int>(b)) << '\n';
                break;
            case 7:
                std::cout << "Result: " << log_base(a, b) << '\n';
                break;
            case 8:
                std::cout << "Result: " << natural_log(a) << '\n';
                break;
            case 9:
                std::cout << "Result: " << sine(a) << '\n';
                break;
            case 10:
                std::cout << "Result: " << cosine(a) << '\n';
                break;
            case 11:
                std::cout << "Result: " << tangent(a) << '\n';
                break;
            case 12:
                std::cout << "Result: " << cotangent(a) << '\n';
                break;
            case 13:
                std::cout << "Result: " << arcsine(a) << '\n';
                break;
            case 14:
                std::cout << "Result: " << arccosine(a) << '\n';
                break;
            case 15:
                std::cout << "Result: " << arctangent(a) << '\n';
                break;
            case 16:
                std::cout << "Result: " << arccotangent(a) << '\n';
                break;
            default:
                std::cerr << "Invalid choice.\n";
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << '\n';
    }
}
    return 0;
}