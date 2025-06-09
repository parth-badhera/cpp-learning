// sizeof operator tells the size of our data type it evalute at compile time

#include <iostream>
using std::cout;

int main(){

    cout<<sizeof(int)<<"\n";                          //4 byte
    cout<<sizeof(long long int)<<"\n";               //8 byte
    cout<<sizeof(unsigned int)<<"\n";               //4 byte same as int but range is all positive only so double the positive for int
    cout<<sizeof(char)<<"\n";                      //1 byte
    cout<<sizeof(unsigned char)<<"\n";            //1 byte
    cout<<sizeof(std::string)<<"\n";             //24 byte
    cout<<sizeof(float)<<"\n";                  //4 byte
    cout<<sizeof(double)<<"\n";                //8 byte
    cout<<sizeof(long double)<<"\n";          //12 byte  Could be 12, 16, or 8 bytes — **platform dependent**
    cout<<sizeof(bool)<<"\n";                //1 byte
    
   
    
   // since it evalute at compile time 

   int x = 5;
   cout<<sizeof(x++);
   cout<<x;          // here it will print 5


}