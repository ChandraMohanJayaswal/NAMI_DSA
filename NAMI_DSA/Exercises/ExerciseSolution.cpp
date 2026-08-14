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


/**
 Nachos and Salsa
 Write a program that lets a maker of nachos and salsa keep track of sales for five
 different types of salsa: mild, medium, sweet, hot and zesty. The program should
 use two parallel 5-element arrays: an array of strings that holds the five salsa
 names and an array of integers that hold the number of jars sold during the past
 month for each salsa type. The salsa names should be stored using an initialization
 list at the time the name array is created. The program should prompt the user to
 enter the number of jars sold for each type. Once this sales data has been entered,
 the program should produce a report that displays sales for each salsa type, total
 sales, and the names of the highest selling and lowest selling products.
 
 Input Validation: Do not accept negative values for number of jars sold.
 */


/**
 Grade Book
 A teacher has five students who have taken four tests. The teacher uses the
 following grading scale to assign a letter grade to a student, based on the average
 of his or her four test scores.
 
 Write a program that uses an array of string objects to hold the five student
 names, an array of five characters to hold the five students’ letter grades, and five
 arrays of four doubles to hold each student’s set of test scores.
 The program should allow the user to enter each student’s name and his or her
 four test scores. It should then calculate and display each student’s average test
 score and a letter grade based on the average.
 
 Input Validation: Do not accept test scores less than 0 or greater than 100
 */


/**
 2D Array Operations
 Write a program that creates a two-dimensional array initialized with test data.
 Use any data type you wish. The program should have the following functions:
 - getTotal. This function should accept a two-dimensional array as its
 argument and return the total of all the values in the array.
 - getAverage. This function should accept a two-dimensional array as its
 argument and return the average of all the values in the array.
 - getRowTotal. This function should accept a two-dimensional array as its
 first argument and an integer as its second argument. The second argument
 should be the subscript of a row in the array. The function should return
 the total of the values in the specified row.
 - getColumnTotal. This function should accept a two-dimensional array as
 its first argument and an integer as its second argument. The second
 argument should be the subscript of a column in the array. The function
 should return the total of the values in the specified column.
 - getHighestInRow. This function should accept a two-dimensional array as
 its first argument and an integer as its second argument. The second
 argument should be the subscript of a row in the array. The function
 should return the highest value in the specified row of the array.
 - getLowestInRow. This function should accept a two-dimensional array as
 its first argument and an integer as its second argument. The second
 argument should be the subscript of a row in the array. The function
 should return the lowest value in the specified row of the array.
 
 Demonstrate each of the functions in this program.
 */


/**
 Charge Account Validation
 Write a program that lets the user enter a charge account number. The program
 should determine if the number is valid by checking for it in the following list:
 5658845 4520125 7895122 8777541 8451277
 1302850 8080152 4562555 5552012 5050552
 7825877 1250255 1005231 6545231 3852085
 7576651 7881200 4581002
 The list of numbers above should be initialized in a single-dimensional array. A
 simple linear search should be used be used to locate the number entered by the
 user. If the user enters a number that is in the array, the program should display a
 message saying that the number is valid. If the user enters a number that is not in
 the array, the program should display a message indicating that the number is
 invalid.
 */


/**
 Write a method
 boolean sameSet(int a[], int b[])
 that checks whether two arrays have the same elements in some order, ignoring
 duplicates. For example, the two arrays
 1 4 9 16 9 7 4 9 11
 and
 11 11 7 9 16 4 1
 would be considered identical. Implement this in a program.
 */

#include <vector>
#include <algorithm>

// Function to remove duplicates and get unique elements
vector<int> getUniqueElements(int arr[], int size) {
    vector<int> temp(arr, arr + size);
    sort(temp.begin(), temp.end());
    auto newEnd = unique(temp.begin(), temp.end()); //vector<int>::iterator newEnd = unique(temp.begin(), temp.end());
    temp.erase(newEnd, temp.end());
    return temp;
}

bool sameSet(int a[], int b[], int sizeA, int sizeB) {
    vector<int> uniqueA = getUniqueElements(a, sizeA);
    vector<int> uniqueB = getUniqueElements(b, sizeB);
    
    return uniqueA == uniqueB;
}


//int main() {
//    // Test arrays
//    int arr1[] = {1, 4, 9, 16, 9, 7, 4, 9, 11};
//    int arr2[] = {11, 11, 7, 9, 16, 4, 1};
//    int arr3[] = {1, 2, 3, 4, 5};
//    int arr4[] = {1, 2, 3, 4, 6};
//    
//    int size1 = sizeof(arr1) / sizeof(arr1[0]);
//    int size2 = sizeof(arr2) / sizeof(arr2[0]);
//    int size3 = sizeof(arr3) / sizeof(arr3[0]);
//    int size4 = sizeof(arr4) / sizeof(arr4[0]);
//    
//    cout << "========================================" << endl;
//    cout << "   SAME SET - VECTOR VERSION" << endl;
//    cout << "========================================" << endl;
//    
//    // Test 1: Same set
//    cout << "\nTest 1: ";
//    if (sameSet(arr1, arr2, size1, size2)) {
//        cout << "Arrays have the same set" << endl;
//    } else {
//        cout << "Arrays have different sets" << endl;
//    }
//    
//    // Test 2: Different set
//    cout << "Test 2: ";
//    if (sameSet(arr3, arr4, size3, size4)) {
//        cout << "Arrays have the same set" << endl;
//    } else {
//        cout << "Arrays have different sets" << endl;
//    }
//    
//    return 0;
//}


