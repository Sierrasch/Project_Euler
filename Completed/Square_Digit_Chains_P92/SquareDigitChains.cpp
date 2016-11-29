#include <iostream>

bool squareDigitChainHits89(int input);

int main(){
  int sum = 0;
  for (int i = 1; i < 10000000; i++){
    sum += squareDigitChainHits89(i);
  } 
  std::cout << "The answer is: " << sum << std::endl;
  return 0;
}

bool squareDigitChainHits89(int input){
  while (input != 89 && input != 1){
    int newInput = 0;
    while (input != 0){
      int lastDigit = input % 10;
      newInput += lastDigit * lastDigit;
      input /= 10;
    }
    input = newInput;
  }
  return (input == 89);
}
