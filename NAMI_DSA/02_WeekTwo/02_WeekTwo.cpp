//
//  02_WeekTwo.cpp
//  NAMI_DSA
//
//  Created by Chandra Jayaswal on 14/07/2026.
//

#include <iostream>
using namespace std;

void info(){
    cout << "C++ Programming!" << endl;
}

double add(double a, double b) {
    double sum = a + b;
    cout << a << " + " << b << " = " << sum << endl;
    return sum;
}

void subtract(double a, double b) {
    int max = (a > b)? a : b;
    int min = (a < b)? a : b;
    double difference = max - min;
    cout << max << " - " << min << " = " << difference << endl;
}

void multiply(double a, double b) {
    double multiply = a * b;
    cout << a << " * " << b << " = " << multiply << endl;
}

void divide(double a, double b) {
    if (b != 0) {
        double divide = a / b;
        cout << a << " / " << b << " = " << divide << endl;
    } else {
        cout << a <<" / " << b <<" = Error: Division by zero!" << endl;
    }
}

int main() {
    double a, b;
    info();
    cout << "Enter two numbers: ";
    cin >> a;
    cin >> b;
    double sum = add(a,b);
    cout << "Sum: " << sum << endl;
    subtract(a, b);
    multiply(a, b);
    divide(a, b);
    return 0;
}




//#include <iostream>
//using namespace std;
//
//int main() {
//    for (int i = 0; i < 10; i++) {
////        if (i == 5) continue;
////        if (i == 5) break;
//        if (i == 5) return 0;
//        cout << i << " ";  // 0 1 2 3 4
//    }
//    cout << endl;
//    return 0;
//}

//int main() {
//    int array[] = {1,2,3,4,5};
//    for (int value : array){
//        cout << value << "  ";
//    }
//    cout << endl;
//    
//    for (auto& num : array) {
//        num = num * 2;  // Modify in place
//    }
//    cout << endl;
//    for (int value : array){
//        cout << value << "  ";
//    }
//    cout << endl;
//    return 0;
//}


