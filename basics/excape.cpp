// some excape sequence are hard to print 

#include <iostream>
using namespace std;

int main(){
    // if we need to print backslash
    cout<<"By printing \\ we print backshalsh";

    // if we need to use double quote.
    cout<<"\nThis is how we print \"and this is in double quote\" \n  ";


    bool a = true;
    cout<<a;           // 1 will printed
    cout<<std::boolalpha;
    cout<<a<<"\n";
    cout<<noboolalpha;
    cout<<a;
    return 0;
}