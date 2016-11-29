#include <iostream>
#define MAX_SIZE 20
using namespace std;

long countNumPaths (long arr[MAX_SIZE + 1][MAX_SIZE + 1], 
		    int currRow, int currCol);

int main()
{
  long latticePath[MAX_SIZE + 1][MAX_SIZE + 1];

  //initialize all values to -1
  for (int i = 0; i < MAX_SIZE + 1; i++){
    for (int j = 0; j < MAX_SIZE + 1; j++){
      latticePath[i][j] = -1;
    }
  }

  long solution = countNumPaths(latticePath, MAX_SIZE, MAX_SIZE);
  cout << solution << endl;
  
  return 0;
}

long countNumPaths (long arr[MAX_SIZE + 1][MAX_SIZE + 1], 
		    int currRow, int currCol)
{
  //base cases
  if (currRow < 0 || currCol < 0)
    return 0;
  if (currRow == 0 || currCol == 0)
    {
      arr[currRow][currCol] = 1;
      arr[currCol][currRow] = 1;
      return 1;
    }

  //if we have already computed this value, just read from array
  if (arr[currRow][currCol] != -1)
    return arr[currRow][currCol];

  //compute number of paths by summing the paths from right and down point
  long rightVal = countNumPaths(arr, currRow, currCol - 1);
  long downVal  = countNumPaths(arr, currRow - 1, currCol);
  long numPaths = rightVal + downVal;

 //write these values to array so we dont have to compute them again
  arr[currRow][currCol] = numPaths;
  arr[currCol][currRow] = numPaths;

  return numPaths;
}
