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
    
    MyStack (int data) {
        this->data = data;
        this->nextAddress = nullptr;
    }
    
    void push(int data) {
        MyStack *newNode = new MyStack(data);
        //Need to move at the end
        MyStack *currentNode = this;
        while (currentNode->nextAddress != nullptr) {
            currentNode = currentNode->nextAddress;
        }
        //Add new node at the end
        currentNode->nextAddress = newNode;
    }
    int pop() {
        //Need to move at the end
        MyStack *previousNode = nullptr;
        MyStack *currentNode = this;
        while (currentNode->nextAddress != nullptr) {
            previousNode = currentNode;
            currentNode = currentNode->nextAddress;
        }
        if (previousNode != nullptr) {
            //If at least one data is in stack
            previousNode->nextAddress = nullptr;
        }
        return currentNode->data;
    }
    void display(){
        cout <<"List: ";
        MyStack *currentNode = this;
        while (currentNode != nullptr) {
            cout << currentNode->data << " ";
            currentNode = currentNode->nextAddress;
        }
        cout << endl;
    }
    
    int size() {
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
//    myStack->push(20);
//    myStack->push(30);
//    myStack->push(40);
    myStack->display();
    int data = myStack->pop();
    cout <<"Poped Data: " << data << endl;
    myStack->display();

    cout <<"Size: " << myStack->size() << endl;

    return 0;
}
