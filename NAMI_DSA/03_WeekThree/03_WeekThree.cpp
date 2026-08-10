//
//  03_WeekThree.cpp
//  NAMI_DSA
//
//  Created by Chandra Jayaswal on 02/08/2026.
//

#include <iostream>
#include <vector>
using namespace std;

void vectorDemo() {
    vector<int> vectorData = {1,2,3,3,5,8,9,1};
//    vector<int> vectorData(3, 5); // {5,5,5}
//    vectorData.insert(vectorData.begin(), 100);
//    vectorData.push_back(200);
//    vectorData.erase(vectorData.begin());
//    vectorData.pop_back(); //Delete last data
    vectorData.erase(vectorData.begin(), vectorData.end());
    if (vectorData.empty()) {
        cout << "No data" << endl;
    }
    for (int data : vectorData){
        cout << data << " ";
    }
    
    cout << endl;
    cout << "Size: " << vectorData.size() << endl;
    return;
}

void selectionSort(int inputData[], int length) {
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

void insertionSort(int inputData[], int length) {
    if (length < 2) { return;}
    for (int pivotIndex = 1; pivotIndex < length; pivotIndex++){
        int pivotData = inputData[pivotIndex];
        int dataIndex = pivotIndex - 1;
        while (dataIndex >= 0 && inputData[dataIndex] > pivotData) {
            inputData[dataIndex + 1] = inputData[dataIndex];
            dataIndex = dataIndex - 1;
        }
        inputData[dataIndex + 1] = pivotData;

    }
    
    //Display Sorted Data
    for (int i = 0; i < length; i ++) {
        cout <<inputData[i] <<" ";
    }
}

void bubbleSort(int inputData[], int length) {
    //Outer loop for the number of passes
    for (int pivot = 0; pivot < length - 1; pivot++) {
        // Inner loop to compare adjacent elements
        for (int dataIndex = 0; dataIndex < length - 1 - pivot; dataIndex ++) {
            int currentData = inputData[dataIndex];
            int nextData = inputData[dataIndex + 1];
            if (nextData < currentData) { //Swap for Ascending order
                inputData[dataIndex + 1] = currentData;
                inputData[dataIndex] = nextData;
            }
        }
    }
    
    //Display Sorted Data
    for (int i = 0; i < length; i ++) {
        cout <<inputData[i] <<" ";
    }
}

void bubbleSortOptimized(int inputData[], int length) {
    bool isSwapped;
    //Outer loop for the number of passes
    for (int pivot = 0; pivot < length - 1; pivot++) {
        isSwapped = false;
        // Inner loop to compare adjacent elements
        for (int dataIndex = 0; dataIndex < length - 1 - pivot; dataIndex ++) {
            int currentData = inputData[dataIndex];
            int nextData = inputData[dataIndex + 1];
            if (nextData < currentData) { //Swap for Ascending order
                inputData[dataIndex + 1] = currentData;
                inputData[dataIndex] = nextData;
                isSwapped = true; // Mark that a swap occurred
            }
        }
        // If no two elements were swapped in the inner loop, the array is sorted
        if (!isSwapped) {
            break;
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

int alternating_sum(vector<int> vectorData){
    int result = 0;
    for (int index = 0; index < vectorData.size(); index++) {
        if (index % 2 == 0) { //Even -- Add
            result = result + vectorData.at(index);
        } else { //Odd -- Sub
            result = result - vectorData.at(index);
        }
    }
    return  result;
}

void removDuplicateFromVector(vector<int> data) {
    vector<int> uniqueData = {};
    for (int index = 0; index < data.size(); index++) {
        int value = data.at(index);
        bool isUniqueValue = true;
        for (int newDataIndex = 0; newDataIndex < uniqueData.size(); newDataIndex++) {
            int newValue = uniqueData.at(newDataIndex);
            if (newValue == value) {
                isUniqueValue = false;
                break;
            }
        }
        if (isUniqueValue) {
            uniqueData.push_back(value);
        }
    }
    
    for (int data : uniqueData){
        cout << data << " ";
    }
    
    cout << endl;
    
    return;
}

//int main() {
//    vector<int> data = {1,4,9,16,9,7,4,9,11};
//    removDuplicateFromVector(data);
//    int result = alternating_sum(data);
//    cout << "Result: " << result << endl;
//    vectorDemo();
//    int arrayOne[] = {3,4,1,9,4,7,2};
//    int length = sizeof(arrayOne) / sizeof(arrayOne[0]);
//    bubbleSort(arrayOne, length);
//    bubbleSort(arrayOne, length);
//    insertionSortV2(arrayOne, length);
//    selectionSort(arrayOne, length);
//    int result = sum(arrayOne, length);
//    cout << "Result: " << result << endl;
//    
//    int result1 = sumArray(arrayOne, length);
//    cout << "Result1: " << result1 << endl;
//    return 0;
//}
