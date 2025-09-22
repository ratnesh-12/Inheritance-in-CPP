# Inheritance-in-CPP

## Aim

To study and implement the concept of **Inheritance in C++**, demonstrating how one class can derive properties and behaviors from another.

## Theory

Inheritance is one of the key features of **Object-Oriented Programming (OOP)**. It allows a new class (called the **derived class**) to acquire the properties and behaviors (data members and member functions) of an existing class (called the **base class**).

This promotes **code reusability**, **extensibility**, and establishes an **"is-a" relationship** between classes.

# Types of Inheritance in C++

1. **Single Inheritance**

   * A derived class inherits from one base class.
   * Example: `Student` inherits from `Person`.

2. **Multiple Inheritance**

   * A derived class inherits from more than one base class.
   * Example: `TeachingAssistant` inherits from both `Teacher` and `Student`.

3. **Multilevel Inheritance**

   * A class is derived from another derived class, forming a chain.
   * Example: `Person → Employee → Manager`.

4. **Hierarchical Inheritance**

   * Multiple derived classes inherit from a single base class.
   * Example: `Car`, `Bike`, and `Bus` all inherit from `Vehicle`.

5. **Hybrid Inheritance**

   * A combination of two or more types of inheritance.
   * Example: Using both hierarchical and multiple inheritance together.
   * It may lead to the **diamond problem**, which is handled in C++ using **virtual base classes**.

### Syntax Example

```cpp
class Base {
public:
    void display() {
        cout << "This is the Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "This is the Derived class" << endl;
    }
};
```

## Algorithm

1. Define a base class with some data members and member functions.
2. Define a derived class that inherits from the base class.
3. Add additional members in the derived class if required.
4. In the main function, create objects of the derived class.
5. Access both base class and derived class members to observe inheritance in action.

## Conclusion

The experiment demonstrates how inheritance allows a derived class to reuse the properties and methods of a base class. It simplifies code, reduces redundancy, and supports the principles of object-oriented design.
