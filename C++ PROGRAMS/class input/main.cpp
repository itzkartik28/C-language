#include <iostream>

using namespace std;

class student{
public:
    string name;
    int roll_no;

    void display( string n1, int r1){
    cout<<name<<endl;
    cout<<roll_no<<endl;
    }
};

int main()
{
    student s1;
    string n;
    int r;

    cout<<"enter your number:"<<endl;
    cin>>n;
    cout<<"enter your roll no :"<<endl;
    cin>>r;
    s1.display(n,r);
    return 0;
}
