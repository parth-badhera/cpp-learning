// In auto keyword we dont need to tell the variable type compiler will auto understand if its a char float or int


// to check type of variable we can use type info

#include <iostream>

#include <typeinfo>

using std::cout;

int main(){

    auto x = 53;
    auto y=7.35;
    auto z= x+y;

    auto st = "1234r vx";
    auto ch = 'x';

    cout<<z<<"\n";
    cout<<typeid(x).name()<<"\n";
    cout<<typeid(y).name()<<"\n";
    cout<<typeid(z).name()<<"\n";
    cout<<typeid(st).name()<<"\n";
    cout<<typeid(ch).name()<<"\n";

}


// advantages of auto - 
// if a function returns auto its return type can be change with worrying about protoype change
// can be very helpfull for stl itrate
// helpfull in lamba expression