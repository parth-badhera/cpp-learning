#include <iostream>
using namespace std;

int main(){
    int a;
    int b;

retry:
    cout<<"Enter num1 -";
    cin>>a;
    cout<<"Enter num2 - ";
    cin>>b;

    if(b==0){
        cout<<"Cannot divisible by 0";
        goto retry;
    }else{
        cout<<a/b;
    }
}
  