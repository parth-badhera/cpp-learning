#include <iostream>

using std::cout;
using std::cin;
int main(){

    int a = 10;
    int b=2;
    int c=0;
    double z=9.1;
    double y=3.3;
    double x;
    int d;


    cout<<a/b<<"\n";
    cout<<a*b<<"\n";
    cout<<a+b<<"\n";
    cout<<a-b<<"\n";
    cout<<a%b<<"\n";
    cout<<z/y<<"\n";
    cout<<a/c<<"\n";  // undefined behaviour
    
    
    //cout<<z%y<<"\n";      % is not for float valuee

    //sign for a%b result is always depend on a


    int g = ++x;    // this is prefix    first update than assign
    int f=x--;    //this is postfix      first assign than update
}