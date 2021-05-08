#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	ifstream fileIn("N:\\ME_101\\CHE_102_grades.txt");
	
	double highest = 0, smallest = 1e12, grade = 0, sum = 0;
	int studentnumber = 0, higheststudent = 0, loweststudent = 0, count =0;
	
	while (fileIn >> studentnumber >> grade)
	{
		if (grade >= highest)
		{
			higheststudent = studentnumber;
			highest = grade;	
		}
		else if (grade <= smallest)
		{
			loweststudent = studentnumber;
			smallest = grade;
		}
	
		sum+= grade;
		count++;
	}
	
	cout << "Student with number " << higheststudent
		 << " has the highest mark: " << highest << endl;
		 
	cout <<"Student with number " << loweststudent << " has the lowest mark: "
		 << smallest << endl;
	
	cout << "The class average is " << fixed << setprecision(2) << sum/count
		 << endl;
	
	cout << "The number of students is " << count << endl;
	
	fileIn.close();
	
	system("PAUSE");
	return EXIT_SUCCESS;
}

/*
Student with number 44224478 has the highest mark: 98.48
Student with number 21619966 has the lowest mark: 18.07
The class average is 71.34
Press any key to continue . . .
*/
