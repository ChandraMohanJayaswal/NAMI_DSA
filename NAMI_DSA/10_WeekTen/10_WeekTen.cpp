//
//  10_WeekTen.cpp
//  NAMI_DSA
//
//  Created by Chandra Jayaswal on 02/09/2026.
//

#include <iostream>
#include <string>
using namespace std;

void checkAge(int age) {
    if (age < 18) throw "Age must be 18 or above";
}

//int main() {
//    int n = 10;
//    int m = 10;
//    
//    try {
//        if (m == 0) throw "Division by zero";
//        cout << "Answer: " << n / m << endl;
//    } catch (const char* msg) {
//        cout << "Error: " << msg << endl;
//    }
//    try {
//        checkAge(10);
//    } catch (const char* msg){
//        cout << "Error: " << msg << endl;
//    }
//    return 0;
//}

/**
 - runtime_error
 - logic_error
 - out_of_range
 - invalid_argument
 - overflow_error
 */
//int main() {
//    vector<int> v = {1, 2, 3};
//    v.at(10);
//    try {
//        v.at(10);
//    }
//    catch (out_of_range e) {
//        cout << "Caught: " << e.what() << endl;
//    }
//    return 0;
//}

/**
 Custom Exceptions
 */

#include <exception>

//class NegativeValueException : public exception {
//    private:
//        int value;
//    public:
//        NegativeValueException(int val) : value(val) {}
//
//        // Override what() method
//        const char* what() const noexcept override {
//            return "Negative value error occurred!";
//        }
//
//        // Optional: method to get the invalid value
//        int getValue() const {
//            return value;
//        }
//};

//void checkValue(int x) {
//    if (x < 0) {
//        throw NegativeValueException(x);
//    } else {
//        cout << "Value is: " << x << endl;
//    }
//}

//int main() {
//    int numbers[] = {10, -5, 20};
//    for (int n : numbers) {
//        try {
//            checkValue(n);
//        } catch (NegativeValueException &e) {
//            cout << "Exception caught: " << e.what()
//                 << " Value = " << e.getValue() << endl;
//        }
//    }
//    return 0;
//}


/**
 Handling Multiple Exceptions
 */

//int main() {
//    try {
//        int age;
//        cout << "Enter age: ";
//        cin >> age;
//        
//        if (cin.fail()) {
//            throw invalid_argument("Invalid input - must be a number");
//        }
//        if (age < 0)
//            throw invalid_argument("Age cannot be negative");
//        else if (age > 150)
//            throw out_of_range("Age too high");
//        else if (age < 18)
//            throw runtime_error("Too young");
//    } catch (const exception &e) {  // Catches ALL standard exceptions
//        cout << "Error: " << e.what() << endl;
//    } catch (...) {  // Catches anything else
//        cout << "Unknown error!" << endl;
//    }
//    
//    return 0;
//}

/**
 Function Template with Return Type
 */

template <typename T1, typename T2>
void print(T1 a, T2 b) {
    cout << a << " and " << b << endl;
}

//template <typename T1, typename T2>
//T1 sum(T1 a, T2 b) {  // Returns type T1
//    return a + b;
//}

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
T arraySum(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T = int>
T square(T x) {
    return x * x;
}

// 1. Finding max/min
template<typename T>
T max(T a, T b) { return a > b ? a : b; }

// 2. Swapping values
template<typename T>
void swap(T& a, T& b) { T temp = a; a = b; b = temp; }

// 3. Array operations
template<typename T>
void printArray(T arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

//int main() {
//    print(10, 3.14);           // int and double
//    print("Hello", 42);        // const char* and int
//    print(2.5, "World");       // double and const char*
//    
//    cout << maximum(10, 20) << endl;        // 20
//    cout << maximum(3.14, 2.71) << endl;    // 3.14
//    cout << maximum('A', 'Z') << endl;      // Z (ASCII)
//    
//    cout << sum<int, double>(10, 5.5) << endl;     // 15
//    cout << sum<double, int>(10.5, 5) << endl;     // 15.5
//        
//    // Automatically deduces
//    cout << sum(10, 5.5) << endl;   // T1=int, T2=double -> returns int (15)
//    
//    int intArr[] = {1, 2, 3, 4, 5};
//    double doubleArr[] = {1.1, 2.2, 3.3};
//        
//    cout << arraySum(intArr, 5) << endl;      // 15
//    cout << arraySum(doubleArr, 3) << endl;   // 6.6
//    
//    int x = 5, y = 10;
//    double p = 3.14, q = 2.71;
//    string s1 = "Hello", s2 = "World";
//        
//    swapValues(x, y);
//    swapValues(p, q);
//    swapValues(s1, s2);
//        
//    cout << "x=" << x << ", y=" << y << endl;        // x=10, y=5
//    cout << "p=" << p << ", q=" << q << endl;        // p=2.71, q=3.14
//    cout << "s1=" << s1 << ", s2=" << s2 << endl;    // s1=World, s2=Hello
//    
//    cout << square(5) << endl;           // 25 (int)
//    cout << square<double>(2.5) << endl; // 6.25 (double)
//    cout << square(2.5) << endl;         // 6 (int - uses default!)
//    
//    return 0;
//}

class NegativeValueException : public exception {
    private:
        int value;
    public:
        NegativeValueException(int value) {
            this->value = value;
        }
        const char* what() {
            return "Negative value error occurred!";
        }
        int getValue() {
            return value;
        }
};

class DivideByZero: public exception {
    public:
        DivideByZero () {}
        const char* what() {
            return "Divide by Zero Exception";
        }
};

double division(int a, int b) {
    int result = 0;
    try {
        if (b == 0) throw DivideByZero();
        if (b < 0) throw NegativeValueException(b);

        result = a / b;
        cout << "Result: " << result << endl;
    } catch (const char *message){
        cout << "Message: " << message << endl;
    } catch (DivideByZero &e) {
        cout << "Message: " << e.what() << endl;
    } catch (NegativeValueException &e) {
        cout << "Message: " << e.what() << " Value: "<<e.getValue()<< endl;
    }
    catch(...) {
        cout << "Unknown Exception" << endl;
    }
    return result;
}

//int main(){
//    int a = 10;
//    int b = -10;
//    try {
//        division(a, b);
//    } catch (const char *message){
//        cout << "Message: " << message << endl;
//    }
//    
//    vector<int> v = {1, 2, 3};
//    try {
//        int value = v.at(1);
//        throw "Exception generated by Me";
//    } catch (out_of_range e) {
//        cout << "Exception: " << e.what() << endl;
//    } catch(...) {
//        cout << "Unknown Exception" << endl;
//    }
//    return 0;
//}


//int sum (int a, int b) {
//    return a + b;
//}
//
//double sum (double a, double b) {
//    return a + b;
//}

//template<typename T1, typename T2>
//auto sum (T1 a, T2 b) {
//    return a + b;
//}

//int main(){
//    double result = sum(9,10.7);
//    double result1 = sum(9.1, 6.1);
//    char result3 = sum('a', 'b');
//    cout << result << " " << result1 << " " << result3 << endl;
//    return 0;
//}

//int sum(int a, int b) {
//    return a + b;
//}
//
//double sum(double a, double b) {
//    return a + b;
//}
