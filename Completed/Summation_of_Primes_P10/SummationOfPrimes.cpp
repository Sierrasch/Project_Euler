#include <iostream>
#include <math.h>
using namespace std;
bool isPrime (unsigned long long input);

int main(){
  unsigned long long sum = 2; //start at 2 so we dont have to run even numbers

  for (unsigned long long i = 1; i < 2000000; i += 2){
    if(isPrime(i))
      sum += i;
  }
  cout << "Sum is: " << sum << endl;

}
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