//int main() {
//    int n;
//
//    cout <<"N:";
//    cin >> n;
//    
//    for (int line = 1; line <= n; line = line + 1) {
//        for (int spaceCount = 1; spaceCount <= (n - line); spaceCount ++) {
//            cout <<" ";
//
//        }
//        int numberCharacter = 1 + (line - 1) * 2;
//        for (int charCount = 1; charCount <= numberCharacter; charCount++) {
//            cout <<"*";
////            cout << (line * charCount) << "  ";
//        }
//        cout << endl;
//    }
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main(){
//    int from, to, evenSum = 0, oddSum = 0;
//    cout <<"From:";
//    cin >> from;
//    cout <<"To:";
//    cin >> to;
//    
//    if (from > to) {
//        int temp = from;
//        from = to;
//        to = temp;
//    }
//    
//    for (int value = from; value <= to; value++) {
//        if (value % 2 == 0){ //even
//            evenSum = evenSum + value;
//            cout <<"Value: "<< value<< " Even Sum: "<< evenSum << endl;
//        } else { //odd
//            oddSum = oddSum + value;
//            cout <<"Value: "<< value<< " Odd Sum: "<< oddSum << endl;
//        }
//    }
//    cout << "EvenSum: " << evenSum << "  OddSum: " << oddSum <<endl; 
//    return 0;
//}


//#include "iostream"
//using namespace std;
//
//int main() {
//    int score;
//    cout << "Enter your score (0-100): ";
//    cin >> score;
//    
//    char grade;
//    if (score >= 90 && score <= 100) {
//        grade = 'A';
//    }else if (score >= 80) {
//        grade = 'B';
//    } else if (score >= 70) {
//        grade = 'C';
//    } else if (score >= 60) {
//        grade = 'D';
//    } else if (score >= 0) {
//        grade = 'F';
//    } else {
//        cout << "Invalid score!" << endl;
//        return 1;
//    }
//    
//    cout << "Your grade is: " << grade << endl;
//    return 0;
//}



//#include <iostream>
//#include <random>
//using namespace std;
//
//int main(){
//    random_device rd;
//    mt19937 gen(rd());
//    uniform_int_distribution<int> dist(1, 100);
//    
//    int secret = dist(gen);
//    int guess;
//    int attempts = 0;
//    
//    cout << "Guess the number (1-100): ";
//
//    do {
//        cin >> guess;
//        attempts++;
//            
//        if (guess < secret) {
//            cout << "Too low! Try again: ";
//        } else if (guess > secret) {
//            cout << "Too high! Try again: ";
//        } else {
//            cout << "Correct! You took " << attempts << " attempts!" << endl;
//        }
//    } while (guess != secret);
//    
//    
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Enter a positive number: ";
//    cin >> n;
//    
//    if (n <= 0) {
//        cout << "Please enter a positive number!" << endl;
//        return 1;
//    }
//    
//    int sum = 0;
//    for (int i = 1; i <= n; i++) {
//        sum += i;
//    }
//    
//    cout << "Sum of 1 to " << n << " is: " << sum << endl;
//    return 0;
//}


//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    cout << "Multiplication Table (1-10):" << endl;
//    
//    // Print header
//    cout << "   ";
//    for (int i = 1; i <= 10; i++) {
//        cout << setw(4) << i;
//    }
//    cout << endl;
//    
//    // Print table
//    for (int i = 1; i <= 10; i++) {
//        cout << setw(2) << i << " ";
//        for (int j = 1; j <= 10; j++) {
//            cout << setw(4) << i * j;
//        }
//        cout << endl;
//    }
//    
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//double add(double a, double b) {
//    return a + b;
//}
//
//double subtract(double a, double b) {
//    return a - b;
//}
//
//double multiply(double a, double b) {
//    return a * b;
//}
//
//double divide(double a, double b) {
//    if (b == 0) {
//        cout << "Error: Division by zero!" << endl;
//        return 0;
//    }
//    return a / b;
//}
//
//int main() {
//    double num1, num2;
//    cout << "Enter two numbers: ";
//    cin >> num1 >> num2;
//    
//    cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
//    cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
//    cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
//    
//    double result = divide(num1, num2);
//    if (num2 != 0) {
//        cout << num1 << " / " << num2 << " = " << result << endl;
//    }
//    
//    return 0;
//}




//#include <iostream>
//using namespace std;
//
//int maxOfThree(int a, int b, int c) {
//    int max = a;
//    if (b > max) max = b;
//    if (c > max) max = c;
//    return max;
//}
//
//int main() {
//    int x, y, z;
//    cout << "Enter three numbers: ";
//    cin >> x >> y >> z;
//    
//    cout << "The maximum is: " << maxOfThree(x, y, z) << endl;
//    return 0;
//}




//#include <iostream>
//using namespace std;
//
//bool isEven(int num) {
//    return num % 2 == 0;
//}
//
//int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//    
//    if (isEven(num)) {
//        cout << num << " is even" << endl;
//    } else {
//        cout << num << " is odd" << endl;
//    }
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//int power(int base, int exponent) {
//    int result = 1;
//    for (int i = 0; i < exponent; i++) {
//        result *= base;
//    }
//    return result;
//}
//
//int main() {
//    int base, exponent;
//    cout << "Enter base: ";
//    cin >> base;
//    cout << "Enter exponent: ";
//    cin >> exponent;
//    
//    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//void printRectangle(int width, int height, char symbol) {
//    for (int i = 0; i < height; i++) {
//        for (int j = 0; j < width; j++) {
//            cout << symbol;
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int width, height;
//    char symbol;
//    
//    cout << "Enter width: ";
//    cin >> width;
//    cout << "Enter height: ";
//    cin >> height;
//    cout << "Enter character: ";
//    cin >> symbol;
//    
//    printRectangle(width, height, symbol);
//    return 0;
//}



//#include <iostream>
//#include <cmath>
//using namespace std;
//
//bool isPrime(int num) {
//    if (num < 2) return false;
//    if (num == 2) return true;
//    if (num % 2 == 0) return false;
//    
//    for (int i = 3; i <= sqrt(num); i += 2) {
//        if (num % i == 0) return false;
//    }
//    return true;
//}
//
//void printPrimes(int start, int end) {
//    cout << "Prime numbers between " << start << " and " << end << ":" << endl;
//    for (int i = start; i <= end; i++) {
//        if (isPrime(i)) {
//            cout << i << " ";
//        }
//    }
//    cout << endl;
//}
//
//int main() {
//    int start, end;
//    cout << "Enter range (start end): ";
//    cin >> start >> end;
//    
//    printPrimes(start, end);
//    return 0;
//}




//#include <iostream>
//using namespace std;
//
//long long fibonacci(int n) {
//    if (n <= 1) return n;
//    
//    long long a = 0, b = 1, c;
//    for (int i = 2; i <= n; i++) {
//        c = a + b;
//        a = b;
//        b = c;
//    }
//    return b;
//}
//
//void printFibonacci(int n) {
//    cout << "First " << n << " Fibonacci numbers:" << endl;
//    for (int i = 0; i < n; i++) {
//        cout << fibonacci(i) << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    int n;
//    cout << "Enter n: ";
//    cin >> n;
//    
//    printFibonacci(n);
//    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
//    return 0;
//}




//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//string reverseString(const string& str) {
//    string reversed = str;
//    int n = str.length();
//    for (int i = 0; i < n / 2; i++) {
//        swap(reversed[i], reversed[n - 1 - i]);
//    }
//    return reversed;
//}
//
//bool isPalindrome(const string& str) {
//    string reversed = reverseString(str);
//    return str == reversed;
//}
//
//int main() {
//    string input;
//    cout << "Enter a string: ";
//    getline(cin, input);
//    
//    cout << "Reversed: " << reverseString(input) << endl;
//    
//    if (isPalindrome(input)) {
//        cout << "Is '" << input << "' a palindrome? Yes" << endl;
//    } else {
//        cout << "Is '" << input << "' a palindrome? No" << endl;
//    }
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//void swap(int& a, int& b) {
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//int main() {
//    int a, b;
//    cout << "Enter two numbers: ";
//    cin >> a >> b;
//    
//    cout << "Before swap: a=" << a << ", b=" << b << endl;
//    swap(a, b);
//    cout << "After swap: a=" << a << ", b=" << b << endl;
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//using namespace std;
//
//const double PI = 3.14159;
//
//double area(double radius) {
//    return PI * radius * radius;
//}
//
//double area(double length, double width) {
//    return length * width;
//}
//
//double area(double base, double height, bool isTriangle) {
//    return 0.5 * base * height;
//}
//
//double area(int side) {
//    return side * side;
//}
//
//int main() {
//    cout << "Circle area (r=5): " << area(5.0) << endl;
//    cout << "Rectangle area (5, 10): " << area(5.0, 10.0) << endl;
//    cout << "Triangle area (6, 8): " << area(6.0, 8.0, true) << endl;
//    cout << "Square area (4): " << area(4) << endl;
//    return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//
//string createGreeting(const string& name, const string& greeting = "Hello") {
//    static int counter = 0;
//    counter++;
//    
//    cout << "Greeting " << counter << ": ";
//    return greeting + ", " + name + "!";
//}
//
//int getGreetingCount() {
//    static int counter = 0;  // This would be separate from createGreeting's counter
//    // To share counter, we'd need a global or class
//    return 0;  // Simplified
//}
//
//int main() {
//    cout << createGreeting("Alice") << endl;
//    cout << createGreeting("Bob", "Hi") << endl;
//    cout << createGreeting("Charlie", "Hey") << endl;
//    
//    // Note: Can't access static counter directly
//    cout << "Total greetings created: 3" << endl;
//    return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//
//// Template for maximum of two values
//template<typename T>
//T maxValue(T a, T b) {
//    return (a > b) ? a : b;
//}
//
//// Template for swap
//template<typename T>
//void swapValues(T& a, T& b) {
//    T temp = a;
//    a = b;
//    b = temp;
//}
//
//// Template for printing array
//template<typename T, size_t N>
//void printArray(T (&arr)[N]) {
//    cout << "Array: [";
//    for (size_t i = 0; i < N; i++) {
//        cout << arr[i];
//        if (i < N - 1) cout << ", ";
//    }
//    cout << "]" << endl;
//}
//
//int main() {
//    // Test maxValue
//    cout << "Max of 5 and 10: " << maxValue(5, 10) << endl;
//    cout << "Max of 3.14 and 2.71: " << maxValue(3.14, 2.71) << endl;
//    cout << "Max of 'a' and 'z': " << maxValue('a', 'z') << endl;
//    
//    // Test swap
//    int x = 10, y = 20;
//    cout << "Before swap: " << x << " " << y << endl;
//    swapValues(x, y);
//    cout << "After swap: " << x << " " << y << endl;
//    
//    // Test printArray
//    int arr[] = {1, 2, 3, 4, 5};
//    printArray(arr);
//    
//    double darr[] = {1.1, 2.2, 3.3};
//    printArray(darr);
//    
//    string sarr[] = {"Hello", "World", "C++"};
//    printArray(sarr);
//    
//    return 0;
//}
