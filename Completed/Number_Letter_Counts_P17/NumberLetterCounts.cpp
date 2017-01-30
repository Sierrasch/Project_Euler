#include <iostream>
#include <string>

using namespace std;

int main(){

//  int onesPlaceVals[] = { 4/*zero*/, 3/*one*/, 3/*two*/, 5, 4, 4, 3, 5, 5, 4};
//int tensPlaceVals[] = { 0, 0/*teens NOT USED*/, 6/*twenties*/, 6, 6, 5, 5, 7, 6, 6 };
// int teensVals[]     = { 3 /*ten*/, 6/*eleven*/, 6, 8, 8, 7, 7, 9, 8, 8 };

  string onesPlace[] = {"ERROR", "one", "two", "three", "four", "five", "six", 
			"seven", "eight", "nine"};
  string tensPlace[] = {"ERROR", "ERROR", "twenty", "thirty", "forty", "fifty",
			"sixty", "seventy", "eighty", "ninety"};
  string teens[]     = {"ten", "eleven", "twelve", "thirteen", 
			"fourteen", "fifteen", "sixteen", "seventeen", 
			"eighteen", "nineteen"};
  string allNums[1001];
  
  for (int i = 1; i < 1000; i++){
    //deal with hundreds place
    if (i / 100 != 0){
      allNums[i] += onesPlace[i/100];
      allNums[i] += "hundred";
      if (i % 100 != 0){
	allNums[i] += "and";
      }
    }
    
    int tempi = i % 100;
    if (tempi > 9 && tempi < 20){
      allNums[i] += teens[tempi - 10];
    }else{
      int tensDigit = tempi / 10;
      int onesDigit = tempi % 10;
      if (tensDigit != 0){
	allNums[i] += tensPlace[tensDigit];
      }
      if (onesDigit != 0){
	allNums[i] += onesPlace[onesDigit];
      }
    }
      
  }
  allNums[1000] = "onethousand";

  int letterCount = 0;
  for (int i = 1; i < 1001; i++){
    letterCount += allNums[i].length();
  }
  cout << "Answer: " << letterCount << endl;
  return 0;
}
