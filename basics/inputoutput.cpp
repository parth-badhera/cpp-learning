#include <iostream>
using namespace std;


int main(){
    
    
    bool a = true;
    cout<<a;           // 1 will print
    cout<<std::boolalpha;
    cout<<a<<"\n";     // true will print
    cout<<noboolalpha;
    cout<<a;            // again 1 will print



    int x =84;

    cout<<x<<endl;
    cout<<std::hex;     // by this int decimal is converted to hexadecimal
    cout<<x<<endl;
    cout<<std::oct;     // by this int hexadecimal is converted to octal
    cout<<x<<endl;
    cout<<std::dec;     // by this int octal is converted to decimal
    cout<<x<<endl;


    cout<<std::showbase;
    cout<<x<<endl;
    cout<<std::hex;     
    cout<<x<<endl;
    cout<<std::showpos;
    cout<<std::oct;     
    cout<<x<<endl;
    cout<<std::dec;    
    cout<<x<<endl;
    cout<<std::noshowbase;  
    cout<<std::showpos;
    

}