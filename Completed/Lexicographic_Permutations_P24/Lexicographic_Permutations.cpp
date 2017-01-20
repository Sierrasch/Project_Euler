#include <iostream>
#include <string>
using namespace std;

void printPermutations (string startString, char* input, int arrSize);
void printArray (int size, char* arr);

int main(){
  char input[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  int inputSize  = 10;

  printPermutations ("", input, inputSize);
  return 0;
}

void printPermutations (string startString, char* input, int arrSize){
  if (arrSize == 0){
    cout << startString << endl;
  }
  else{
    for (int i = 0; i < arrSize; i++){
      string newString = startString + input[i];
      char newArray[arrSize - 1];
      bool reachedI = false;
      for (int j = 0; j < arrSize; j++){
	if(i == j)
	  reachedI = true;
	else{
	  if (reachedI)
	    newArray[j - 1] = input[j];
	  else
	    newArray[j] = input[j];
	}
      }
      printPermutations (newString, newArray, arrSize -1);
    }
  }
}

void printArray (int size, char* arr){

  cout << "[";
  for (int i = 0; i < size - 1; i++){
    cout << arr[i] << ",";
  }
  cout << arr[size -1] << "]" << endl;
}
