#include <iostream>
using namespace std;

class Library {
public:
    void myLibrary() {
        cout << "This is the Library" << endl;
    }
};

class Author {
public:
    void myAuthor() {
        cout << "Author: Greg Heffley" << endl;
    }
};

class Book : public Library, public Author {
public:
    void myBook() {
        cout << "Book: Diary of a Wimpy Kid" << endl;
    }
};

int main() {
    Book obj;
    obj.myBook();
    obj.myAuthor();
    obj.myLibrary();
    return 0;
}

OUTPUT:
Book: Diary of a Wimpy Kid
Author: Greg Heffley
This is the Library

=== Code Execution Successful ===
