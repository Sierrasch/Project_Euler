
//isPrime method using unsigned long long
bool isPrime (unsigned long long input){
  for (unsigned long long i = 2; i < input/2 + 1; i++){
    if (input % i == 0)
      return false;
  }
  return true;
}

//isPrime method using ints
bool isPrime (int input){
  for (int i = 2; i < input/2 + 1; i++){
    if (input % i == 0)
      return false;
  }
  return true;
}
