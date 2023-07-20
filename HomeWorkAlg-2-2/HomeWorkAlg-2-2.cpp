#include <iostream>

unsigned long long int Fibonacci(int n, int* mass) {
    if (mass[n] != 0) {
        return mass[n];
    }
    if (n == 1 || n == 2) {
        return 1;
    }
    mass[n] = Fibonacci(n - 1, mass) + Fibonacci(n - 2, mass);
    return mass[n];
}

int main()
{
    int number{};
    std::cin >> number;
    if (number == 0) {
        std::cout << 0;
    }
    else {
        int* mass = new int [number + 1] {0};
        std::cout << Fibonacci(number, mass) << std::endl;
        delete[] mass;
    }
    return 0;
}
