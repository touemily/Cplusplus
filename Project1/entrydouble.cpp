/**
    ECE250
    entrydouble.cpp

    Author: Emily Tou
    Version 1.0  - 09/10/2020
*/

#include <string>

#include "entrydouble.h"


void EntryDouble::setKey(long long enteredKey)//Function that sets the key
{
    enteredKey = key;
    
}
/*
	long long phoneNumber;
	string callerName;
*/


long long EntryDouble::getKey()//Function that returns the key
{
	obtainedKey = key;
    return obtainedKey;
    
}

/*
vector<list> table;
    Node* temp = nullptr;
*/
void EntryDouble::setOccupiedNode(bool occupiedN)//Function that sets a bool value for occupied node or not
{
    occupiedNode = occupiedN;
    
}

/*
	phoneNumber = 0;
	callerName = "";
*/

bool EntryDouble::getOccupiedNode()//Function that returns the bool value for occupied node or not
{
	obtainedOccupiedNode = occupiedNode;
    return obtainedOccupiedNode;
    
}
/*
	this->phoneNumber = 0;
	this->callerName = "";
*/
void EntryDouble::setValueCaller(string callerID)//Function that sets the string value of the callerID id
{
    newCallerID = callerID;
	striValue = newCallerID;
	
}
/*
	void search(long k);
    //Deletes the key k from the table
*/

string EntryDouble::getValueCaller()//Function that returns the string value of the callerID id
{
    obtainedValueCaller = striValue;
	return obtainedValueCaller;
	
}
/*
	const long long& phoneNumber, const string& callerName
*/

EntryDouble::EntryDouble() //Contructs
{
    initialValueKey = -1;
	key = initialValueKey;
    
    blankstring = "";
    striValue = blankstring;
    
    occupiedNode = false;
    
}

EntryDouble::~EntryDouble() //Destructs
{


}

