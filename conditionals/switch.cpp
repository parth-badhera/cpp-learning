#include <iostream>


int main(){
    int mood;

    std::cout<<"**************************************Mood and Humor****************************";
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;

    std::cout<<"You Can Have Only 5 Moods -"<<std::endl;
    std::cout<<"1-Happy"<<std::endl;
    std::cout<<"2-Sad"<<std::endl;
    std::cout<<"3-Sleepy"<<std::endl;
    std::cout<<"4-Angry"<<"\n";
    std::cout<<"5-Confident"<<"\n";


    std::cout<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Enter your mood - ";
    std::cin>>mood;


    switch (mood){
        case 1:
            std::cout<<"I was so happy today, I smiled at a stranger. They screamed, dropped their phone, and ran. Guess I forgot people don’t expect happiness from someone who looks like they just escaped a mental breakdown.";
            break;
        case 2:
            std::cout<<"I told my shadow I feel alone... it left too.";
            break;
    
        case 3:
            std::cout<<"Kuch bhi maanlo 3";
            break;
        case 4 :
            std::cout<<"Kuch bhi maanlo 4";
            break;
        case 5:
            std::cout<<"Kuch bhi maanlo 5";
            break;
        default:

            std::cout<<"Abey sale";
    }
 
}