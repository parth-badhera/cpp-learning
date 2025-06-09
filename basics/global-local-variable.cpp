// global variable - those variable which initialize outside any function they can be accessiable by any function
// local variavle - initialized inside a function and can be accessed by that function only 

// if we try to access global variable inside a function and that variable is declared after that function that we use "extern" keyword

// if in a function we use same name global and local variable then local will be used or accessed

// function loop and condition statement creat their own scope (variable) 

// we can creat new scope using curly braces{}





#include <iostream>

using std::cout;

extern int x;  // declaration of global variable using extern ,  declared before main, defined after main
int z;         //global variable, default-initialized to 0

int main(){
    int x;        // ✅ Local variable with the same name as global


    cout<<x<<"\n";     // this will give any random value
    cout<<z;           // will print 0 — global variables are default-initialized to 0

}
int x=10;      // global variable