//
//  11_WeekEleven.cpp
//  NAMI_DSA
//
//  Created by Chandra Jayaswal on 13/09/2026.
//

#include <iostream>
#include <string>
using namespace std;

struct MyStack {
    int data;
    MyStack *nextAddress;
    bool isEmpty;  // Flag to indicate if this is an empty stack
    
    MyStack(int data) {
        this->data = data;
        this->nextAddress = nullptr;
        this->isEmpty = false;
    }
    
    MyStack() {  // Default constructor for empty stack
        this->data = 0;
        this->nextAddress = nullptr;
        this->isEmpty = true;
    }
    
    void push(int data) {
        if (isEmpty) {
            this->data = data;
            isEmpty = false;
            return;
        }
        
        MyStack *newNode = new MyStack(data);
        MyStack *currentNode = this;
        while (currentNode->nextAddress != nullptr) {
            currentNode = currentNode->nextAddress;
        }
        currentNode->nextAddress = newNode;
    }
    
    int pop() {
        if (isEmpty) {
            return -1;  // Stack is empty
        }
        
        // If only one element
        if (nextAddress == nullptr) {
            int data = this->data;
            isEmpty = true;
            return data;
        }
        
        // More than one element
        MyStack *previousNode = nullptr;
        MyStack *currentNode = this;
        while (currentNode->nextAddress != nullptr) {
            previousNode = currentNode;
            currentNode = currentNode->nextAddress;
        }
        
        int data = currentNode->data;
        previousNode->nextAddress = nullptr;
        delete currentNode;
        return data;
    }
    
    void display() {
        if (isEmpty) {
            cout << "List: " << endl;
            return;
        }
        
        cout << "List: ";
        MyStack *currentNode = this;
        while (currentNode != nullptr) {
            cout << currentNode->data << " ";
            currentNode = currentNode->nextAddress;
        }
        cout << endl;
    }
    
    int size() {
        if (isEmpty) {
            return 0;
        }
        
        int counter = 0;
        MyStack *currentNode = this;
        while (currentNode != nullptr) {
            ++counter;
            currentNode = currentNode->nextAddress;
        }
        return counter;
    }
};

int main() {
    MyStack *myStack = new MyStack(10);
//    MyStack *myStack = new MyStack();

//    myStack->push(20);
//    myStack->push(30);
//    myStack->push(40);
    myStack->display();
    cout <<"Stack Size: " << myStack->size() << endl;
    int data = myStack->pop();
    cout <<"Poped Data: " << data << endl;
    myStack->display();
    cout <<"Stack Size: " << myStack->size() << endl;

    return 0;
}
