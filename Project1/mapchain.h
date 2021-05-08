/**
    ECE250
    mapchain.h

    Author: Emily Tou
    Version 1.0  - 09/10/2020
*/


#ifndef MAPCHAIN_H
#define MAPCHAIN_H

#include <vector>

#include "entrychain.h"

using namespace std;

class MapChain
{
public:
    
    void insertEntry(string callerID, long long enteredKey); 
    //void insert(const long long& phoneNumber, const string& callerName)
 
    void search(long long enteredKey); 

    void deleteK(long long enteredKey);  
    //void remove(const long long& phoneNumber);

    long long firstfunction(long long enteredKey); 

    void setTableSize(int size);
    //const unsigned int& size
    
    void printFunction(int a); 
	
	MapChain();
    
    ~MapChain();
    /*
    	public:
        void set_size();
        get_size();
        (const &k);   
        void insert(const &k, std::string const &caller);
        void delete_key(const &k);
        void print(const &i);
        void clear();
    */
    
private:
	
    int max;
    
    vector <EntryChain*> table;
    /*
    	private:
        Data** table;
        max_size = 0;
        size = 0;
    */
};

#endif
