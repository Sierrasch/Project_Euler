#include <math.h>

//isPrime method using unsigned long long
bool isPrime (unsigned long long input){
  if (input == 0 || input == 1)
    return false;
  if (input == 2)
    return true;
  for (unsigned long long i = 2; i < sqrt(input) + 1; i++){
    if (input % i == 0)
      return false;
  }
  return true;
}

//isPrime method using ints
bool isPrime (int input){
  if (input == 0 || input == 1)
    return false;  
  if (input == 2)
    return true;
  for (int i = 2; i < sqrt(input) + 1; i++){
    if (input % i == 0)
      return false;
  }
  return true;
}
