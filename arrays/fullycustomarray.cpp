#include <iostream>
void inserting(int arr[] ,int insert);
void inserting(std::string arr[] ,int insert);
void inserting(double arr[] ,int insert);
void inserting(char arr[] ,int insert);


int main(){


    int tipe;
    int insert;
    std::cout<<"\n";
    
    std::cout<<"1 - Integer"<<"\n";
    std::cout<<"2 - String"<<"\n";
    std::cout<<"3 - Double"<<"\n";
    std::cout<<"4 - Char"<<"\n";
    std::cout<<"Enter the type of Array you want to fill - ";

    std::cin>>tipe;

    std::cout<<"Enter the number of element you want to insert - ";
    std::cin>>insert;
    
    switch(tipe){
        case 1:{
            int arr[insert];
            inserting(arr, insert);
            break;
        }
        case 2:{
            std::string arr[insert];
            inserting(arr, insert);
            break;
        }
        case 3:{
            double arr[insert];
            inserting(arr, insert);
            break;
        }
        case 4:{
            char arr[insert];
            inserting(arr, insert);
            break;
        }
    }
    
    
}

void inserting(int arr[] ,int insert){
    int temp;
    for(int i =0; i<insert; i++){

        std::cout<<"Enter the element number "<< i+1<<" - ";
        std::cin>>temp;
        arr[i] = temp;

    }
    
    for(int j=0; j<insert; j++){
        std::cout<<arr[j]<<"\n";
    }
}

void inserting(std::string arr[] ,int insert){
    std::string temp;
    for(int i =0; i<insert; i++){

        std::cout<<"Enter the element number "<< i+1<<" - ";
        std::cin>>temp;
        arr[i] = temp;

    }

    
    for(int j=0; j<insert; j++){
        std::cout<<arr[j]<<"\n";
    }
}
void inserting(double arr[] ,int insert){
    double temp;
    for(int i =0; i<insert; i++){

        std::cout<<"Enter the element number "<< i+1<<" - ";
        std::cin>>temp;
        arr[i] = temp;

    }
    
    for(int j=0; j<insert; j++){
        std::cout<<arr[j]<<"\n";
    }
}
void inserting(char arr[] ,int insert){
    char temp;
    for(int i =0; i<insert; i++){

        std::cout<<"Enter the element number "<< i+1<<" - ";
        std::cin>>temp;
        arr[i] = temp;

    }
    
    for(int j=0; j<insert; j++){
        std::cout<<arr[j]<<"\n";
    }
}

