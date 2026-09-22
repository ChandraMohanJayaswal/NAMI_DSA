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
    void enqueue(int data) {
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
    int dequeue() {
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

    ~MyQueue(){}
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
//    myQueue->enqueue(20);
//    myQueue->enqueue(30);
//    myQueue->display();
//    myQueue->dequeue();
//    myQueue->display();
//    myQueue->dequeue();
//    myQueue->display();
//    myQueue->dequeue();
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
    
    int nodeSize() {
        int count = 1;  // count this node
        if (leftNode != nullptr) {
            count += leftNode->nodeSize();
        }
        if (rightNode != nullptr) {
            count += rightNode->nodeSize();
        }
        return count;
    }
    
    int leafNodeSize() {
        // If this node has no children, it's a leaf node
        if (leftNode == nullptr && rightNode == nullptr) {
            return 1;
        }
        
        int count = 0;
        if (leftNode != nullptr) {
            count += leftNode->leafNodeSize();
        }
        if (rightNode != nullptr) {
            count += rightNode->leafNodeSize();
        }
        return count;
    }
    
    /**
     Recursively compute the height of the left and right subtrees.
     Take the maximum of the two heights.
     Add 1 to account for the current node (the edge connecting to its tallest subtree).
     */
    int height() {
        int leftHeight = 0;
        int rightHeight = 0;
        
        if (leftNode != nullptr) {
            leftHeight = leftNode->height();
        }
        if (rightNode != nullptr) {
            rightHeight = rightNode->height();
        }
        
        return 1 + max(leftHeight, rightHeight);
    }
    
    /**
     Use BFS (level-order traversal) with a queue.
     At each level, q.size() tells us exactly how many nodes are on that level.
     Track the maximum level size seen so far.
     Process only the nodes currently on that level before moving on, so the queue contains exactly the next level's nodes at the start of the next iteration.
     */
    
    int width() {
        if (this == nullptr) return 0;
        
        // Queue for level-order traversal (BFS)
        queue<const MyBinaryTree*> q;
        q.push(this);
        
        int maxWidth = 0;
        
        while (!q.empty()) {
            int levelSize = q.size();          // number of nodes at current level
            maxWidth = std::max(maxWidth, levelSize);
            
            // Process all nodes at the current level
            for (int i = 0; i < levelSize; i++) {
                const MyBinaryTree* current = q.front();
                q.pop();
                
                if (current->leftNode  != nullptr) q.push(current->leftNode);
                if (current->rightNode != nullptr) q.push(current->rightNode);
            }
        }
        
        return maxWidth;
    }
    
    /**
     Swap the pointers leftNode and rightNode for the current node.
     Recurse into both children to swap their subtrees as well.
     */
    void swapSubtrees() {
        // Swap the left and right children of this node
        MyBinaryTree* temp = leftNode;
        leftNode = rightNode;
        rightNode = temp;
        
        // Recursively swap in the left subtree (which was the right)
        if (leftNode != nullptr) {
            leftNode->swapSubtrees();
        }
        // Recursively swap in the right subtree (which was the left)
        if (rightNode != nullptr) {
            rightNode->swapSubtrees();
        }
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
    
    void displayInOrderIterative() {
        stack<MyBinaryTree*> s;
        MyBinaryTree* current = this;
        
        while (current != nullptr || !s.empty()) {
            // Go as far left as possible
            while (current != nullptr) {
                s.push(current);
                current = current->leftNode;
            }
            
            // Visit the node
            current = s.top();
            s.pop();
            cout << current->data << " ";
            
            // Move to the right subtree
            current = current->rightNode;
        }
    }
    
    void displayPreOrderIterative() {
        if (this == nullptr) return;
        
        stack<MyBinaryTree*> s;
        s.push(this);
        
        while (!s.empty()) {
            MyBinaryTree* current = s.top();
            s.pop();
            
            cout << current->data << " ";
            
            // Push RIGHT first, then LEFT
            // (so LEFT is processed first — stack is LIFO)
            if (current->rightNode != nullptr) {
                s.push(current->rightNode);
            }
            if (current->leftNode != nullptr) {
                s.push(current->leftNode);
            }
        }
    }
    
    void displayPostOrderIterative() {
        stack<MyBinaryTree*> s;
        MyBinaryTree* current = this;
        MyBinaryTree* lastVisited = nullptr;
        
        while (current != nullptr || !s.empty()) {
            // Go as far left as possible
            while (current != nullptr) {
                s.push(current);
                current = current->leftNode;
            }
            
            MyBinaryTree* peekNode = s.top();
            
            // If right child exists and hasn't been visited yet, go right
            if (peekNode->rightNode != nullptr && lastVisited != peekNode->rightNode) {
                current = peekNode->rightNode;
            } else {
                // Both subtrees done — visit this node
                cout << peekNode->data << " ";
                lastVisited = peekNode;
                s.pop();
            }
        }
    }
};

//int main() {
//    MyBinaryTree<int> *binaryTree = new MyBinaryTree(20);
//    
//    MyBinaryTree<int> *node18 = new MyBinaryTree(18);
//    MyBinaryTree<int> *node16 = new MyBinaryTree(16);
//    MyBinaryTree<int> *node19 = new MyBinaryTree(19);
//    MyBinaryTree<int> *node25 = new MyBinaryTree(25);
//    MyBinaryTree<int> *node23 = new MyBinaryTree(23);
//    MyBinaryTree<int> *node26 = new MyBinaryTree(26);
//
//    binaryTree->leftNode = node18;
//    node18->leftNode = node16;
//    node18->rightNode = node19;
//    binaryTree->rightNode = node25;
//    node25->leftNode = node23;
//    node25->rightNode = node26;
//    
//    cout <<endl  << "In Order Recursive: ";
//    binaryTree->displayInOrder();
//    cout <<endl  << "In Order Iterative: ";
//    binaryTree->displayInOrderIterative();
//    
//    cout <<endl << "Pre Order Recursive: ";
//    binaryTree->displayPreOrder();
//    cout <<endl << "Pre Order Iterative: ";
//    binaryTree->displayPreOrderIterative();
//    
//    cout <<endl << "Post Order Recursive: ";
//    binaryTree->displayPostOrder();
//    cout <<endl << "Post Order Iterative: ";
//    binaryTree->displayPostOrderIterative();
//
//    cout <<endl << "Size : "<< binaryTree->nodeSize() << endl;
//    return 0;
//}
