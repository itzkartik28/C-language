
#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum=0;

    cout<<"enter a number:";
    cin>>num;

    int temp=num;
    while(temp!=0){

    int digit=temp%10;
    sum=sum+digit;
    temp=temp/10;
    }

    cout<<"sum of the digit of:"<<num<<"= "<<sum<<endl;
        return 0;
}

