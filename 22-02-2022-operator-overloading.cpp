// operator overloading with and without friend function
#include<iostream>

using namespace std;

class Complex{
    int real, img;
    public:
        void display(){
            cout<<"The complex number is: "<<real<<" + "<<img<<"i"<<endl;
        }

        Complex(int r=0, int i=0){
            real = r;
            img = i;
        }

        // function for operator overloading(operator is a keyword to declare a function as an operator)
        Complex operator+(Complex c){ //we can declare this without even passing the object/anything as parameter
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }

        // friend function for operator overloading
        friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main(){

    Complex c1(10,20);
    c1.display();

    Complex c2(30,40);
    c2.display();

    // Complex c3 = c1 + c2; //method-1 to invoke operator overloading
    Complex c3 = c1.operator+(c2); //method-2 to invoke operator overloading
    c3.display();

    Complex c4 = operator+(c1,c2); //method to invoke friend function operator overloading
    c4.display();

    // Complex c5;
    // c5 = operator+(c3, operator+(c1,c2)); //this is using friend function
    // c5 = c1+c2+c3; //this is using operator overloading. this will performs c2+c3 and then result will be added to c1
    // c5.display();

    return 0;
}

// operator overloading function can take only 0 or 1 objects as argument. we can overcome this in operator overloading using friend function. we can give any number of objects as argument to friend function.