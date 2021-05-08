#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	
	cout << "Enter a distance in nautical miles: ";
	double nautical_miles = 0;
	cin >> nautical_miles;
	
	double kilometers = 0;
	double cable_lengths = 0;
	
	cout << "The distance in kilometers is " 
		 << nautical_miles*1.852 << endl
		 << "The distance in cable lengths is "
		 <<  nautical_miles*10 << endl;
	
	
	system("PAUSE");
    return EXIT_SUCCESS;
	
}

/*
Enter a distance in nautical miles: 5
The distance in kilometers is 9.26
The distance in cable lengths is 50
Press any key to continue . . .
*/
