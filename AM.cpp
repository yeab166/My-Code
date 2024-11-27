#include <iostream>
#include <cmath>
using namespace std;
int main () {
   int num,remainder,sum = 0;
     cout << " num: ";
     cin >> num; 
       while ( num > 0)
         {        
          remainder = num % 10; 
            int fact = 1;
            bool isprime = true;       
           if ( remainder <= 1 )
                      {
                         isprime = false;
                       }
                    for ( int counter = 2; counter <= remainder / counter; counter++ )
                       {
                          if ( remainder % counter == 0 )
                            {
                               isprime = false;
                               break;
                             }
                       }
                    if ( isprime )
                      { 
                        isprime = true;
                          while ( remainder >= 1 )
                     {
                      fact *= remainder;
                    remainder -= 1;                    
                     }
                     sum += fact;
                      }
                      else {                        
                         
                      }                                         
                      num /= 10; 
         }                                                                                                                               
            cout << " result: " <<sum;
           
return 0;
}