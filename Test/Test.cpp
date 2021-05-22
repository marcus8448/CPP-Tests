#include <iostream>
#include <stdlib.h>

int mul(int, int);
int add(int, int);
double div(double, double);
int div_i(int, int);
int sub(int, int);
int mod(int, int);
int fib(int);
void swapref(int&, int&);

int main(int argc, char* argv[]) {
    std::cout << "Enter a number: " << std::flush;
    int i, j;
    std::cin >> i;
    std::cout << "Enter another number: " << std::flush;
    std::cin >> j;
    std::cout << "Added: " << add(i, j) << '\n';
    std::cout << "Subtracted: " << sub(i, j) << '\n';
    std::cout << "Multiplied: " << mul(i, j) << '\n';
    std::cout << "Divided (Integer): " << div_i(i, j) << '\n';
    std::cout << "Divided: " << div((double)i, (double)j) << '\n';
    std::cout << "Fib 1: " << fib(i) << '\n';
    std::cout << "Fib 2: " << fib(j) << '\n';
    std::cout << "Modulo: " << mod(i, j) << '\n';
    swapref(i, j);
    std::cout << "Reversed: " << i << " " << j << std::endl;
    std::cin.clear();
    std::cin.get(); // blocks until key
    return 0;
}

void swapref(int& ref1, int& ref2) {
    int tmp = ref1;
    ref1 = ref2;
    ref2 = tmp;
}

int mul(int a, int b) {
    return a * b;
}

int add(int a, int b) {
    return a + b;
}

double div(double a, double b) {
    return a / b;
}

int div_i(int a, int b) {
    return a / b;
}

int sub(int a, int b) {
    return a - b;
}

int mod(int a, int b) {
    return a % b;
}

int fib(int a) {
    if (a <= 1) {
        return a;
    }
    return fib(a - 1) + fib(a - 2);
}