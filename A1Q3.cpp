/*
 Student Name: Emily Tou
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	
	cout << "Enter four integers: " << endl;
	double num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	cin >> num1 >> num2 >> num3 >> num4;
	
	cout << "The sum of these integers are: "
		 << num1 + num2 + num3 + num4 << endl;

	cout << "The mean of these values are: "
		 << (num1 + num2 + num3 + num4)/4 << endl;
	
	
	system("PAUSE");
	return EXIT_SUCCESS;
	
}

/*
TEST CASE 1

Enter four integers:
1 2 3 4
The sum of these integers are: 10
The mean of these values are: 2.5
Press any key to continue . . .

TEST CASE 2
Enter four integers:
2 3 4 5
The sum of these integers are: 14
The mean of these values are: 3.5
Press any key to continue . . .

TEST CASE 3
Enter four integers:
3 4 5 6
The sum of these integers are: 18
The mean of these values are: 4.5
Press any key to continue . . .

TEST CASE 4
Enter four integers:
4 5 6 7
The sum of these integers are: 22
The mean of these values are: 5.5
Press any key to continue . . .
*/
