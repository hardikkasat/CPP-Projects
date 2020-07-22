#include <iostream>
using namespace std;

int main() {
  float num1,num2,sum;
  std::cout << "Enter the value of num1: \n";
  std::cin >> num1;
  std::cout << "Enter the value of num2: \n";
  std::cin >> num2;
  sum = num1 + num2;
  std::cout<<"The sum of the two given float numbers is: "<<sum<<endl;
}