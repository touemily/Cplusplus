#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	cout << "Enter an atomic radius in Angstroms and a cell structure " <<
			"(SC, BCC, or FCC)" << endl;
	
	double radius = 0;
	string cellstructure = "";
	
	cin >> radius >> cellstructure;
	
	if ((cellstructure != "SC")&&(cellstructure != "BCC")
		&&(cellstructure != "FCC"))
	{
		cout << "Enter an appropriate cell structure" << endl;
	}
	
	if (radius < 0)
	{
		cout << "Enter an appropriate radius" << endl;
	}
	
	else
	{
		if (cellstructure == "SC")
		{
			cout << "The volume of the unit cell is: " << pow((2 * radius), 3)
				 << endl;
		}
		
		else if (cellstructure == "BCC")
		{
			cout <<"The volume of the unit cell is: "
				 << pow(((4 * radius)/sqrt(3)), 3) << endl;
		}
		
		else if (cellstructure == "FCC")
		{
			cout <<"The volume of the unit cell is: "
				 << pow(((4 * radius)/sqrt(2)), 3) << endl;
		}
		
	}
	
	system("PAUSE");
	return EXIT_SUCCESS;
}

/*
TEST CASE 1
Enter an atomic radius in Angstroms and a cell structure (SC, BCC, or FCC)
2 SC
The volume of the unit cell is: 64
Press any key to continue . . .

TEST CASE 2
Enter an atomic radius in Angstroms and a cell structure (SC, BCC, or FCC)
3 BCC
The volume of the unit cell is: 332.554
Press any key to continue . . .

TEST CASE 3
Enter an atomic radius in Angstroms and a cell structure (SC, BCC, or FCC)
5.5 FCC
The volume of the unit cell is: 3764.64
Press any key to continue . . .

TEST CASE 4
Enter an atomic radius in Angstroms and a cell structure (SC, BCC, or FCC)
2 ABC
Enter an appropriate cell structure
Press any key to continue . . .

TEST CASE 5
Enter an atomic radius in Angstroms and a cell structure (SC, BCC, or FCC)
1 SC
Enter an appropriate radius
Press any key to continue . . .
*/

