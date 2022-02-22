#include <iostream>

using namespace std;
class Employee{
int id;
static int count; //it will be shared with all the objects of the class. if we used normal int count then it will show 0 every time because every object has saprate copy of count
    public:
        void setData(){
            cout<<"enter the id: ";
            cin>>id;
            count++;
        }

        void getData(){
            cout<<"id for the employee is: " <<  id << " and count is: "<< count << endl;
        }

        // static function which can access all the static members
        // when we wamt to call this function, there's no need to mention object of the class
        // it can access only other static variables and static function. it has no other access
        static void getCount(){
            cout<<"count is: "<< count << endl;
        }
};

// count is the static data member of the class. it will be shared with all the objects of the class.
int Employee :: count; //by default value will be 0. we can assign any value to it.


int main()
{
    Employee harry, carry, larry;
    harry.setData();
    harry.getData();
    Employee::getCount(); //this is how we can call the static function of the class

    carry.setData();
    carry.getData();
    Employee::getCount();

    larry.setData();
    larry.getData();
    Employee::getCount();
    return 0;
}