// for each loop is a proper loop for arrays only but it is less flexible like you can access the valus from start to end nothing else



#include <iostream>


int main(){

    int a[] = {1,2,34,4,5,6,7,54,3,34,5,5};

    for(int b : a){
        std::cout<<b;
    }
}