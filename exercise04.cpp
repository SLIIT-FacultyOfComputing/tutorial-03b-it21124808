#include <iostream>
using namespace std;

void print(int &len, int &wth); //function declaration
void input(int &len, int &wth); //function declaration
// function main begins with program execution
int main() 
{

    int length = 10, width = 5; //declaring variable

    input(length, width); //function calling
    print(length, width); //function calling

        return 0;

} //end of the main function
void print(int &len, int &wth) //function implementation
{

        cout << "Length : " << len 
        << ", Width  : " << wth << endl; //display

} //end of the function
void input(int &len, int &wth) //function implementation
{

         cout << "Length : "; //prompt
         cin >> len; //read

         cout << "Width : "; //prompt
         cin >> wth; //read

} //end of the function
