#include <iostream>
#include <math.h>
using namespace std;
 int main () {
  int num,sum = 0,max = 0,min,temp;
  char special_character;
    while ( num != special_character )
    {               
        cout << " num: ";
        cin >> num;           
           sum += num;        
         if ( max < num )
           {
             max = num;
           }
        else {     
        }     
    }
    cout << sum <<endl;
    cout << " max: " <<max;
     return 0;
 }