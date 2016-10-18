#include <iostream>
#include <math.h>
using namespace std;

int countDivisors (unsigned long input);

int main(){
  unsigned long answer = 0;
  unsigned long currentTriangleNumber = 0;
  int counter = 1;
  while (answer == 0){
    currentTriangleNumber += counter;
    counter++;
    if (countDivisors(currentTriangleNumber) > 500)
      answer = currentTriangleNumber;
  }
  cout << "The first triangle number with more than 500 divisors is: " << answer << endl; 
  return 0;
}

int countDivisors (unsigned long input){
  int numDivisors = 0;
  for(unsigned long i = 1; i <= sqrt(input); i++){
    if (input % i == 0)
      numDivisors += 2;
  }
  return numDivisors;
}
