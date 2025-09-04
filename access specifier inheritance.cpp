#include <iostream>
using namespace std;

class Base{
public:
    int x = 1;        
protected:
    int y = 2;       
private:
    int z = 3;       

public:
    void myBase(){
        cout << "Public: " <<x<<endl;
        cout << "Protected: " <<y<<endl;
        cout << "Private: " <<z<<endl;
    }
};
class Derived : public Base{
public:
    void myDerived(){
        cout << "Public from base: " <<x<<endl;   
        cout << "Protected from base: " <<y<<endl;
        //cout <<"Private from base: "<<z;
    }
};

int main(){
    Derived d;
    d.myBase();     
    d.myDerived();  
    cout << "From main: " << d.x << endl; 
    return 0;
}

OUTPUT:
Public: 1
Protected: 2
Private: 3
Public from base: 1
Protected from base: 2
From main: 1

=== Code Execution Successful ===
