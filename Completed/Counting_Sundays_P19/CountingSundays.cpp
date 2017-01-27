#include <iostream>
using namespace std;

int main(){
  int currentDay   = 1;
  int currentMonth = 1;
  int currentYear  = 1901;
  int dayOfWeek    = 3;
  int sundayCount  = 0;
  int maxDays[] = {-1, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  while (currentYear < 2001){
    if (currentDay == 1){
      cout << "Day:   " << currentDay << endl;
      cout << "Month: " << currentMonth << endl;
      cout << "Year:  " << currentYear << endl;
      cout << "DOW:   " << dayOfWeek << endl;
      cout << "--------------------------" << endl;
    }
    if (currentDay == 1 && dayOfWeek == 1){
      sundayCount++;
    }
    
    //increment day
    currentDay++;
    dayOfWeek++;
    if (dayOfWeek > 7)
      dayOfWeek = 1;
    //increment month as necessary
    if(currentDay > maxDays[currentMonth]){
      currentDay = 1;
      currentMonth++;
    }
    //leap year stuff
    if (currentMonth == 2 && currentDay == 29 && 
	(currentYear % 4 != 0 ||
	 (currentYear % 100 == 0 && currentYear % 400 != 0))){
      cout << "Leap day" << endl;
      currentDay = 1;
      currentMonth++;
    }

    //increment year as necessary
    if (currentMonth > 12){
      currentMonth = 1;
      currentYear++;
    }
  }
  cout << sundayCount << endl;
  return 0;
}
