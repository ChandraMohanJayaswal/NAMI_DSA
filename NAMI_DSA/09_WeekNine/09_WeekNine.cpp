//
//  09_WeekNine.cpp
//  NAMI_DSA
//
//  Created by Chandra Jayaswal on 31/08/2026.
//

#include <iostream>
#include <string>
using namespace std;

/**
 Multiple Inheritance
 */
class A {
    private: int ax;
    public:
//    void display();
        void display() {
            cout << "Ax: " << ax << endl;
        }
};

//void A::display() {
//    cout << "Ax: " << ax << endl;
//}
class B {
    private: int bx;
    public:
        void display() {
            cout << "Bx: " << bx << endl;
        }
};
class C: public A, public B {
    private: int cx;
    
//    public:
//        void display() {
//            this->A::display();
//            this->B::display();
//            cout << "Cx: " << cx << endl;
//
//        }
};
//int main() {
//    C c;
//    c.A::display();
////    c.display();
//    return 0;
//}



