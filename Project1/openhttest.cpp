/**
    ECE250
    openhttest.cpp

    Author: Emily Tou
    Version 1.0  - 09/10/2020
*/


#include <iostream>
#include <string>
#include "entrydouble.h"
#include "mapdouble.h"

using namespace std;

int main()
{

    string input;
    while(!(cin.eof()))
	{
        getline(cin,input);
        if (input == "exit")
        {
            return 0;
        }
		string substring = input.substr(0, 1);
		string substring2 = input.substr(2);
		long long longSize = stoll(substring2);
		
	
		
        string input;
        MapDouble table;

        if ("n" ==substring)
			{
                table.setTableSize(longSize);
            }
    
            if ("i" == substring)
			{
                string thingtobeFound = ";";
		        string substring3 = input.substr(input.find(thingtobeFound)+1);
                table.insertEntry(longSize, substring3);
            }

            if ("s" == substring)
			{
                table.search(longSize);
            }

            if ("d" == substring)
			{
                table.deleteK(longSize);         
            }

			if ("exit" == substring)
            {
            	
        	}	
            else
			{

            }
        
    }
}
