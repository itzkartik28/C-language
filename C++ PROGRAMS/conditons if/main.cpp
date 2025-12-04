#include <iostream>

using namespace std;

int main()
{
    int i;
    for(i=2;i<=10000000000;i++){

        if(i%2!=0){
            cout<<i;
        }
    }

    return 0;
}
