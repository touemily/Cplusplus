#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
	ifstream fileIn("N:\\ME_101\\December_2019.txt");
	
	double largest = 0, smallest = 1e12, temperature = 0;
	int count = 0;
	
	while (fileIn >> temperature)
	{
		if ((count % 2 == 0) && (temperature > largest))
		{
			largest = temperature;
		}
		else if ((count % 2 != 0) && (temperature < smallest))
		{
			smallest = temperature;
		}
		
		count++;
	}
	
	cout << "The highest daily high temperature in December was: " << largest
		<< endl;
		 
	cout << "The lowest daily low temperature in December was: " << smallest
		<< endl;
	
	fileIn.close();
	
	system("PAUSE");
	return EXIT_SUCCESS;
}

/*
The highest daily high temperature in December was: 10.2
The lowest daily low temperature in December was: -17.9
Press any key to continue . . .
*/
