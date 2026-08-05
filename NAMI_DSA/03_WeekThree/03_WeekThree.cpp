//
//  03_WeekThree.cpp
//  NAMI_DSA
//
//  Created by Chandra Jayaswal on 02/08/2026.
//

#include "03_WeekThree.hpp"

#include <iostream>
using namespace std;

void bubbleSort(int inputData[], int length) {
    for (int pivot = 0; pivot < (length - 1); pivot++){
        for (int dataIndex = pivot + 1; dataIndex < length; dataIndex ++) {
            int pivotData = inputData[pivot];
            int data = inputData[dataIndex];
            if (pivotData > data) { //Asecnding Order --- Swap
                inputData[pivot] = data;
                inputData[dataIndex] = pivotData;
            }
        }
    }
    //Display Sorted Data
    for (int i = 0; i < length; i ++) {
        cout <<inputData[i] <<" ";
    }
}

int sumArray(int arrayInput[], int length){
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum = sum + arrayInput[i];
    }
    return sum;
}

/**
 Passing Array as a Pointer
 */
int sum(int *array, int sizeOfArray) {
    int sum = 0;
    for (int i = 0; i < sizeOfArray; i++) {
        sum = sum + *(array + i);
    }
    return sum;
}

int main() {
    int arrayOne[] = {3,4,1,9,4,7,2};
    int length = sizeof(arrayOne) / sizeof(arrayOne[0]);
    bubbleSort(arrayOne, length);
//    int result = sum(arrayOne, length);
//    cout << "Result: " << result << endl;
//    
//    int result1 = sumArray(arrayOne, length);
//    cout << "Result1: " << result1 << endl;
    return 0;
}