/**
 Consider the following unsorted sets:
 (i) 7 2 3 8 9 1
 (ii) 55 22 44 11 33
 (iii) 101 22 44 57 45 77
 Sort the above set in ascending order manually using Bubble Sort
 Algorithm and display the elements in the set after each exchange
 performed. Modify the program BubbleSortDemo.cpp to display the
 set after each exchange/swap.
 */


/**
 (i) 5 7 2 8 9 1
 (ii) 8 29 19 7 45 18
 (iii) 123 11 2 50 55 24 34
 Sort the above set in ascending order manually using Selection Sort
 Algorithm and display the elements in the set after each exchange
 performed. Modify the program SelectionSortDemo.cpp to display the
 set after each exchange/swap.
 */

/**
 Consider the following unsorted set:
 7 2 4 6 3 1
 25 12 37 65 24 17
 101 27 33 45 27 68 55
 Sort the above set in ascending order manually using Insertion Sort
 Algorithm and display the elements in the set after each exchange
 performed. Modify the program InsertionSortDemo.cpp to display the
 set after each pass.
 */


/**
 Write a function that checks whether two vectors have the same
 elements in the same order. Demonstrate in a program.
 */


/**
 Write a function that computes the alternating sum of all the elements
 in a vector. For example, if alternating_sum is called with a vector
 containing
 1 4 9 16 9 7 4 9 11
 then it computes
 1-4+9-16+9-7+4-9+11=-2
 */


/**
 Write a function that removes duplicates from a vector. For example,
 if remove_duplicates is called with a vector containing
 1 4 9 16 9 7 4 9 11
 then the vector is changed to
 1 4 9 16 7 11
 */


/**
 Charge Account Validation Modification
 Modify the program from Last Week Exercises you wrote for the
 previous problem (Charge Account Validation) so it performs a binary
 search to locate valid account numbers. Use the selection sort
 algorithm to sort the array before the binary search is performed.
 */


/**
 Rainfall statistics Modification
 Modify the Rainfall Statistics program from Last Week Exercises you
 wrote for problem # 2.The program should display a list of months,
 sorted in order of rainfall, from highest to lowest.
 */


/**
 String Selection Sort
 Modify the selectionSort function given in (Pr8-5) in the sample
 programs folder on Nile so it sorts an array of strings instead of an
 array of ints. Test the function with a driver program.
 */


/**
 Sorting Benchmarks
 Write a program that uses two identical arrays of at least 20 integers.
 It should call a function that uses the bubble sort algorithm to sort one
 of the arrays in ascending order. The function should keep a count of
 the number of exchanges it makes. The program then should call a
 function that uses the selection sort algorithm to sort the other array. It
 should also keep count of the number of the exchanges it makes.
 Display these values on the screen.
 */


/**
 Write a function that dynamically allocates an array of integers. The function
should accept an integer argument indicating the number of elements to allocate.
The function should return a pointer to the array.
 */

// Function to dynamically allocate an array
int* allocateArray(int size) {
    int* arr = new int[size];
    
    if (arr == nullptr) {
        cout << "Error: Memory allocation failed!" << endl;
        return nullptr;
    }
    
    cout << "Memory allocated for " << size << " scores." << endl;
    return arr;
}

//int main() {
//    int numElements;
//    
//    cout << "Enter the number of elements: ";
//    cin >> numElements;
//    
//    // Allocate the array
//    int* myArray = allocateArray(numElements);
//    
//    // Check if allocation was successful
//    if (myArray == nullptr) {
//        cout << "Memory allocation failed!" << endl;
//        return 1;
//    }
//    
//    // Fill the array
//    cout << "Enter " << numElements << " values:" << endl;
//    for (int i = 0; i < numElements; i++) {
//        cout << "Value " << (i + 1) << ": ";
//        cin >> myArray[i];
//    }
//    
//    // Display the array
//    cout << "\nYou entered: ";
//    for (int i = 0; i < numElements; i++) {
//        cout << myArray[i] << " ";
//    }
//    cout << endl;
//    
//    // Free the memory
//    delete[] myArray;
//    
//    return 0;
//}

/**
 Write a program that dynamically allocates an array large enough to hold a user-
 defined number of test scores. Once all the scores are entered, the array should
 be passed to a function that sorts them in ascending order. Another function
 should be called that calculates the average score. The program should display
 the sorted list of scores and averages with appropriate headings.
 */

// Function prototypes
void getScores(int* scores, int size);
void sortScores(int* scores, int size);
double calculateAverage(int* scores, int size);
void displayScores(int* scores, int size);
void displayResults(int* scores, int size, double average);

