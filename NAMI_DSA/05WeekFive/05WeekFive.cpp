//
//  05WeekFive.cpp
//  NAMI_DSA
//
//  Created by Chandra Jayaswal on 14/07/2026.
//

#include <iostream>
using namespace std;
//
//// 1. Recursive Factorial
//long long factorial(int n) {
//    if (n <= 1) return 1;
//    return n * factorial(n - 1);
//}
//
//// 2. Recursive Fibonacci
//long long fibonacci(int n) {
//    if (n <= 1) return n;
//    return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//// 3. Recursive Power
//int power(int base, int exponent) {
//    if (exponent == 0) return 1;
//    if (exponent == 1) return base;
//    return base * power(base, exponent - 1);
//}
//
//// 4. Sum of Digits
//int sumOfDigits(int num) {
//    if (num == 0) return 0;
//    return (num % 10) + sumOfDigits(num / 10);
//}
//

void helloWold(int index) {
    if (index == 5) return;
    helloWold(index + 1);
    cout << "Hello World! " << index << endl;
}

int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n-1);
}

int fibonacci(int n) {
//    if (n == 0) return 0;
//    if (n == 1) return 1;
    if (n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int power(int base, int exponent) {
    if (exponent == 1) return base;
    return base * power(base, exponent - 1);
}

int sumOfDigits(int number) {
    if (number == 0) {
        return 0;
    } else {
        int remainder = number % 10;
        int divident = number / 10;
        return remainder + sumOfDigits(divident);
    }
}

int main() {
    int sum = sumOfDigits(123);
    cout <<"Sum of Digits: " << sum << endl;
//    int powerResult = power(2, 5);
//    cout << "Power Result: " << powerResult << endl;
//    int fibResult = fibonacci(10);
//    cout << "Fibonacci Result: " << fibResult << endl;
//    int result = factorial(5);
//    cout << "Result: " << result << endl;
//    helloWold(1);
//    cout << "Factorial of 5: " << factorial(5) << endl;
//    cout << "Fibonacci(10): " << fibonacci(10) << endl;
//    cout << "2^8 = " << power(2, 8) << endl;
//    cout << "Sum of digits of 12345: " << sumOfDigits(12345) << endl;
    return 0;
}
