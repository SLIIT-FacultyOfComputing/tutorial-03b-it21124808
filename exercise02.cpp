#include<iostream>
using namespace std;

int volume(int height, int width, int length); //function declaration
//function main begins with program execution
int main()
{

    int box1Height, box1Width, box1Length;//declaring variables
    int box2Height, box2Width, box2Length; //declaring variables
    int totalVolume, totalSurface; //declaring variables

       cout << "Enter Box 1 Height : "; //prompt
       cin >> box1Height; //read

       cout << "Enter Box 1 Width : "; //prompt
       cin >> box1Width; //read

       cout << "Enter Box 1 Length : "; //prompt
       cin >> box1Length; //read

       cout << endl; //newline

       cout << "Enter Box 2 Height : "; //prompt
       cin >> box2Height; //read

       cout << "Enter Box 2 Width : "; //prompt
       cin >> box2Width; //read

       cout << "Enter Box 2 Length : "; //prompt
       cin >> box2Length; //read

       totalVolume = volume(box1Height, box1Width, box1Length) + volume(box2Height, box2Width, box2Length); //function calling

          cout << endl; //newline

           cout << "Volume of Box is " << totalVolume << endl; //display

                   return 0;

           
} //end of the main function
int volume(int height, int width, int lenght) //function implementation
{

       return height * width * lenght;

} //end of the function
