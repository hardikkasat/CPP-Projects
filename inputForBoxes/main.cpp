#include <iostream>
using namespace std;

/*int getSequence(int n,char boxes[]){
  for(int i=0;i<n;i++)
    {
        std::cout<<"Please write the next sequence: ";
        std::cin>>boxes[i];
    }
  return 0;
}*/

int calculatePlayerScore(char boxes[4]){
  int score=0;
  for(int i=0;i<4;i++)
    {
      if (boxes[i]=='r'){
        score = score + 10;
      }
      else if (boxes[i]=='b'){
        score = score + 20;
      }
      else{
        score = score + 0;
      }
    }
  return score;
}
int main(){
  int finalscore1,finalscore2;
   char boxes1[4] ;
    for(int i=0;i<4;i++)
    {
      std::cout<<"Enter the next sequence for boxes1: ";
      std::cin>> boxes1[i];
     }
  calculatePlayerScore(boxes1);
  std::cout<<"The final score for boxes1 is "<< calculatePlayerScore(boxes1) <<endl;

  char boxes2[4] ;
    for(int i=0;i<4;i++)
    {
      std::cout<<"Enter the next sequence for boxes2: ";
      std::cin>> boxes2[i];
     }
  calculatePlayerScore(boxes2);
  std::cout<<"The final score for boxes2 is "<< calculatePlayerScore(boxes2) <<endl;
  return 0;
}
