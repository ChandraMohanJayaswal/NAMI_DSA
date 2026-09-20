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
        if (this->nextAddress == nullptr) {
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
        return data;
    }
    
    void display() {
        if (isEmpty) {
            cout << "Stack List Empty " << endl;
            return;
        }
        
        cout << "Stack List: ";
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
    
    ~MyStack(){

    }
};

struct MyQueue {
    int data;
    MyQueue *nextAddress;
    bool isEmpty;
    
    MyQueue(int data) {
        this->data = data;
        this->nextAddress = nullptr;
        this->isEmpty = false;
    }
    
    MyQueue() {
        this->data = 0;
        this->nextAddress = nullptr;
        this->isEmpty = true;
    }
    
    // ENQUEUE - add at the rear (end)
    void push(int data) {
        if (isEmpty) {
            this->data = data;
            isEmpty = false;
            return;
        }
        
        MyQueue *newNode = new MyQueue(data);
        MyQueue *currentNode = this;
        while (currentNode->nextAddress != nullptr) {
            currentNode = currentNode->nextAddress;
        }
        currentNode->nextAddress = newNode;
    }
    
    // DEQUEUE - remove from the front (beginning)
    int pop() {
        if (isEmpty) {
            return -1;
        }
        
        // If only one element
        if (nextAddress == nullptr) {
            int data = this->data;
            isEmpty = true;
            return data;
        }
        
        // More than one element — remove from FRONT
        int data = this->data;
        MyQueue *temp = nextAddress;
        
        // Copy next node's data and pointer into this node
        this->data = temp->data;
        this->nextAddress = temp->nextAddress;
        
        return data;
    }
    void display() {
        if (isEmpty) {
            cout << "Queue List Empty " << endl;
            return;
        }
        
        cout << "Queue List: ";
        MyQueue *currentNode = this;
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
        MyQueue *currentNode = this;
        while (currentNode != nullptr) {
            ++counter;
            currentNode = currentNode->nextAddress;
        }
        return counter;
    }

    ~MyQueue(){

    }
};

//int main() {
//    MyStack *myStack = new MyStack(10);
//    myStack->push(20);
//    myStack->push(30);
//    myStack->display();
//    myStack->pop();
//    myStack->display();
//    myStack->pop();
//    myStack->display();
//    myStack->pop();
//    myStack->display();
//    
//    delete myStack;
//    
//    MyQueue *myQueue = new MyQueue(10);
//    myQueue->push(20);
//    myQueue->push(30);
//    myQueue->display();
//    myQueue->pop();
//    myQueue->display();
//    myQueue->pop();
//    myQueue->display();
//    myQueue->pop();
//    myQueue->display();
//    
//    delete myQueue;
//    return 0;
//}

template <typename T>
struct MyBinaryTree {
    T data;
    MyBinaryTree *leftNode;
    MyBinaryTree *rightNode;
    
    MyBinaryTree() {
        data = -1;
        leftNode = nullptr;
        rightNode = nullptr;
    }
    
    MyBinaryTree(T data){
        this->data = data;
        leftNode = nullptr;
        rightNode = nullptr;
    }
    
    void displayInOrder() {
        if (leftNode != nullptr) {
            leftNode->displayInOrder();
        }
        cout << data << " ";
        if (rightNode != nullptr) {
            rightNode->displayInOrder();
        }
    }
    
    void displayPreOrder() {
        cout << data << " ";
        if (leftNode != nullptr) {
            leftNode->displayPreOrder();
        }
        if (rightNode != nullptr) {
            rightNode->displayPreOrder();
        }
    }
    
    void displayPostOrder() {
        if (leftNode != nullptr) {
            leftNode->displayPostOrder();
        }
        if (rightNode != nullptr) {
            rightNode->displayPostOrder();
        }
        cout << data << " ";
    }
};


int main() {
    MyBinaryTree<int> *binaryTree = new MyBinaryTree(20);
    
    MyBinaryTree<int> *node18 = new MyBinaryTree(18);
    MyBinaryTree<int> *node16 = new MyBinaryTree(16);
    MyBinaryTree<int> *node19 = new MyBinaryTree(19);
    MyBinaryTree<int> *node25 = new MyBinaryTree(25);
    MyBinaryTree<int> *node23 = new MyBinaryTree(23);
    MyBinaryTree<int> *node26 = new MyBinaryTree(26);

    binaryTree->leftNode = node18;
    node18->leftNode = node16;
    node18->rightNode = node19;
    binaryTree->rightNode = node25;
    node25->leftNode = node23;
    node25->rightNode = node26;
    
    cout <<endl  << "In Order: " << endl;
    binaryTree->displayInOrder();
    
    cout <<endl << "Pre Order: " << endl;
    binaryTree->displayPreOrder();
    
    cout <<endl << "Post Order: " << endl;
    binaryTree->displayPostOrder();
    
    
    return 0;
}
