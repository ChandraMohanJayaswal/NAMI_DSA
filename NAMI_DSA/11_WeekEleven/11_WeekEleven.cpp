//
//  11_WeekEleven.cpp
//  NAMI_DSA
//
//  Created by Chandra Jayaswal on 13/09/2026.
//

#include <iostream>
#include <string>
using namespace std;

struct StackNode {
    int data;
    StackNode *nextAddress;
    StackNode (int data, StackNode *nextAddress) {
        this->data = data;
        this->nextAddress = nextAddress;
    }
    void push(StackNode *newNode) {
        //Need to move at the end
        StackNode *currentNode = this;
        while (currentNode->nextAddress != nullptr) {
            currentNode = currentNode->nextAddress;
        }
        //Add new node at the end
        currentNode->nextAddress = newNode;
    }
    StackNode* pop() {
        //Need to move at the end
        StackNode *previousNode = nullptr;
        StackNode *currentNode = this;
        while (currentNode->nextAddress != nullptr) {
            previousNode = currentNode;
            currentNode = currentNode->nextAddress;
        }
        previousNode->nextAddress = nullptr;
        return currentNode;
    }
    void display(){
        cout <<"List: ";
        StackNode *currentNode = this;
        while (currentNode != nullptr) {
            cout << currentNode->data << " ";
            currentNode = currentNode->nextAddress;
        }
        cout << endl;
    }
};

int main() {
    StackNode *node1 = new StackNode(10, nullptr);
    node1->push(new StackNode(20, nullptr));
    node1->push(new StackNode(30, nullptr));
    node1->push(new StackNode(40, nullptr));
    node1->display();
    StackNode *node = node1->pop();
    cout <<"Poped Data: " << node->data << endl;
    node1->display();

    return 0;
}
