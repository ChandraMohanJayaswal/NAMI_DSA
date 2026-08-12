//
//  04_WeekFour.cpp
//  NAMI_DSA
//
//  Created by Chandra Jayaswal on 12/08/2026.
//

#include <iomanip> // For formatting output
#include <iostream>
using namespace std;

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void swap1(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void swap2(int *x, int *y) {
    // Store the value pointed to by x in temp
    int temp = *x;
    //Put data of y in x
    *x = *y;
    // put data of temp in y
    *y = temp;
}


//int main() {
//    int a = 10, b = 20;
//
//    
//    // Display values before calling the function
//    cout << "\nBefore calling doSomething():" << endl;
//    cout << "  a = " << a << endl;
//    cout << "  b = " << b << endl;
//
//    swap(a,b);
//    cout << "After calling swap():" << endl;
//    cout << "  a = " << a << endl;
//    cout << "  b = " << b << endl;
//    
//    swap1(a,b);
//    cout << "After calling swap1():" << endl;
//    cout << "  a = " << a << endl;
//    cout << "  b = " << b << endl;
//    
//    swap2(&a,&b);
//    cout << "After calling swap2():" << endl;
//    cout << "  a = " << a << endl;
//    cout << "  b = " << b << endl;
//    
//    return 0;
//}


void displayCallCount1() {
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
//        displayCallCount1();
//    }
//
//    return 0;
//}
