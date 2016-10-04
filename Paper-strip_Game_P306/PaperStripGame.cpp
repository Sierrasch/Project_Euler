#include <iostream>

#define TEST_SIZE 50
int main ()
{
  bool guarranteedWin[TEST_SIZE + 1];
    
  //base step
  guarranteedWin[0] = false;
  guarranteedWin[1] = false;
  guarranteedWin[2] = true;
  
  //induction step  
  for (int current = 3; current <=  TEST_SIZE; current++){
    bool isWin = false;  
    for (int i = 0; i <= current / 2; i++){
      if (!(guarranteedWin[i] || guarranteedWin[current - 2 - i])){
	isWin = true;
      }
    }
    guarranteedWin[current] = isWin;
  }

  //print out result
  int firstCanWin = 0;
  for (int counter = 0; counter <= TEST_SIZE; counter++){
    firstCanWin += guarranteedWin[counter];
  }

  std::cout << "And the answer is... " << firstCanWin << std::endl;

  for ( int i = 0; i < TEST_SIZE; i++){
    std::cout << i << ": " << guarranteedWin[i] << std::endl;
  }
  return 0;
}
