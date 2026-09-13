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
    MyStack (int data, MyStack *nextAddress) {
        this->data = data;
        this->nextAddress = nextAddress;
    }
    void push(MyStack *newNode) {
        //Need to move at the end
        MyStack *currentNode = this;
        while (currentNode->nextAddress != nullptr) {
            currentNode = currentNode->nextAddress;
        }
        //Add new node at the end
        currentNode->nextAddress = newNode;
    }
    MyStack* pop() {
        //Need to move at the end
        MyStack *previousNode = nullptr;
        MyStack *currentNode = this;
        while (currentNode->nextAddress != nullptr) {
            previousNode = currentNode;
            currentNode = currentNode->nextAddress;
        }
        previousNode->nextAddress = nullptr;
        return currentNode;
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
    MyStack *myStack = new MyStack(10, nullptr);
    myStack->push(new MyStack(20, nullptr));
    myStack->push(new MyStack(30, nullptr));
    myStack->push(new MyStack(40, nullptr));
    myStack->display();
    MyStack *node = myStack->pop();
    cout <<"Poped Data: " << node->data << endl;
    myStack->display();

    cout <<"Size: " << myStack->size() << endl;

    return 0;
}
