/*
 Student Name: Emily Tou
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    
    cout << " Input the value of the side length of the square: ";
	int side_length = 9;
    cin >> side_length;


    cout << "The square of " << side_length << " is " 
	     << side_length*side_length << endl
         << "& the cube of " << side_length << " is "
		 << side_length*side_length*side_length << endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
    
}

/*
 Input the value of the side length of the square.2
The square of 2 is 4
& the cube of 2 is 8
Press any key to continue . . .
*/
