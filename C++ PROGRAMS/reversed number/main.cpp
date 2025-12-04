
#include <iostream>

using namespace std;

int main()
{
    int num;
   int rev=0;

    cout<<"enter a number:";
    cin>>num;

    int temp=num;
    while(temp!=0){

    int digit=temp%10;
    rev=rev*10+digit;
    temp=temp/10;
    }


    if(rev==num){
        cout<<rev<<"is  not a palindrome number:"<<endl;
    }
    else{
        cout<<rev<<"is palindrome number:"<<endl;
    }
        return 0;
}

