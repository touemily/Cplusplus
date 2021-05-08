
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
	
	EntryChain* next; //Pointers of this class
	EntryChain* predecessor;
	EntryChain* successor;
	EntryChain* head;
	EntryChain* current;
	EntryChain* temporary;

    string striValue; //String
    
};

#endif 
