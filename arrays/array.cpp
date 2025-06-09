#include <iostream>


int main(){

    std::string car[] = {"RR","Mustang" , "Bmw"};


    // now if I want to print this array it wont be in normal way

    std::cout<<car<<std::endl;

    // it will print the address/memory location of the array
    
    //so we can only print arrays if we print it one by one index by index 

    std::cout<<car[0]<<"\n";
    std::cout<<car[1]<<"\n";
    std::cout<<car[2]<<"\n";


    // we cannot assingn values in array later because its a static data structure  
    // what we can do is set the size of array while creating it and then assign the values?

    std::string names[5];

    names[0]= "parth";
    names[1]="anuj";
    std::cout<<names[2]<<"\n";
    std::cout<<names[0]<<"\n";
    std::cout<<names[1]<<"\n";

}