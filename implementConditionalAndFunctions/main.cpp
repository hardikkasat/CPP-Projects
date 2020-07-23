#include<iostream>
using namespace std;

int printScore(int score){
   cout<<"The box score is: "<<score<<endl;
   return score;
}

int getBoxScore(char box){
    if (box == 'r')
      {
        printScore(10);
      }
    else if(box == 'b')
      {
        printScore(20);
      }
    else 
      {
        printScore(0);
      }
    return 0;
}

int main(){
char boxchar;
std::cout<<"Enter the character for score: ";
std::cin>>boxchar;
getBoxScore(boxchar);
return 0;
}