
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
    sum=sum+digit*digit*digit;
    temp=temp/10;
    }
    if(num==sum){
        cout<<num<<" is amstrong number!"<<endl;

    }
    else{
        cout<<num<<"is not a amstrong number!"<<endl;
    }


        return 0;
}

class student:
    {
        public
        void display:{
        c}
    };

