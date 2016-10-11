#include <iostream>

bool isPrime (unsigned long long input);

int main(){
  unsigned long long inputNum = 600851475143;
  unsigned long long counter = 2;
  unsigned long long result = 0;
  while (counter < inputNum && result == 0){
    if (inputNum % counter == 0){
      unsigned long long divisor = inputNum / counter;
      if (isPrime(divisor))
	result = divisor;
    }
    counter++;
  }
  std::cout << "The answer is: " << result << std::endl;
  std::cout << "The number is: " << inputNum << std::endl;
  return 0;
}

bool isPrime (unsigned long long input){
  for (unsigned long long i = 2; i < input/2 + 1; i++){
    if (input % i == 0)
      return false;
  }
  return true;
}
