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

int main() {
//    string expressions[] = {
//        "A+B-C",
//        "A+B*C-D",
//        "A*B+C/D",
//        "A+B*C-D/E",
//        "A/B-C+D*E-A*C"
//    };
    
    string expressions[] = {
            "A+B-C",
            "(A+B)*C",
            "(A+B)*(C-D)",
            "A+((B+C)*(E-F)-G)/(H-I)",
            "A+B*(C+D)-E/F*G+H",
            "A / B - C + D * E - A * C"
        };
    
    for (string infix : expressions) {
        cout << "Infix  : " << infix << endl;
//        cout << "Postfix: " << infixToPostfix(infix) << endl << endl;
        cout << "Postfix: " << infixToPostfixParenthesis(infix) << endl << endl;

    }
    return 0;
}
