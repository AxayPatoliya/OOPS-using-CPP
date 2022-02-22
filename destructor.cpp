#include<iostream>

using namespace std;

class PrintInfo{
    string name;
    public:
        void print(){
            cout<<"Your name is: "<<name<<endl;
        }

        // constructor called to set the name
        PrintInfo(string n){
            cout<<"constructor called"<<endl;
            name = n;
        }

        // destructor called after execution of the program
        ~PrintInfo(){
            cout<<"destructor called"<<endl;
        }
};

int main(){
    PrintInfo user1("Elon Musk");
    user1.print();

    return 0;
}