#include <iostream>
#include <math.h>
using namespace std;
 int main () { 
    int num,result =1;
    in:
     cout << " num: ";  
     cin >> num;
     if ( cin.fail()) {
      cin.clear();
      cin.ignore();
      cout << " Try to enter +ve integer: \n";
      goto in;
     }
         if ( num >= 0 )
         {
          while ( num != 0 )
              {
                result *= num;
               num -= 1;
              } 
                cout << " Factorial of a number is: "<<result;    
         }
    return 0;
 }
