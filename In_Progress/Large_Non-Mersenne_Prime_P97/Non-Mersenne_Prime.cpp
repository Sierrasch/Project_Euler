#include <iostream>
#include <cmath>

int main()
{
  unsigned long long result = 0;
  for (int i = 0; i < 150; i++){
    result = 28433 * pow(2, i) + 1;
    result = result % 10000000000;
    std::cout << result << std::endl;
  }
  
  return 0;
}
