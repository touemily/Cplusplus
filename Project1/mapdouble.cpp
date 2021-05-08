/**
    ECE250
    mapdouble.cpp

    Author: Emily Tou
    Version 1.0  - 09/10/2020
*/

#include <vector>

#include <iostream>

#include <cmath>

#include "mapdouble.h"

MapDouble::MapDouble() //Constructs
{
	initialValue = 0;
	
	table.resize(initialValue);
	
    max = initialValue;
    
    current = initialValue;
    /*
    	for (int i = 0; i < size; i++)
		{
		hashTable.remove(NULL);
		}
		cout << "success" << endl;
    */
    
}


MapDouble::~MapDouble() //Destructs
{

}
	/*
    	for (int a = 0; a < size; a++)
		{
		delete hashTable[a];
		hashTable[a] = NULL;
		}
		cout << "success" << endl;
    */

long long MapDouble::firstfunction(long long key)
{
	int size = max;//const long long& phoneNumber
	
	long long hashFunction1 = key % size;//phoneNumber % size
	
	long long result = hashFunction1;//Computes 
	
    return (result);
}

long long MapDouble::secondfunction(long long key)
{
	int size = max;//unsigned int output = (unsigned int)((phoneNumber / size) % size
	
	long double firstdivision = (long double)(key/size);
	
	long long floordivision = (long long)(floor(firstdivision);
	
	long long hashFunction2 = floordivision % size;
	
	long long result = hashFunction2;
	
    return (result);
}


void MapDouble::setTableSize(int size)
{
	/*
		for (int a = 0; a < max; a++) {
		delete hashTable[a];
		hashTable[a] = NULL;
		}
		hashTable.resize(size, NULL);
		cout << "success" << endl;
	*/
    if (size > 0)
    {
	
	max = size;
        
    table.clear();
        
    table.resize(size);

	string message = "success";
	
    cout << message << endl;
	}
}


void MapDouble::insertEntry(string callerID, long long key)
{
    long long valueTablewithFirstFunction = 0;
	int valueTablewithFirstFunction= firstfunction(key);
	long long  keyofValueTable = table[valueTablewithFirstFunction].getkey();
	int ValueofValueTable = table[valueTablewithFirstFunction].getValueCaller();
	
	if (0 > key)
	{
		//nothing
	}
	
	if (((0 < key) && (key == keyofValueTable))||((0 < key) && (max == current)))
	{
		string message = "failure";
		cout << message << endl;
	}


	if ((0 < key))
	{
		if (-1 == keyofValueTable)
		{
			if (""== valueofValueTable)
			{
				long long valueSet = key;//unsigned int offset = secondaryHash(phoneNumber)
				(table[valueTablewithFirstFunction]).setkey(valueSet);
				
				string newID = callerID;
            	(table[valueTablewithFirstFunction]).setValueCaller(callerID);
            	
            	bool theNodeisOccupied = true;
            	(table[valueTablewithFirstFunction]).setOccupiedNode(theNodeisOccupied);
            	
            	current = current +1;
            	string message = "success";
				cout << "success " << endl;
			}
		}
	}
	/*
		if ( table[pr].point == nullptr){
        table[pr].point = newNode;
        newNode -> next = nullptr;
        cout << "success";
    }
	*/
	else
	{
		long long newKey = key;
		long long valueTablewithSecondFunction = secondfunction(newKey);
		
		int numCollisions = 0;
		
		long long valueTablenew2  = 0;
		
		valueTablenew2 = numCollisions * valueTablewithSecondFunction;
		
		valueTablenew2 = valueTablewithFirstFunction + valueTablenew2;
		
		valueTablenew2 = valueTablenew2 % max;
		/*
		int counter = 0;
        while(temp != nullptr){
            if(temp == key){
                counter = 1;
                break;
            }
            prev = temp;
            temp = temp -> next;
        }
		*/
		while (max > = numCollisions)
		{
			if ("" == valueofValueTable)
			{
				if (-1 == keyofValueTable)
				{
					(table[valueTable]).setkeyey(key);
                    (table[valueTable]).setValueCaller(callerID);
                    (table[valueTable]).setOccupiedNode(true);
                    current = current + 1;;
                    string message = "success";
                    cout << message << endl;
                    break;
				}
			}
			/*
				if(counter != 1){
            	prev -> next = newNode;
            	
            	newNode -> next = nullptr;
           		cout << "success";
        	}
        	else{
            	cout << "failure";
       		}
			*/
			else
			{
				if (-1 != keyofValueTable)
				{
					numCollisions = numCollisions + 1;
				}
			}
			
		}
		
	}

}

void MapDouble::search(long long key)
{
    
    long long valueFirstFunction = 0;   
    long long valueSecondFunction = 0;
    
    long long keyofValueTable = table[valueTablewithFirstFunction].getkey();
	int valueofValueTable = table[valueTablewithFirstFunction].getValueCaller();
    
    valueFirstFunction = firstfunction(key); 
	valueSecondFunction = secondfunction(key);

	int numCollisions = 0;
		
	long long valueTablenew2  = 0;
		
	valueTablenew2 = numCollisions * valueTablewithSecondFunction;
		
	valueTablenew2 = valueTablewithFirstFunction + valueTablenew2;
		
	valueTablenew2 = valueTablenew2 % max;
		
	while (max > = numCollisions)
	{
		if (key == keyofValueTable)//static_cast<int>(obj)
		{
			string message1= "found";
			string message2 = "at";
			cout << message1 << valueofValueTable << message2 << valueTablenew2 << endl;
			break;
		}
		/*
			 int num = k % tableNUM;
    		temp = tableNUM.point;
    		int counter = 0;
	    	for (temp = table[num].point; temp != nullptr; temp = temp -> next){
	       	 if(temp -> numbers == k){
            counter = 1;
            break;
        	}
    	}
		*/
		if (key != keyofValueTable)
		{
			if((max-1) == numCollisions)
			{
				cout << "failure" << endl;
			}
			else
			{
				numCollisions = numCollisions + 1;//count += 1;
			}
			
		}
		if (false == table[valueTable].getOccupiedNode())//return array[n];
		{
			cout << "failure" << endl;
		}
	}
}

void MapDouble::deleteK(long long key)
{

    long long valueFirstFunction = 0;   
    long long valueSecondFunction = 0;
    
    long long keyofValueTable = table[valueTablewithFirstFunction].getkey();
	int valueofValueTable = table[valueTablewithFirstFunction].getValueCaller();
    
    valueFirstFunction = firstfunction(key); 
	valueSecondFunction = secondfunction(key);
	
	int numCollisions = 0;
	
	long long valueTablenew2  = 0;
		
	valueTablenew2 = numCollisions * valueTablewithSecondFunction;
		
	valueTablenew2 = valueTablewithFirstFunction + valueTablenew2;
		
	valueTablenew2 = valueTablenew2 % max;
	
	while (max > = numCollisions)
	{
		if (false == table[valueTable].getOccupiedNode())
		{
			cout << "failure" << endl;
		}
		/*
			if(counter == 1 && temp == table[num].point){
        	if(temp -> next == nullptr){
            table[num].point = nullptr;
            cout << "success";
        	}
        	else{
            table[probe].point = temp -> next;
            cout << "success";
       	 	}
    		}
		*/
		if (key != keyofValueTable)
		{
			if((max-1) == numCollisions)//<T >::print() c
			{
				cout << "failure" << endl;
			}
			else
			{
				numCollisions = numCollisions + 1;//count -= 1;
			}
			
		}
		/*
			else {
			long long pr = Function_1(key);
			long long offSet = Function_2(key);
			long long counter = 0;
			while (counter < max) {
				if (Table[(unsigned)pr] != NULL) {
					if (Table[(unsigned)probe]->key == key) {
						return probe;
					}
					else {
						probe = (probe + offSet) % max;
						counter++;
					}
				}
				else {
					probe = (probe + offSet) % max;
					counter++;
				}
			}
			return -1;
		}
		*/
		if (key == keyofValueTable)
		{
			string valueCaller = "";
			long long keyValue = -1;
			table[valueTable].setkey(keyValue);//count = 0;
			table[valueTable].setValueCaller(valueCaller);//DoubleHashTable<T >::empty() const
			current = current + 1;
			string message = "success"
			cout<< "success" << endl;
			break;
		}
		
	}

}
