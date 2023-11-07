#include <iostream>
using namespace std;

int fibSum(int n) {
    if (n <= 0) 
        return 0;
    if (n == 1)
        return 1;
    
    int a = 0, b = 1, sum = 1;

    for (int i = 2; i <= n; i++) {
        int temp = a + b;
        sum += temp;
        a = b;
        b = temp;
    }
    
    return sum;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = fibSum(n);
    cout << "The sum of Fibonacci numbers up to the " << n << "-th position is: " << result << endl;

    return 0;
}
