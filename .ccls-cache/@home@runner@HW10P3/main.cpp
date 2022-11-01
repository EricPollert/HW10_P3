#include <iostream>
#include <iomanip>

using namespace std;


void numArray(int numbers[], int temp, int numNums){
  for (int i = 0; i < numNums; i++){
    cin >> numbers[i];
    
    }

  for (int i = 0; i < numNums; i++){
    if(i == 0){
      temp = numbers[0];
      cout << temp;
      
    }
    else if(temp < numbers[i])
    cout << numbers[i];
    temp = numbers[i];
    
  }
  }


int main() {

  int numNums;
  int temp;
  
  cin >> numNums;
  int numbers[numNums];
  
  numArray(numbers, temp, numNums);
    
  }
