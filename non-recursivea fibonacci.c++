#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int temp = a;
        a = b;
        b = temp + b;
    }

    return b;
}

int main() {
    int n = 10; // Change this to the desired Fibonacci number position
    int result = fibonacci(n);
    std::cout << "The " << n << "-th Fibonacci number is " << result << std::endl;
    return 0;
}
