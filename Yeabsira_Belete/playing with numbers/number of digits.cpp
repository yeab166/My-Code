#include <iostream>
#include <cmath>
using namespace std;
 int main () { 
   int num,remainder,sum = 0;
      cout << " num: ";
      cin >> num;
         libel:
            remainder = num % 10;
              if ( remainder >= 0 )
                 {
                  sum += 1;
                  
                  num /= 10;
                    if ( num > 0 )
                      {
                        goto libel;
                      }
                 }
                    cout << " sum of the digit is: " << sum;
     
 return 0;
}
