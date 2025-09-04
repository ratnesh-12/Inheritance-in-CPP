#include <iostream>
using namespace std;

class Person {
public:
    void myPerson() {
        cout << "Person: XYZ" << endl;
    }
};

class Employee : public Person {
public:
    void myEmployee() {
        cout << "Employee ID: 101" << endl;
    }
};
class Salary : public Employee {
public:
    void mySalary() {
        cout << "Your salary of this month: 85000" << endl;
    }
};

int main() {
    Salary obj;
    obj.myPerson();
    obj.myEmployee();
    obj.mySalary();  
    return 0;
}

OUTPUT:
Person: XYZ
Employee ID: 101
Your salary of this month: 85000

=== Code Execution Successful ===
