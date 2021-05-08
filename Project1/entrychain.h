/**
    ECE250
    entrychain.h

    Author: Emily Tou
    Version 1.0  - 09/10/2020
*/

#ifndef ENTRYCHAIN_H
#define ENTRYCHAIN_H

using namespace std;

class EntryChain
{
public:
    
	friend class MapChain; //Make variables of MapChain accessible 
    //Entry* table;
	EntryChain(); //Construct
	
    ~EntryChain(); //Destruct
    
private:
	
	long long key; //Key variable to be entered
	//primaryHash(const long long& phoneNumber) const
	EntryChain* next; //Pointers of this class
	EntryChain* predecessor;
	EntryChain* successor;
	EntryChain* head;
	EntryChain* current;
	EntryChain* temporary;
	//secondaryHash(const long long& phoneNumber) const
    string striValue; //String
    
};

#endif 
