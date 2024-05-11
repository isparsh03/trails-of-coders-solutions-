#include <iostream>

int main() {
    int N1, N2;
    std::cout << "Enter two integers (N1 < N2): ";
    std::cin >> N1 >> N2;

    int sumEven = 0, sumOdd = 0;

    std::cout << "Even numbers between " << N1 << " and " << N2 << " are: ";
    for (int i = N1; i <= N2; ++i) {
        if (i % 2 == 0) {
            std::cout << i << " ";
            sumEven += i;
        }
    }

    std::cout << "\nSum of even numbers: " << sumEven << std::endl;

    std::cout << "Odd numbers between " << N1 << " and " << N2 << " are: ";
    for (int i = N1; i <= N2; ++i) {
        if (i % 2 != 0) {
            std::cout << i << " ";
            sumOdd += i;
        }
    }

    std::cout << "\nSum of odd numbers: " << sumOdd << std::endl;

    return 0;
}
