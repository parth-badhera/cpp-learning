#include <iostream>

int main(){



    int age;



    std::cout<<"****************************** Drinking age checker**********************************"<<std::endl;

    std::cout<<std::endl;
    std::cout<<std::endl;
    
    std::cout<<"Enter your riyaaal age ";
    std::cin>>age;

    std::cout<<std::endl;

    if(age<0){
        std::cout<<"Broo??? You think I am stupid or wott??";
    }
    else if(age==0){
        std::cout<<"Ayooooo you just born drink milk stupid";
    }
    else if (age>0 && age <18){
        std::cout<<"Growup boy its not the right time for all these thing";
    }
    else if(age<18||age==18){
        std::cout<<"Your are good to goo man ";
    }
    else{
        std::cout<<"What the hack man";
    }


}