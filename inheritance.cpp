#include <iostream>
using namespace std;

class library {
public:
    library() {
        cout << "Here is the library\n";
    }
};

class book : private library {
public:
    string title;
    string author;

    book(string t, string a) {
        title = t;
        author = a;
    }

    void display() {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    book obj("Dairy of a wimpy kid","Greg Heffley");
    obj.display();
    return 0;
}

OUTPUT:
Here is the library
Book Title: Dairy of a wimpy kid
Author: Greg Heffley

=== Code Execution Successful ===
