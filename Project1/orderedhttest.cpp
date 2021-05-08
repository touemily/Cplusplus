/**
    ECE250
    orderedhttest.cpp

    Author: Emily Tou
    Version 1.0  - 09/10/2020
*/


#include <iostream>
#include <string>

#include "entrychain.h"
#include "mapchain.h"

using namespace std;

using namespace std;

int main()
{

    while(!(cin.eof()))
	{

		string substring = input.substr(0, 1);
		string substring2 = input.substr(2, string::npos);
		long long longSize = stoll(substring2);
		
		int value1 = 2;
		string thingtobeFound = ";";
		string substring3 = input.substr(value1, input.find(thingtobeFound) -2);
		long long longSize2 = stoll(substring3);
		
		
        string input;
        MapDouble table;

        while(getline(cin, line))
		{

            if ("n" ==substring)
			{
                table.setTableSize(longSize);
            }
    
            if ("i" == substring)
			{
                table.insertEntry(longSize2, substring3);
            }
            /*
            	params.find(";")
            */

            if ("s" == substring)
			{
                table.search(longSize);
            }
            /*
            unsigned long number = std::stoul(line.substr(command_length + 1))
            */

            if ("d" == substring)
			{
                table.deleteK(longSize);         
            }

            if ("p" == substring)
			{
                table.printFunction(longSize);         
            }
            /*
            	remove(number)) std::cout << "failure" << std::endl
            */
			
			if ("exit" == substring)
			{
				
			}
            else
			{

            }
        }
    }
}
