#include<iostream>

using namespace std;
class Class2;
class Class1{
    int a, b;
    public:
        Class1(int x=0, int y=0){
            a = x;
            b = y;
        }
        
        void getData(){
            cout<<"a is: "<<a<<" and b is: "<<b<<endl;
        }

        friend Class1 operator+(Class1 c1, Class2 c2);
};

class Class2{
    int a, b;
    public:
        Class2(int x=0, int y=0){
            a = x;
            b = y;
        }
        void sum(){
            cout<< "addition of a and b is " << a + b << endl;
        }
        void getData(){
            cout<<"a is: "<<a<<" and b is: "<<b<<endl;
        }
        friend Class1 operator+(Class1 c1, Class2 c2);
};

Class1 operator+(Class1 c1, Class2 c2){
    Class1 temp;
    temp.a = c1.a + c2.a;
    temp.b = c1.b + c2.b;
    return temp;
}

int main(){
    Class1 c1(10,20);
    c1.getData();

    Class2 c2(30,40);
    c2.getData();

    Class1 c3 = c1 + c2; //first method to friend function invoke operator overloading
    // Class1 c3 = operator+(c1, c2); //second method to friend function invoke operator overloading
    c3.getData();
    
    return 0;
}