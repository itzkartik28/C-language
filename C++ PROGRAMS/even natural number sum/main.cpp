#include <iostream>

using namespace std;

int main()
{
    int i;
    int n;
    int sum=0;
    cout<<"enter your number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
            if(i%2==0){
                sum=sum+i;
            }


    }
    cout<<"sum :"<<sum<<endl;
    cout << "this is your sum of even natural number number!" << endl;
    return 0;
}
