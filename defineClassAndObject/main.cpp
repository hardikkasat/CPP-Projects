#include <iostream>
using namespace std;

class Player{
  private:
  int health=100;
  int killscore=0;
  int finalsum;

  public:
  int updateScore(int damage,int kill){
    health = health - damage;
    killscore = killscore + kill;
    return 0;
  }

  int finalscore(){
    finalsum = (100*killscore) + (10*health);
    return finalsum;
  }
};

int main(){
  Player player1,player2;
  // Player 1
  player1.updateScore(40,12);
  std::cout<<"The final score for Player 1 is: "<<player1.finalscore()<<endl;

  // Player 2
  player2.updateScore(50,10);
  std::cout<<"The final score for Player 2 is: "<<player2.finalscore()<<endl;

  if(player1.finalscore()>player2.finalscore()){
    std::cout<<"Player 1 wins"<<endl;
  }
  else if(player1.finalscore()<player2.finalscore()){
    std::cout<<"Player 2 wins"<<endl;
  }
  else{
    std::cout<<"It's a tie!!"<<endl;
  }
}