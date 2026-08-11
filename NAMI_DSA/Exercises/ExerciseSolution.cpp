//
//  ExerciseSolution.cpp
//  NAMI_DSA
//
//  Created by Chandra Jayaswal on 11/08/2026.
//

#include <iomanip> // For formatting output
#include <iostream>
using namespace std;

/**
 3. C++ Lab Exercises Week 3.pdf
 */

/**
 Write a function named getDistance() that accepts a vehicle’s speed
 and time as arguments, and returns the distance the vehicle has
 traveled. Distance = Speed * Time. Demonstrate the function in a
 complete program.
 */

double getDistance(double speed, double time) { return speed * time; }

//int main() {
//    double speed, time;
//    cout << "Enter the vehicle's speed (in miles per hour): ";
//    cin >> speed;
//
//    cout << "Enter the travel time (in hours): ";
//    cin >> time;
//
//    if (speed < 0 || time < 0) {
//        cout << "Error: Speed and time cannot be negative." << endl;
//        return 1;
//    }
//
//    double distance = getDistance(speed, time);
//
//    cout << fixed << setprecision(2);
//    cout << "\nThe vehicle traveled " << distance << " miles." << endl;
//    return 0;
//}

/**
 Write a min() function that returns the smallest of two given integers.
 Write another min() function that uses the previous min() function to
 return the smallest of three given integers. Demonstrate both functions
 in a program.
 */


int min(int a, int b) {
    return (a < b) ? a : b;
}

int min(int a, int b, int c) {
    return min(min(a, b), c);
}

//int main() {
//    cout << "=== Testing min() with two parameters ===" << endl;
//    cout << "min(5, 10) = " << min(5, 10) << endl;
//    cout << "min(15, 7) = " << min(15, 7) << endl;
//    cout << "min(-3, 8) = " << min(-3, 8) << endl;
//    cout << "min(0, -5) = " << min(0, -5) << endl;
//    cout << "min(10, 10) = " << min(10, 10) << endl;
//    
//    cout << "\n=== Testing min() with three parameters ===" << endl;
//    cout << "min(5, 10, 3) = " << min(5, 10, 3) << endl;
//    cout << "min(15, 7, 20) = " << min(15, 7, 20) << endl;
//    cout << "min(-3, 8, -10) = " << min(-3, 8, -10) << endl;
//    cout << "min(0, -5, 2) = " << min(0, -5, 2) << endl;
//    cout << "min(7, 7, 7) = " << min(7, 7, 7) << endl;
//    
//    // Interactive demonstration
//    cout << "\n=== Interactive Demo ===" << endl;
//    int x, y, z;
//    
//    cout << "Enter two integers (x y): ";
//    cin >> x >> y;
//    cout << "Smallest of " << x << " and " << y << " is: " << min(x, y) << endl;
//    
//    cout << "\nEnter three integers (x y z): ";
//    cin >> x >> y >> z;
//    cout << "Smallest of " << x << ", " << y << ", and " << z << " is: "
//         << min(x, y, z) << endl;
//    
//    return 0;
//}


/**
 Raising a number n to a power p is the same as multiplying n by itself
 p times. Write a function called power() that takes a double value for
 n and an int value for p, and return the result as a double value. Use a
 default argument of 2 for p, so that if this argument is omitted, the
 number n will be squared. Write a main() function that gets values
 from the user to test this function.
 
 
 Extend the program to create a series of overloaded functions
 with the same name power() that, in addition to double also works
 with int, long and float.
 */

