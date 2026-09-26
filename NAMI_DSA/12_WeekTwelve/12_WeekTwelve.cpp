//
//  12_WeekTwelve.cpp
//  NAMI_DSA
//
//  Created by Chandra Jayaswal on 22/09/2026.
//

#include <iostream>
#include <string>
using namespace std;

int precedence(char op) {
    if (op == '^') return 3;
    else if (op == '*' || op == '/') return 2;
    else if (op == '+' || op == '-') return 1;
    else return -1;
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

/**
 ALGORITHM
 1. Operand (A, B, C, ...) → append directly to the output string.
 2. Operator → pop from stack while the top has higher or equal precedence, then push the current operator.
 3. At the end → pop all remaining operators into the output.
 */
string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";

    for (char c : infix) {
        if (c == ' ') continue; // skip spaces

        if (isOperator(c)) {
            // Pop operators with higher or equal precedence
            while (!s.empty() && precedence(s.top()) >= precedence(c)) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        } else {
            // Operand → add directly to output
            postfix += c;
        }
    }

    // Pop remaining operators
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

/**
 ALGORITHM
 1. Operand → Append directly to postfix output
 2. ( → Push onto stack
 3. ) → Pop and append all operators until ( is encountered, then discard (
 4. Operator → Pop and append operators with higher or equal precedence till ( is encountered, then push the current operator, then push the current operator
 5. At the end, pop all remaining operators from the stack
 */
string infixToPostfixParenthesis(string infix) {
    stack<char> s;
    string postfix = "";
    
    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];
        
        // Skip spaces
        if (c == ' ')
            continue;
        
        // If operand (letter or digit), add to output
        if (isalnum(c)) {
            postfix += c;
        }
        // If opening parenthesis, push to stack
        else if (c == '(') {
            s.push(c);
        }
        // If closing parenthesis, pop until '(' is found
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            if (!s.empty())
                s.pop(); // Remove '('
        }
        // If operator
        else if (isOperator(c)) {
            while (!s.empty() && precedence(s.top()) >= precedence(c)) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    
    // Pop remaining operators from stack
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    
    return postfix;
}


// Apply an operator to two operands
int applyOperator(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;   // integer division
    }
    return 0;
}

/**
 ALGORITHM
 1. Scan the postfix expression from left to right.
  2. If the token is an operand → push it onto the stack.
  3. If the token is an operator:
     Pop the top value → this is the right operand.
     Pop the next value → this is the left operand.
     Compute left operator right (like a + b) and push the result back.
  4. At the end, the stack contains exactly one value — the answer.
  
  ⚠️ Order matters for - and /. The first pop is the right operand.
 */
int evaluatePostfix(string postfix) {
    stack<int> s;

    for (char c : postfix) {
        if (c == ' ') continue;   // skip spaces

        if (isdigit(c)) {
            // Operand → push onto stack
            s.push(c - '0');
        } else {
            // Operator → pop two operands and apply
            int right = s.top(); s.pop();
            int left  = s.top(); s.pop();
            int result = applyOperator(left, right, c);
            s.push(result);
        }
    }

    return s.top();   // final answer
}


//int main() {
////    string expressions[] = {
////        "A+B-C",
////        "A+B*C-D",
////        "A*B+C/D",
////        "A+B*C-D/E",
////        "A/B-C+D*E-A*C"
////    };
//    
//    string expressions[] = {
//        "45+1-40",
//        "3+6*8-12",
//        "3*5+8/3",
//        "6+6*9-3/2",
//        "5/8-3+8*2-9*2"
//    };
//    
////    string expressions[] = {
////            "A+B-C",
////            "(A+B)*C",
////            "(A+B)*(C-D)",
////            "A+((B+C)*(E-F)-G)/(H-I)",
////            "A+B*(C+D)-E/F*G+H",
////            "A / B - C + D * E - A * C"
////        };
//    
//    for (string infix : expressions) {
//        cout << "Infix  : " << infix << endl;
////        string postFixExression = infixToPostfix(infix);
//        string postFixExression = infixToPostfixParenthesis(infix);
//        cout << "Postfix: " << postFixExression << endl;
////        int result = evaluatePostfix(postFixExression);
////        cout << "Result: " << result << endl << endl;
//    }
//    return 0;
//}

//class Graph {
//    vector<vector<int>> adjacentMatrix;
//    
//public:
//    Graph(int numberOfVertices) {
//        adjacentMatrix = vector<vector<int>>(numberOfVertices, vector<int>(numberOfVertices,0));
//    }
//    
//    void addEdge(int nodeOne, int nodeTwo){
//        //Set edge from nodeOne to nodeTwo
//        adjacentMatrix[nodeOne][nodeTwo] = 1;
//        //Set edge from nodeTwo to nodeOne (for undirected graph)
//        adjacentMatrix[nodeTwo][nodeOne] = 1;
//    }
//    
//    void display(){
//        cout << "Adjacency Matrix for the Graph: " << endl;
//        int numberOfVertices = adjacentMatrix.size();
//        for (int i = 0; i < numberOfVertices; i++) {
//            for (int j = 0; j < numberOfVertices; j++) {
//                cout << adjacentMatrix[i][j] << "  ";
//            }
//            cout << endl;
//        }
//    }
//};
//
//
//int main() {
//    int numberOfNodes = 4;
//    Graph *graph = new Graph(numberOfNodes);
//    
//    graph->addEdge(0, 1);
//    graph->addEdge(0, 2);
//    graph->addEdge(1, 3);
//    graph->addEdge(2, 3);
//    
//    graph->display();
//    
//    delete graph;
//    return 0;
//}

#include <list>
#include <map>
class Graph {
    map<int,list<int>> adjacencyList;

public:
    void addEdge(int nodeOne, int nodeTwo) {
        // Add edge from nodeOne to nodeTwo
        adjacencyList[nodeOne].push_back(nodeTwo);
        // Add edge from nodeTwo to nodeOne because the graph is
        // undirected
        adjacencyList[nodeTwo].push_back(nodeOne);
    }

    void print() {
        cout << "Adjacency list for the Graph: " << endl;
        for (auto i : adjacencyList) {
            cout << i.first << " -> ";
            for (auto j : i.second) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g;

    g.addEdge(1, 0);
    g.addEdge(2, 0);
    g.addEdge(1, 2);

    g.print();
    return 0;
}
