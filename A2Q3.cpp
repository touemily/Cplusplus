#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	cout << "Enter your birthday" << endl;
	int birthyear = 0, birthmonth = 0, birthday = 0;
	cin >> birthyear >> birthmonth >> birthday;
	
	cout << "Enter the current date" << endl;
	int currentyear = 0, currentmonth = 0, currentday = 0;
	cin >> currentyear >> currentmonth >> currentday;
	
	cout << "Birthday: " <<  birthyear << " " << birthmonth << " "
		 << birthday << endl;
	
	cout << "Current date: " <<  currentyear << " " << currentmonth << " "
		 << currentday << endl;
	
	if ((birthmonth < currentmonth) || ((birthmonth == currentmonth) 
		&& (birthday <= currentday)))
	{
		cout << "Age: " << (currentyear - birthyear) << endl;
	}
	else
	{
		cout << "Age: " << (currentyear - birthyear - 1) << endl;
	}
	
	system("PAUSE");
	return EXIT_SUCCESS;	
}

/*
TEST CASE 1
Enter your birthday
2001 11 18
Enter the current date
2020 1 14
Birthday: 2001 11 18
Current date: 2020 1 14
Age: 18
Press any key to continue . . .


*/
