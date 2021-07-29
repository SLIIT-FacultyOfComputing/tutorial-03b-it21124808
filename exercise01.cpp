#include <iostream>
#include<iomanip>
using namespace std;

//function main begins with program execution
int main()
{
      int i; //declaring variable
      char name[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"}; //declaring an array
      float marks[]  = {78.40, 90.60, 45.90, 72.20, 54.40}; //declaring variable 
  
        cout << setw(5) << "No" << setw(15) << "Name" << setw(10) << "Marks" << endl; //display

            for(i=0; i<5; i++)
            {

                 cout << setw(5) << i+1  << setw(15) << name[i] << setw(10) << setiosflags(ios::fixed) << setprecision (2) << marks[i] << endl; //display

            } //end of the for loop

            return 0;


} //end of the main function