
#ifndef ENTRYDOUBLE_H
#define ENTRYDOUBLE_H

using namespace std;

class EntryDouble
{
public:
    EntryDouble();
    
    ~EntryDouble(); 
    /*
    	const unsigned int& size
    */

    void setKey(long long enteredKey);   //Function that sets the entered key 
    
    long long getKey(); //Function that gets the key
    
	string getValueCaller(); // Function that gets the value of the callerID
	
    void setValueCaller(string callerID); //Function that sets the value of the callerID
    
	bool getOccupiedNode(); //Function that gets the bool value of whether node is occupied 
    
	void setOccupiedNode(bool occupiedN); //Function that sets the bool value of whether node is occupied
	
private:
    long long key;
    
    string striValue;
    
    bool occupiedNode;
};


#endif
