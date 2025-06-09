#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){
    srand(time(NULL));
    
    
    int random = rand()%2;

    std::cout<<random;
}