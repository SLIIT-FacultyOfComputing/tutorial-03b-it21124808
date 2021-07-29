#include <iostream>
using namespace std;

int volume(int height, int width, int length); //function declaration
struct box{

    int height; //declaring variable
    int width; //declaring variable
    int length; //declaring variable

}; //defining a structure
//function main begins with program execution
int main() 
{

       box box1; //declaring variable
       box box2; //declaring variable
       int totalVolume; //declaring variable
    
    
         cout << "Enter Box 1 Height : "; //prompt
         cin >> box1.height; //read
         cout << "Enter Box 1 Width : "; //prompt
         cin >> box1.width; //read
         cout << "Enter Box 1 Length : "; //prompt
         cin >> box1.length; //read

         cout << endl; //newline
    
         cout << "Enter Box 2 Height : "; //prompt
         cin >> box2.height; //read
         cout << "Enter Box 2 Width : "; //prompt
         cin >> box2.width; //read
         cout << "Enter Box 2 Length : "; //prompt
         cin >> box2.length; //read
    
    
         totalVolume = volume(box1.height, box1.width, box1.length)
             + volume(box2.height, box2.width, box2.length); //function calling

         cout << endl; //newline
         cout << "Volume of Box is " << totalVolume << endl; //display
    
                   return 0;

} //end of the main function
int volume(int height, int width, int length) //function implementation
{

      return height * width * length;

} //end of the function