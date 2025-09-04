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
class Student : public Person {
public:
    void myStudent() {
        cout << "Student Roll No: 45" << endl;
    }
};

int main() {
    Employee e;
    Student s;

    e.myPerson();
    e.myEmployee();
    s.myPerson();
    s.myStudent();
    return 0;
}

OUTPUT:
Person: XYZ
Employee ID: 101
Person: XYZ
Student Roll No: 45
  
=== Code Execution Successful ===
