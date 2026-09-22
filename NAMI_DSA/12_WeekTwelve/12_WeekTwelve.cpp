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
 1. Operand → Append directly to postfix output
 2. ( → Push onto stack
 3. ) → Pop and append all operators until ( is encountered, then discard (
 4. Operator → Pop and append operators with higher or equal precedence, then push current operator
 5. At end, pop all remaining operators from stack
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
int applyOp(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;   // integer division
    }
    return 0;
}

/**
 1. Scan the postfix expression from left to right.
 2. If the token is an operand → push it onto the stack.
 3. If the token is an operator:
    Pop the top value → this is the right operand.
    Pop the next value → this is the left operand.
    Compute left op right and push the result back.
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
            int result = applyOp(left, right, c);
            s.push(result);
        }
    }

    return s.top();   // final answer
}

int main() {
//    string expressions[] = {
//        "A+B-C",
//        "A+B*C-D",
//        "A*B+C/D",
//        "A+B*C-D/E",
//        "A/B-C+D*E-A*C"
//    };
    
    string expressions[] = {
        "45+1-40",
        "3+6*8-12",
        "3*5+8/3",
        "6+6*9-3/2",
        "5/8-3+8*2-9*2"
    };
    
//    string expressions[] = {
//            "A+B-C",
//            "(A+B)*C",
//            "(A+B)*(C-D)",
//            "A+((B+C)*(E-F)-G)/(H-I)",
//            "A+B*(C+D)-E/F*G+H",
//            "A / B - C + D * E - A * C"
//        };
    
    for (string infix : expressions) {
        cout << "Infix  : " << infix << endl;
        string postFixExression = infixToPostfix(infix);
//        string postFixExression = infixToPostfixParenthesis(infix);
        cout << "Postfix: " << postFixExression << endl;
        int result = evaluatePostfix(postFixExression);
        cout << "Result: " << result << endl << endl;
    }
    return 0;
}