//int main() {
//    int numScores;
//
//    // Get the number of test scores
//    cout << "How many test scores would you like to enter? ";
//    cin >> numScores;
//    
//    // Validate input
//    if (numScores <= 0) {
//        cout << "Invalid number of scores!" << endl;
//        return 1;
//    }
//    
//    // Dynamically allocate the array
//    int* scores = allocateArray(numScores);
//    
//    // Check if allocation was successful
//    if (scores == nullptr) {
//        cout << "Memory allocation failed!" << endl;
//        return 1;
//    }
//    
//    // Get the scores from the user
//    getScores(scores, numScores);
//    
//    // Display original scores
//    cout << "\nOriginal scores: ";
//    displayScores(scores, numScores);
//    
//    // Sort the scores
//    sortScores(scores, numScores);
//    
//    // Calculate the average
//    double average = calculateAverage(scores, numScores);
//    
//    // Display the results
//    displayResults(scores, numScores, average);
//    
//    // Free the dynamically allocated memory
//    delete[] scores;
//    cout << "\nMemory freed successfully!" << endl;
//    
//    return 0;
//}


// Function to get scores from the user
void getScores(int* scores, int size) {
    cout << "\nEnter the test scores:" << endl;
    for (int i = 0; i < size; i++) {
        do {
            cout << "Score #" << (i + 1) << ": ";
            cin >> scores[i];
            
            // Validate score (0-100)
            if (scores[i] < 0 || scores[i] > 100) {
                cout << "Invalid score! Please enter a value between 0 and 100." << endl;
            }
        } while (scores[i] < 0 || scores[i] > 100);
    }
}

// Function to sort scores in ascending order (Bubble Sort)
void sortScores(int* scores, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (scores[j] > scores[j + 1]) {
                // Swap elements
                int temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
}

// Function to calculate the average
double calculateAverage(int* scores, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return static_cast<double>(sum) / size;
}

// Function to display scores in a single line
void displayScores(int* scores, int size) {
    for (int i = 0; i < size; i++) {
        cout << scores[i] << "  ";
    }
    cout << endl;
}

// Function to display formatted results
void displayResults(int* scores, int size, double average) {
    // Display sorted scores in a table
    cout << "\nSorted Test Scores (Ascending Order):" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Position  Score" << endl;
    cout << "--------  -----" << endl;
    
    for (int i = 0; i < size; i++) {
        cout << setw(8) << (i + 1) << "  " << setw(5) << scores[i] << endl;
    }
    
    // Display statistics
    cout << "Number of scores: " << size << endl;
    cout << "Lowest score:     " << scores[0] << endl;
    cout << "Highest score:    " << scores[size - 1] << endl;
    cout << fixed << setprecision(2);
    cout << "Average score:    " << average << endl;
}


/**
 The following function uses reference variables as parameters. Rewrite the
 function so it uses pointers instead of reference variables, and then demonstrate
 the function in a complete program.
 int doSomething(int &x, int &y)
 {
 int temp = x;
 x = y * 10;
 y = temp * 10 ;
 return x + y ;
 }
 */

int doSomething(int *x, int *y);

//int main() {
//    int a, b;
//    int result;
//    
//    // Get input from user
//    cout << "\nEnter value for a: ";
//    cin >> a;
//    cout << "Enter value for b: ";
//    cin >> b;
//    
//    // Display values before calling the function
//    cout << "\nBefore calling doSomething():" << endl;
//    cout << "  a = " << a << endl;
//    cout << "  b = " << b << endl;
//    
//    // Call the function with pointers (addresses)
//    result = doSomething(&a, &b);
//    
//    // Display values after calling the function
//    cout << "\nAfter calling doSomething():" << endl;
//    cout << "  a = " << a << endl;
//    cout << "  b = " << b << endl;
//    cout << "  Result = " << result << endl;
//    
//    return 0;
//}

// Function rewritten to use pointers instead of references
int doSomething(int *x, int *y) {
    // Store the value pointed to by x in temp
    int temp = *x;
    
    // Modify the value at x: y * 10
    *x = *y * 10;
    
    // Modify the value at y: temp * 10
    *y = temp * 10;
    
    // Return the sum of the new values
    return *x + *y;
}


/**
 In statistics, the mode of a set of values is the value that occurs most often or with
 the greatest frequency. Write a function that accepts as arguments the following:
 A) An array of integers
 B) An integer that indicates the number of elements in the array
 The function should determine the mode of the array. That is, it should determine
 which value in the array occurs most often. The mode is the value the function
 should return. If the array has no mode (none of the values occur more than once),
 the function should return -1. (Assume the array will always contain non-negative
 values.)
 Demonstrate your pointer prowess by using pointer notation instead of array
 notation in this function.
 */


/**
 Write a function that accepts an int array and the array’s size as arguments. The
 function should create a copy of the array, except that the element values should
 be reversed in the copy. The function should return a pointer to the new array.
 Demonstrate the function in a complete program.
 */
