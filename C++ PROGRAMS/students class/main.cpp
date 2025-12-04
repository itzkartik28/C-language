#include <iostream>

using namespace std;

class student{

public:
    string name;
    int roll_no;


    void show(){

       cout<<name<<endl;
       cout<<roll_no<<endl;

    }

};

int main()
{
 student s1;
 s1.name="kartik";
 s1.roll_no=37;
 s1.show();

    return 0;
}
