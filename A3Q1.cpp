#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	char response = 'N';
	
	do
	{
		cout << "Please enter the cost of a meal in dollars and cents:"
			<< endl;
		double cost = 0;
		cin >> cost;
	
		cout << "Please enter the number of guests:" << endl;
		int people = 0;
		cin >> people;
	
		if (people <= 0 || cost <= 0)
    	{
    		cout << "Enter positive values." << endl;
        	response = 'Y';
    	}
    	else
    	{
    		cout << "Each person should pay: " << (cost * 1.15)/ people
				 << endl;
    		
			cout << "Would you like to split another bill (y/n)?";
    		cin >> response;
		}
	} while (response == 'Y' || response == 'y');
	
	cout << "Goodbye" << endl;
	
	system("PAUSE");        
    return EXIT_SUCCESS;
}

/*
TEST CASE 1
Please enter the cost of a meal in dollars and cents:
20
Please enter the number of guests:
2
Each person should pay: 11.5
Would you like to split another bill (y/n)?n
Goodbye
Press any key to continue . . .


TEST CASE 2
Please enter the cost of a meal in dollars and cents:
10
Please enter the number of guests:
1
Each person should pay: 11.5
Would you like to split another bill (y/n)?y
Please enter the cost of a meal in dollars and cents:


TEST CASE 3
Please enter the cost of a meal in dollars and cents:
2
Please enter the number of guests:
-1
Enter positive values.
Please enter the cost of a meal in dollars and cents:
 */
