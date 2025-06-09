// 1. if, else if, else – Grade Checker
// Problem:
// Write a program that takes a number (0-100) as input and prints:

// "Grade A" for 90–100

// "Grade B" for 80–89

// "Grade C" for 70–79

// "Grade D" for 60–69

// "Fail" for below 60



#include <iostream>
using namespace std;


// int main(){
//     int grade;
//     cout<<"Enter your number for grade";
//     cin>>grade;


//     if(90<grade<100){
//         cout<<"A";
//     }else if(80<grade<89){
//         cout<<"B";
//     }else if(70<grade<79){
//         cout<<"C";
//     }else if(60<grade<69){
//         cout<<"D";
//     }else if(60<grade){
//         cout<<"F";
//     }else {
//         cout<<"Invalid num";
//     }
// }



// int main(){
//     int a;
//     int sum=0;
//     cout<<"Enter the number";
//     cin>>a;

//     for( int i=1; i<=a; i++){
//         sum+=i;

//     }
//     cout<<sum;
// }







// int main(){
//     int a;
//     int i =1;
//     int sum=1;  
    
//     cin>>a;
//     while (i<=a){
//         sum*=i;
//         i++;
//     }
// }

// int main(){
//     string pass;

//     cout<<"Enter the pass";
//     getline(cin,pass);

//     do{
//         cout<<"Enter the pass";
//         getline(cin,pass);
//         if (pass=="kratika"){
//             break;
//         }
//     }while(true);
// }


// int main(){
//     int arr[10];
//     int num;

//     for(int i=0; i<10; i++){
//         cout<<"Enter a number";
//         cin>>num;

//         if(num==-1){
//             break;
//         }else{
//             arr[i]=num;
//         }
//     }
// }












// int main() {
//     int num;

// retry:  // label to go back to

//     cout << "Enter a positive number: ";
//     cin >> num;

//     if (num <= 0) {
//         cout << "Invalid input ❌. Please enter a number greater than 0.\n";
//         goto retry;  // jump back to the input
//     }

//     cout << "Thank you! You entered: " << num << endl;

//     return 0;
// }



int main(){
    int year;
    cout<<"Enter the year";
    cin>>year;

    if(year%4==0){
        if(year%100 !=0 || year%400==0){
            cout<<"Leap year";
        }
    }else{
        cout<<"Not the Leap year";
    }
}