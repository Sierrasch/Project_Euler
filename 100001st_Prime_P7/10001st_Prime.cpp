#include <iostream>

bool isPrime (unsigned long long input);

int main(){
  unsigned long long primeTarget  = 10001;
  unsigned long long current      = 0; 
  unsigned long long primeCounter = 0;
  unsigned long long result       = 0;
  while (primeCounter < primeTarget){
    current++;
    if (isPrime (current))
      primeCounter++;
  }
  std::cout << primeTarget << "st prime is: " << current << std::endl;
  return 0;
}

//isPrime method using unsigned long long
bool isPrime (unsigned long long input){
  if (input == 0 || input == 1)
    return false;
  for (unsigned long long i = 2; i < input/2 + 1; i++){
    if (input % i == 0)
      return false;
  }
  return true;
}

