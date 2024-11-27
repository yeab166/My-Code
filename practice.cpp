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
                                  
   // for ( int i = 1; i <= 5; i++ )
   //     {
   //       for ( int j = 1; j <= 5; j++ )
   //           {
   //             cout << '*';               
   //           }
   //             cout <<endl;
   //     }      
 return 0;
}