double power(double n, int p = 2) {
    double result = 1.0;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

////OVERLOAD 1: int version
//int power(int n, int p = 2) {
//   int result = 1;
//   for (int i = 0; i < p; i++) {
//       result *= n;
//   }
//   return result;
//}
//
//// OVERLOAD 2: long version
//long power(long n, int p = 2) {
//   long result = 1;
//   for (int i = 0; i < p; i++) {
//       result *= n;
//   }
//   return result;
//}
//
//// OVERLOAD 3: float version
//float power(float n, int p = 2) {
//   float result = 1.0f;
//   for (int i = 0; i < p; i++) {
//       result *= n;
//   }
//   return result;
//}

//int main() {
//    double number;
//    int exponent;
//    
//    cout << "Power Function Demonstrator" << endl;
//    cout << "============================" << endl;
//    
//    // Test 1: Using default (squared)
//    cout << "\nTest 1: Squaring a number (default)" << endl;
//    cout << "Enter a number: ";
//    cin >> number;
//    cout << number << " squared = " << power(number) << endl;
//    
//    // Test 2: Specific exponent
//    cout << "\nTest 2: Raising to a specific power" << endl;
//    cout << "Enter a number: ";
//    cin >> number;
//    cout << "Enter exponent: ";
//    cin >> exponent;
//    cout << number << " raised to " << exponent << " = "
//         << power(number, exponent) << endl;
//    
//    // Test 3: More examples
//    cout << "\nTest 3: Predefined examples" << endl;
//    cout << "power(3) = " << power(3) << endl;        // 9 (default)
//    cout << "power(3, 4) = " << power(3, 4) << endl;  // 81
//    cout << "power(2, 10) = " << power(2, 10) << endl; // 1024
//    cout << "power(5, 3) = " << power(5, 3) << endl;   // 125
//    
//    return 0;
//}

/**
 Write a function called zeroSmaller() that is passed two int arguments
 by reference and then sets the smaller of the two numbers to 0. Write
 a main() program to exercise this function.
 */

void zeroSmaller(int &a, int &b) {
    if (a < b) {
        a = 0;  // a is smaller, set it to 0
    } else if (b < a) {
        b = 0;  // b is smaller, set it to 0
    }
    // If equal, do nothing
}


//int main() {
//    int num1, num2;
//
//    cout << "Enter first number: ";
//    cin >> num1;
//    cout << "Enter second number: ";
//    cin >> num2;
//    
//    cout << "\nBefore zeroSmaller(): " << num1 << " and " << num2 << endl;
//    zeroSmaller(num1, num2);
//    cout << "After zeroSmaller():  " << num1 << " and " << num2 << endl << endl;
//    
//    return 0;
//}


/**
 Write a program that asks the user to enter 5 test scores between 1 and
 100. Repeat the question until the user enters a valid score. Calculate
 and display the average of all test scores excluding the lowest test
 score. Use the following three function prototypes:
 void getScore(int &);
 void calcAverage(int, int, int, int, int);
 int findLowest(int, int, int, int, int);
 */

// Function prototypes
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

void getScore(int &score) {
    do {
        cin >> score;
        
        if (score < 1 || score > 100) {
            cout << "Invalid score! Score must be between 1 and 100." << endl;
            cout << "Please enter a valid score: ";
        }
    } while (score < 1 || score > 100);
}

// Function to calculate and display the average
void calcAverage(int s1, int s2, int s3, int s4, int s5) {
    int lowest = findLowest(s1, s2, s3, s4, s5);
    int sum = s1 + s2 + s3 + s4 + s5 - lowest;
    double average = static_cast<double>(sum) / 4.0;
    
    cout << "\n========================================" << endl;
    cout << "SCORES:" << endl;
    cout << "  " << s1 << ", " << s2 << ", " << s3 << ", " << s4 << ", " << s5 << endl;
    cout << "\nRESULTS:" << endl;
    cout << "  Lowest score dropped: " << lowest << endl;
    cout << "  Sum of remaining: " << sum << endl;
    cout << fixed << setprecision(2);
    cout << "  Average: " << average << endl;
    cout << "========================================" << endl;
}

// Function to find the lowest of 5 scores
int findLowest(int s1, int s2, int s3, int s4, int s5) {
    int lowest = s1;
    
    if (s2 < lowest) lowest = s2;
    if (s3 < lowest) lowest = s3;
    if (s4 < lowest) lowest = s4;
    if (s5 < lowest) lowest = s5;
    
    return lowest;
}

//int main() {
//    int score1, score2, score3, score4, score5;
//    
//    cout << "\nEnter 5 test scores between 1 and 100" << endl;
//    cout << "The lowest score will be dropped." << endl << endl;
//    
//    // Get all 5 scores
//    cout << "Enter score #1: ";
//    getScore(score1);
//    
//    cout << "Enter score #2: ";
//    getScore(score2);
//    
//    cout << "Enter score #3: ";
//    getScore(score3);
//    
//    cout << "Enter score #4: ";
//    getScore(score4);
//    
//    cout << "Enter score #5: ";
//    getScore(score5);
//    
//    // Calculate and display average
//    calcAverage(score1, score2, score3, score4, score5);
//    
//    return 0;
//}


/**
 Write a program that uses an inline function to convert pounds to
 kilograms. 1 kilogram = 0.453592 * pounds.
 
 Question: What is difference between function and inline function?
 
 Detailed Comparison Table

 Feature                                Regular Function                            Inline Function
 Function Call Overhead       Yes (push/pop stack, jump)            No (code inserted directly)
 Code Size                            Smaller (one copy of code)            Larger (code duplicated at each call)
 Performance                        Slower (due to call overhead)        Faster (no call overhead)
 Memory Usage                    Less memory (single instance)      More memory (multiple copies)
 Compilation Time                 Faster                                             Slightly slower
 Recursion Support               Yes                                                  No (compiler usually ignores inline)
 Debugging                           Easier (can step into)                      Harder (code is inlined)
 Best Used For                     Large functions, complex logic        Small, frequently called functions
 Compiler Control                 Must compile function separately    Code integrated at call site
 
 */

inline double poundsToKilograms(double pounds) {
    return 0.453592 * pounds;
}

//int main() {
//    double pounds;
//    
//    cout << "Enter weight in pounds: ";
//    cin >> pounds;
//    
//    if (pounds < 0) {
//        cout << "Weight cannot be negative. Please enter a positive value." << endl;
//    } else {
//        double kilograms = poundsToKilograms(pounds);
//        
//        cout << fixed << setprecision(4);
//        cout << "\n" << pounds << " pounds = " << kilograms << " kilograms" << endl;
//        cout << setprecision(2);
//        cout << "(" << pounds << " lbs = " << kilograms << " kg)" << endl << endl;
//    }
//    return 0;
//}


/**
 Write a function that, when you call it, displays a message telling how
 many times it has been called: “I have been called three times”, for
 instance. Write a main() program that calls this function at least 10
 times. Implement this function without using a global variable.
 */

// Function that counts and displays how many times it has been called
void displayCallCount() {
    // Static local variable - persists between function calls
    // Initialized only once, on the first call
    static int callCount = 0;
    
    callCount++;
    cout << "I have been called " << callCount;
    
    if (callCount == 1) {// Handle singular/plural
        cout << " time." << endl;
    } else {
        cout << " times." << endl;
    }
}

//int main() {
//    cout << "Calling the function 15 times:" << endl;
//    cout << "--------------------------------" << endl;
//    
//    for (int i = 0; i < 15; i++) {
//        displayCallCount();
//    }
//    
//    return 0;
//}

/**
 Write a function called swap() that interchanges two int values passed
 to it by the calling program. (Note that the function should swap the
 values of the variables in the calling program). Create a main program
 to exercise this function.
 */

void swap(int &a, int &b);

//int main() {
//    cout << "========================================" << endl;
//    cout << "   SWAP FUNCTION DEMONSTRATION" << endl;
//    cout << "========================================" << endl;
//
//    int x, y;
//    cout << "Enter first number: ";
//    cin >> x;
//    cout << "Enter second number: ";
//    cin >> y;
//    
//    cout << "\nBefore swap: x = " << x << ", y = " << y << endl;
//    swap(x, y);
//    cout << "After swap:  x = " << x << ", y = " << y << endl;
//    
//    return 0;
//}

// Function definition - swaps two integers using pass by reference
void swap(int &a, int &b) {
    int temp = a;  // Store the value of a in a temporary variable
    a = b;         // Assign b's value to a
    b = temp;      // Assign the original a's value to b
}


/**
 Write an isSquare() function that determines whether the given
 integer is a square number and return true or false accordingly. Write
 a main() function to demonstrate this by asking the user to enter an
 integer value between 1 and 20 from the user. Repeat the question
 until the user enters a valid integer within the range.
 */

#include <cmath>

bool isSquare(int num) {
    int root = static_cast<int>(sqrt(num)); //static_cast<int>(4.0) -> Converts to 4 (int)
    return (root * root == num);
}

//int main() {
//    int number;
//    do {
//        cout << "\nEnter an integer between 1 and 20: ";
//        cin >> number;
//        
//        if (number < 1 || number > 20) {
//            cout << "Invalid! Please enter a number between 1 and 20." << endl;
//        }
//    } while (number < 1 || number > 20);
//    
//    // Check if square
//    if (isSquare(number)) {
//        cout << "\n" << number << " IS a perfect square!" << endl;
//    } else {
//        cout << "\n " << number << " is NOT a perfect square." << endl;
//    }
//    
//    return 0;
//}


/**
 Largest/Smallest Array Values
 Write a program that lets the user enter 10 values into an array. The program
 should then display the largest and smallest values stored in the array.
 */


//int main() {
//    const int SIZE = 10;
//    int numbers[SIZE];
//    int largest = 0, smallest = 0;
//    
//    
//    // Get 10 values from the user
//    for (int i = 0; i < SIZE; i++) {
//        cout << "Enter value #" << (i + 1) << ": ";
//        cin >> numbers[i];
//        if (i == 0) {
//            largest = numbers[i];
//            smallest = numbers[i];
//        } else {
//            if (largest < numbers[i]){
//                largest = numbers[i];
//            }
//            if (smallest > numbers[i]){
//                smallest = numbers[i];
//            }
//        }
//    }
//
//    cout << "All values entered:" << endl;
//    for (int i = 0; i < SIZE; i++) {
//        cout << "  Value #" << (i + 1) << ": " << setw(5) << numbers[i] << endl;
//    }
//        
//    cout << "\n----------------------------------------" << endl;
//    cout << "Largest value:  " << largest << endl;
//    cout << "Smallest value: " << smallest << endl;
//    cout << "========================================" << endl;
//    
//    return 0;
//}


/**
 Rainfall Statistics
 Write a program that lets the user enter the total rainfall for each of 12 months
 into an array of doubles. The program should calculate and display the total
 rainfall for the year, the average monthly rainfall, and the months with the highest
 and lowest amounts.
 */
