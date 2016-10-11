
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

//isPrime method using ints
bool isPrime (int input){
  if (input == 0 || input == 1)
    return false;  
  for (int i = 2; i < input/2 + 1; i++){
    if (input % i == 0)
      return false;
  }
  return true;
}
