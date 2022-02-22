#include<iostream>

using namespace std;

class Complex{
    int a, b;
    public:
        void setComplex(int x, int y){
            a = x;
            b = y;
        }

        void printComplex(){
            cout << a << " + " << b << "i" << endl;
        }

        friend Complex sumComplex(Complex c1, Complex c2);
};

Complex sumComplex(Complex c1, Complex c2){
    Complex c3;
    c3.setComplex((c1.a+c2.a), (c1.b+c2.b));
    return c3;
}

int main()
{
    Complex cp1, cp2, cp3;
    cp1.setComplex(2, 3);
    cp1.printComplex();

    cp2.setComplex(3, 4);
    cp2.printComplex();

    cp3 = sumComplex(cp1, cp2);
    cp3.printComplex();
    return 0;
}

/*properties of friend function
1. friend function can access private members of the class
2. not in the scope of the class
3. since it is not in the scope of the class, it cannot be called from the object of that class. cp1.sumComplex==Invalid
4. can be invoked without the help of any object of the class
5. usually cotains the objects as arguments
6. can be declared inside public or priveate section of the class
7. it cannot access the members directly by their names and need object_name.member_name to access any member
*/