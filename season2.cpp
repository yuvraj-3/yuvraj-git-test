#include <iostream>
using namespace std;

int main() 
{
  int m; 
  
  bool exit = false; 
  
  while (!exit) 
  { 
    cout << "enter a month number (1-12)  "; 
    cin >> m; 
    
    if (m<12 )
    {
         exit = true; 
      switch (m) 
      { 
          case 1: 
          case 2: 
          case 3:
          cout << "The season is spring"<<endl;
          break;
          case 4: 
          case 6: 
          case 5:
          cout << "The season is summer"<<endl;
          break; 
          case 7:
          case 8: 
          case 9:
          cout << "The season is autumn"<<endl; 
          break;
          case 10:
          case 11:
          case 12:
          cout << "The season is winter"<<endl; 
          break; 
          default:
          cout << "Wrong input"<<endl;
          break;
      }
    }
    else  
    { 
      
      cout << "wrong input\n"; 
    }
  }
  return 0; 
}