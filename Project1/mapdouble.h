/**
    ECE250
    mapdouble.h

    Author: Emily Tou
    Version 1.0  - 09/10/2020
*/

#ifndef MAPDOUBLE_H
#define MAPDOUBLE_H

#include <vector>
#include "entrydouble.h"

using namespace std;

class MapDouble
{

private:
    int max;
    int current;
    vector <EntryDouble> table;
    /*
    	long long slots;
		node* hashTable;
    */

public:

    MapDouble(); 
    long long firstfunction(long long key);//array_state[i] = EMPTY;

    long long secondfunction(long long key); //delete [] array;

    void setTableSize(int m);//const unsigned int& size

    void insertEntry(string callerID, long long key);//void InsertingVal(long long key, string caller);

    void search(long long key);//void SearchVal(long long key);

    void deleteK(long long key);//Deleting a value in the table
    ~MapDouble(); 
    
    /*
	void Print(long long index);
	long long Function(long long num);
	void Resize(long long size);
	
	bool FoundKey(long long index, long long key);

    */

};

#endif 
