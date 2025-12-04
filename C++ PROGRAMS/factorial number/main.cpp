#include <iostream>

using namespace std;

int main()
{
    int i;
    int n;
    int fact =1;
    cout<<"enter your number:"<<endl;
    cin>>n;
    for(int i=2;i<=n;i++){

        fact=fact*i;
    }
    cout<<"fact :"<<fact<<endl;
    cout << "this is your factorial number!" << endl;
    return 0;
}
