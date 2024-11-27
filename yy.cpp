#include <iostream>
#include <math.h>
using namespace std;
 int main () { 
  //   int num,result =1;
  //      cout << " num: ";
  //  in:
  //    cin >> num;
  //    if ( cin.fail()) {
  //     cin.clear();
  //     cin.ignore();
  //     cout << " Try to enter +ve integer: ";
  //     goto in;
  //    }
  //        if ( num >= 0 ) 
  //        {
  //         while ( num != 0 )
  //             {
  //               result *= num;
  //              num -= 1;
  //             } 
  //               cout << " result: "<<result;    
  //        }
  //  int num,temp = 0,result;
  //    cout << " num: ";
  //    cin >> num;
  //       for ( int counter = 1; counter <= num; counter++ )
  //           {
  //             if ( num % counter == 0 )
  //                {
  //                  temp += counter;
  //                }
  //           }
  //             result = temp - num;
  //               if ( result == num )
  //                  {
  //                    cout << " The num is perfect num ";
  //                  }
  //               else {
  //                 cout << " The num is not perfect num ";
  //               }
     char alphabet = 'A';
        for ( int i = 1; i <= 5; i++)
           {
            for ( int j = 5-i; j >= 1; j--)
               {
               cout << " ";
               }
            for ( int k = 1; k <= i; k++)
               {
                cout << alphabet;
                alphabet += 1;
                cout << " ";
               }
               cout <<endl;
           }     
        
    return 0;
 }
