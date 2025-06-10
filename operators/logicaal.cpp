#include <iostream>
#include <compare>

using namespace std;    


int main(){
    bool a = (100>20 and 20<21);       // for true both condition needs to be true
    bool b = (20==21 || 20<21);       // for true either single condition needs to be true
    bool c = (!true);                 // change the value from true to false and visa-versa

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    // we can use and or not as well

    cout<<10<=>20;

}