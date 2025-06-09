#include <iostream>

int main(){
    int arr[4][4] = {{1,2,3,4} , {2,3,4,5}, {3,4,5,6},{4,5,6,7}};

    int row = sizeof(arr)/sizeof(arr[0]);
    int column = sizeof(arr[0])/sizeof(arr[0][0]);

    for(int i=0; i<row;i++){
        for(int j=0; j<column;j++){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<"\n";
    }

}