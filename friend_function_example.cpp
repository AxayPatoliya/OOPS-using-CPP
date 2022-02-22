#include<iostream>

using namespace std;

class Circle; //forward declaration, otherwise friend function in rectangle class will not work

class Rectangle{
    int length, width;
    public:
        void getData(){
            cout<<"length is: "<<length<<endl;
            cout<<"width is: "<<width<<endl;
        }

        void area(){
            cout<<"area of rectangle is: "<<length*width<<endl;
        }

        Rectangle(int a, int b){
            length = a;
            width = b;
        }

        friend void display(Rectangle , Circle );
};

class Circle{
    int radius;
    public:
        void getData(){
            cout<<"radius is: "<<radius<<endl;
        }

        void area(){
            cout<<"area of circle is: "<<3.14*radius*radius<<endl;
        }

        Circle(int a){
            radius = a;
        }

        friend void display(Rectangle , Circle );
};

void display(Rectangle r, Circle c){
    r.area();
    c.area();
}

int main(){
    Rectangle rect(10,20);
    rect.area();

    Circle circle(10);
    circle.area();

    display(rect, circle);
    return 0;
}