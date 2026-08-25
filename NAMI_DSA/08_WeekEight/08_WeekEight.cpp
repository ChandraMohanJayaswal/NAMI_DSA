//
//  08_WeekEight.cpp
//  NAMI_DSA
//
//  Created by Chandra Jayaswal on 24/08/2026.
//


#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        string name;
    
    public:
        Car () {
            name = "";
        }
        Car(string name) {
            this->name = name;
        }
        string getName() {
            return name;
        }
        void setName(string name) {
            this->name = name;
        }
    
    ~ Car() {
        cout << "Releasing car instance!" << endl;
    }
};

//int main() {
//    Car carOne; //Car* carOne = new Car();
//    Car* carTwo = new Car("BYD");
//    carOne.setName("Tesla");
//    cout << "Name: " << carOne.getName() << endl;
//    cout << "Name: " << carTwo->getName() << endl;
//
////    carOne.name = "Tesla";
////    carTwo.name = "BYD";
////    carOne = carTwo;
////    carOne.name = "Tata";
////    cout << "Name: " << carTwo.name << endl;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int Count = 0;
//class Test {
//public:
//    Test(){
//
//        // Number of times constructor is called
//        Count++;
//        cout << "No. of Object created: "
//             << Count << endl;
//    }
//    ~Test() {
//        
//        // It will print count in decending order
//        cout << "No. of Object destroyed: " << Count
//             << endl;
//        Count--;
//    }
//};
//
//int main() {
//    Test t, t1, t2, t3;
//    return 0;
//}


class Person {
    protected:
        string name;
};

class Student : Person {
    protected:
        string rollNumer;
    
    public:
        Student(){
            this->name = "Ram";
            this->rollNumer = "01";
        }
        void displayInfo() {
            cout << "Roll Number: " << rollNumer << endl;
            cout << "Roll Number: " << name << endl;

        }
        
        void setName(string name) {
            this->name = name;
        }
        string getName() {
            return this->name;
        }
};

class L5Student: Student {
    private:
        string roomName;
    
    public:
        L5Student(){
            roomName = "101";
            this->setName("Shyam");
        }
    
        void displayInfo() {
            cout << "Roll Number: " << rollNumer << endl;
            cout << "Roll Number: " << this->getName() << endl;
            cout << "Room Name: " << roomName << endl;

        }
};


//int main() {
////    Student *studentOne = new Student();
////    studentOne->displayInfo();
//    L5Student *studentOne = new L5Student();
//    studentOne->displayInfo();
//    return 0;
//}


// Abstract base class as there is a
// pure virtual method
class Shape{
protected:
    string color;

public:
    Shape(string color) : color(color){}
    virtual double area() = 0;
    string getColor(){
        return color;
    }
    virtual ~Shape() {}
};

// Derived class: Rectangle
class Rectangle : public Shape {
    double length, width;

public:
    Rectangle(string color, double length, double width) : Shape(color){
        this->length = length;
        this->width = width;
    }
    double area() {
        return length * width;
    }
};

//int main() {
//    Shape* s = new Rectangle("Yellow", 2, 4);
//
//    cout<<"Rectangle color is "<<s->getColor()<<" and area is : "<<s->area()<<endl;
//    return 0;
//}

/**
 An abstract class in C++ must have at least one pure virtual function (declared with = 0):
 This IS an abstract class
 */
class Account {
public:
    virtual void deposit(int amount) = 0;  // Pure virtual
    virtual void balance() = 0;            // Pure virtual
    virtual ~Account() = default;
};

/**
 Account acc;  // This works! (not abstract)
 acc.deposit(100);
 */
//class Account {
//public:
//    virtual void deposit(int amount) {}
//    virtual void balance() {}
//    
//    virtual ~Account() {};
//};

class SavingAccount: public Account {
    protected:
        int amount = 0;
    
    void deposit(int amount) override {
        this->amount = this->amount + amount;
    }
    
    void balance() override {
        cout << "Balance (SavingAccount): " << amount << endl;
    }
    
    ~SavingAccount() {};
};

class FixedAccount: public Account {
    private:
        int amount = 0;
    
    void deposit(int amount) override {
        this->amount = this->amount + amount + 10;
    }
    
    void balance() override {
        cout << "Balance (FixedAccount): " << amount << endl;
    }
    
    ~FixedAccount() {}
};

void process(Account *account) {
    account->deposit(50);
    account->balance();
}

//int main() {
//    Account *one = new SavingAccount();
//    Account *two = new FixedAccount();
//    process(one);
//    process(two);
//    
//    delete one;
//    delete two;
//    return 0;
//}
