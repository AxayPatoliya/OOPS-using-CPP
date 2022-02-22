#include<iostream>

using namespace std;

class Calculator{
    int a, b;
    public:
        void add(){
            cout << a + b << endl;
        }

        void sub(){
            cout << a - b << endl;
        }

        void mul(){
            cout << a * b << endl;
        }

        void div(){
            cout << a / b << endl;
        }
        
        // simple constructor
        Calculator(){
            cout<<"simple constrctor called"<<endl;
        }
        
        // parameterized constructor
        Calculator(int x, int y){
            cout<<"parameterized constructor called" << endl;
            a = x;
            b = y;
        }

        // copy constructor
        Calculator(Calculator &c){
            cout<<"copy constructor called"<<endl;
            a = c.a;
            b = c.b;
        }
        
        // destructor to freeup the memory consumed by constructor
        ~Calculator(){
            cout<<"destructor called"<<endl;
        }
};

int main(){

    Calculator clac1(10,20);
    clac1.add();

    Calculator clac2;

    Calculator clac3(clac1); //or Calculator clac3=clac1;
    clac3.add();

    return 0;
}

// Constructors should be declared in the public section of the class.
// they cannot return any value.
// it can have default arguments.
// we cannot refer to their address
// constructor is a special member function with same name as of the class.
// it is automatically invoked(called) when an object of the class is created.