// giving array to a function like printing arrays


#include <iostream>



void printingarr(int arr[], int size){

    for (int i=0; i<size; i++){
        std::cout<<arr[i]<<"\n";
    }    

}


int main(){
    

    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int size = sizeof(arr)/sizeof(int);

    printingarr(arr , size);

}