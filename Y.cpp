#include <iostream>
using namespace std;
 int main () {            
    int size;
      cout << " size: ";
      cin >> size;
       for ( int i = 1; i <= size; i++ )
           {
            int num;
            bool isprime = true;
                cout << " num: ";
                cin >> num;
                    if ( num <= 1 )
                      {
                         isprime = false;
                       }
                    for ( int counter = 2; counter <= num / counter; counter++ )
                       {
                          if ( num % counter == 0 )
                            {
                               isprime = false;
                               break;
                             }
                       }
           
                    if ( isprime )
                      {
                        cout << num << " is prime " <<endl;
                       }
                    else {
                          cout << num << " is not prime " <<endl;
                          }
                       
           }
            
    return 0;
}