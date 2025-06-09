//static variable created inside a function are created once and stay lifetime
//these variable shares the same value around all the object and dont make copies


#include <iostream>
using std::cout;

int add(int a ,int b){
    static int x;
    x++;
    
    cout<<a+b<<"\n";
    return x;

}
int main(){
    add(4,5);
    add(9,8);

    int staticvari = add(9,8);
    cout<<staticvari;
}