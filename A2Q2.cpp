#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	cout << "Enter an integer from -999,999 to 999,999" << endl;
	
	int integer = 0;
	
	cin >> integer;
	
	int thefirstpart = integer/1000;
	int thesecondpart = integer%1000;
	
	if ((abs(integer)) < 1000)
	{
		cout << integer << endl;
	}
	
	else if (thesecondpart == 0)
	{
		cout << thefirstpart << ",000" << endl;
	}
	
	else
	{
		cout << thefirstpart << "," << abs(thesecondpart) << endl;
	}
	
	system("PAUSE");
	return EXIT_SUCCESS;
}

/*
TEST CASE 1
Enter an integer from -999,999 to 999,999
100
100
Press any key to continue . . .

TEST CASE 2
Enter an integer from -999,999 to 999,999
999999
999,999
Press any key to continue . . .

TEST CASE 3
Enter an integer from -999,999 to 999,999
-900000
-900,000
Press any key to continue . . .
*/
