#include <iostream>
#include <ctype.h>
using namespace std;
int main () {
  int stud_num;
      cout << " Enter student number =";
      cin >> stud_num;
          for ( int j=1; j<=stud_num; j++ )
             {
                int course_num, cr_hrs,total_cr_hrs = 0;
                float grade_point = 0,GPA;
                   cout << " Enter course num =";
                   cin >> course_num;
                         for ( int i = 1; i<=course_num; i++ ) 
                             {
                                  float mark,grade;
                                      cout << " Enter cr_hrs = ";
                                      cin >> cr_hrs;
                                      cout << " Enter a mark " <<i<<"=";
                                      cin >>mark;
                                          if (cin.fail() || mark < 0 || mark > 100) {
                                              cout << " Invalide input " <<endl; 
                                             }
                                          else 
                                             {

            
                                                 if ( mark >=90 && mark <=100 )
                                                     {
                                                          cout << "A = 4" <<endl;
                                                          grade = ( cr_hrs * 4 );
              
                                                      }
                                                  else if ( mark >=80 )
                                                     {
                                                          cout << "B = 3" <<endl;
                                                          grade = ( cr_hrs * 3 ); 
                                                      }
        
                                                  else if ( mark >=65 )
                                                     {
                                                          cout << "C = 2" <<endl;
                                                          grade = ( cr_hrs * 2 ); 
                                                      }
                                                  else if ( mark >=30 )
                                                     {
                                                          cout << "D = 1" <<endl; 
                                                          grade = ( cr_hrs * 1 );
                                                      }
                                                  else
                                                     {
                                                          cout << "F = 0" <<endl;
                                                          grade = ( cr_hrs * 0 ); 
                                                      }
                                              }
                                                          total_cr_hrs = total_cr_hrs + cr_hrs;
                                                          grade_point = grade_point + grade;
                                                          cout <<endl; 
                              }
                                      GPA = grade_point / total_cr_hrs;
                                      cout << " Your GPA is = "<<GPA;
         }
        
        
    return 0;
}
