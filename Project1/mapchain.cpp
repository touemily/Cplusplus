/**
    ECE250
    mapchain.cpp

    Author: Emily Tou
    Version 1.0  - 09/10/2020
*/

#include <cmath>
#include <iostream>
#include <vector>

#include "mapchain.h"

    
long long MapChain::firstfunction(long long enteredKey)//Computes result of primary function
{
	int size = max;
	
	int hashFunction1 = enteredKey % size;
	
	long long result = hashFunction1;
	
    return (result);
}
e
void MapChain::setTableSize(int size)
{
    max = size;
    table.resize(size);

    for (int a = 0; a < max; a++)
	{
        int valueofTableatEachSize = table[a];
		
		int assigntoCurrentNode = valueofTableatEachSize;
		
        current = assigntoCurrentNode;
		/*
		for (int a = 0; a < table.capacity(); a++){
        table[a].point = nullptr;
    	}
    	table.resize(size);
    	cout << "success";
		*/
		while (NULL != table[a])
		{
			while (NULL != current)
			{
				temporary = current;
				delete temporary;
				
				current -> next = current -> next;
            	current = current -> next;
            
             
			}
		}

    }
    /*
    	if (size != 0)
		{
        clear();
        delete table;
    	}    
    	max= size;
    	for(size a{0}; a < size; a++)
		{
        table[a] = nullptr;
    	}
    */
    max = size;
    
    table.resize(size);
	
	string message = "success";
    cout << message << endl;
}

void MapChain::insertEntry(string callerID, long long enteredKey)
{
	
    long long valueTable = 0;
	
	int valueTable = firstfunction(enteredKey);
    
    head = 0;
    
	head = table[valueTable];
	/*
	if (size == 0){
        throw 0;
    }
    
    if (table[a] == nullptr){
        table[a]->insertEntry;
    }
    else{
        table[a]->insertEntry;
    }
	*/
    
    if ((NULL == head -> next) && (key < (head -> key)))
    {
    		newNode = new EntryChain;
			table[valueTable] = newNode;
			
			string nextValueAfterNode = callerID;
			table[valueTable] -> strValue = table[valueTable] -> strValue;
            table[valueTable] -> strValue = nextValueAfterNode;
            
            table[valueTable] -> next = table[valueTable] -> next;
            table[valueTable] -> next = head;
            /*
				while (array!= EMPTY && !( array[a] == OCCUPIED) && counter < size) {
			a = (a + offset) % size;
			counter++;
		}	
		if (counter == array_size || array_state[index] == EMPTY) {
			return -1;
		}
		else {
			return a;
		}
			*/
            long long nextPointedKey = key;
            table[valueTable] -> key = table[valueTable] -> key;
            table[valueTable] -> key = nextPointedKey;
            // result += 1;
            message = "success";
            cout << message << endl;
	}
    if ((NULL == head -> next) && (key < (head -> key)))
    {
    		newNode = new EntryChain;
			table[valueTable] -> next = table[valueTable] -> next;
            table[valueTable] -> next = newNode;
            
            string nextValueAfterNode = callerID;
            table[valueTable] -> next = table[valueTable] -> next;
            table[valueTable] -> next -> strValue = nextValueAfterNode;
            /*
				while (array!= EMPTY && !( array[a] == OCCUPIED) && counter < size) {
				a = (a + offset) % size;
				counter++;
			}	
			if (counter == array_size || array_state[index] == EMPTY) {
				return -1;
			}
			else {
				return a;
			}
			*/
            long long nextKeyValue = key;
            table[valueTable] -> next = table[valueTable] -> next;
            table[valueTable] -> next -> key = nextKeyValue;
            
            message = "success";
            cout << message << endl;
            /*
            	bool member( T const & ) const;
    			T bin( int ) const;
            */
	}

    if ((NULL == head -> next) && (key == head -> key))
	{
		message = "failure";
        cout << message << endl;

    }
    
     if (NULL == successor)
	{
        newNode =  new EntryChain;
		table[valueTable] =  newNode;
		
		long long setNextKey = enteredKey;
		table[valueTable] -> key = table[valueTable] -> key;
        table[valueTable] -> key = setNextKey;
        
       	string setCaller = callerID;
        table[valueTable] -> strValue = table[valueTable] -> strValue;
        table[valueTable] -> strValue =  setCaller;
        /*
        	for ( int i = 0; i < max; ++i ) {
        	table[i] = EMPTY;
    	}
        */
        string message = "success";
    	cout << message << endl;
    }
		/*
		void insert( T const & );
   	 	bool remove( T const & );
		*/
    else
	{
        head -> next = head -> next;
        successor = head -> next;
		current = head;
        
     	if (head == NULL)
		{
       		table[valueTable] =  new EntryChain;
			table[valueTable] =  table[valueTable];
			
        	long long setNextKey = enteredKey;
        	table[valueTable] -> key = table[valueTable] -> key ;
       		table[valueTable] -> key = setNextKey;
        	/*
					if ( ( key % 2 ) == 0) {		
					key = key + 1;				
							
					}
				return key;
				*/
        	string setCaller = callerID;
        
        	table[valueTable] -> strValue =  setCaller;
        
        	string message = "success";
    		cout << message << endl;
   	 	}
   	 	/*
   	 		delete [] array;
    	delete [] occupied;
   	 	*/

        if (key < (current -> key) 
        {
			if (key< (successor -> key)) 
			{
            	table[valueTable] = new EntryChain;
				table[valueTable] = table[valueTable];
				/*
					if ( ( key % 2 ) == 0) {		
					key = key + 1;				
							
					}
				return key;
				*/
				string newCallerID = callerID;
				table[valueTable]-> strValue = table[valueTable]-> strValue;
				table[valueTable]-> strValue = newCallerID;
				
				table[valueTable]-> next = table[valueTable]-> next;
            	table[valueTable]-> next = current;
            	
            	long long newKey = enteredKey;
            	table[valueTable]-> key = newKey;
            	
            	string message = "success";
            	cout << message << endl;
        	}
        }
        /*
        	int hashValue = (hash1 + (i*hash2))%array_size;
        */
        else
		{
			if (NULL==successor)
			{
                current -> next = current -> next;
				current -> next = new EntryChain;
				
				string newCallerID = callerID;
				current -> next = current -> next;
				current -> next -> strValue = newCallerID;
				/*
					if ( ( key % 2 ) == 0) {		
					key = key + 1;				
							
					}
				return key;
				*/
				long long newKey = enteredKeyey;
                current -> next -> key = newKey;
                
                string message = "success";
            	cout << message << endl;
            }
            else
            {
			
            while (NULL != successor)
			{
                if (key == (current -> key))
				{
                    string message = "failure";
            		cout << message << endl;
                    break;
                }
                if (key == (successor -> key))
				{
                	string message = "failure";
            		cout << message << endl;
                    break;
				}

                if ((current -> key)< key)
				{
					if ((successor -> key) > key)
					{
                    	current -> next = current -> next;
						current -> next  = new EntryChain;
						
						
						long long newKey = key;
						current -> next = current -> next;
                    	current -> next -> key = newKey;
                    	/*
					if ( ( key % 2 ) == 0) {		
					key = key + 1;				
							
					}
				return key;
				*/
                    	current -> next -> next = current -> next -> next;
                    	current -> next -> next = successor;
                    	
                    	stringnewCallerID = callerID;
                    	current -> next -> strValue = callerID;
                    	
                    	
                    	string message = "success";
            			cout << message << endl;
                    	break;
                	}
                }
                /*
                if (bin%2 == 0)
   				{
       				 bin += 1;
    			}
    
    			if (bin < 0)
    			{
        			bin += array_size;
    			}
                */

                else
				{
                    successor = successor;
					current = successor;
					successor -> next = successor -> next;
                    successor = successor -> next;
                }
            }
        	}
        
        }
        
    }      
}


void MapChain::search(long long key)
{
    long long valueTable = 0;
	int valueTable = firstfunction(key);
	int newCurrentValue = table[valueTable];
    current = 	newCurrentValue;
    /*
    	if (size == 0)
		{
        	return "not found";
    	}//empty table
    	
    	if (table[a] == nullptr)
    	{
        	return "not found";
    	}
    	else
		{
        	node* temp = table[a]->search;
        	if (temp == nullptr)
			{
            	return "not found";
        	}//not found
        else{
            return "found " + temp->get_data() + " in " + std::to_string(h);
        }//found
    	}
    */
	if (NULL != current)
	{
        while (NULL != current)
		{
            if (key != current -> key )
            {
            	current -> next = current -> next//int result = k % array_size; // k % M
				current = current -> next;
			}
            /*
					if ( ( key % 2 ) == 0) {		
					key = key + 1;				
							
					}
				return key;
				*/
			if (key == current -> key)
			{
				string value2 = current -> strValue;
				string message1 = "found ";
				string message2 = "at";
				string space = " ";
				
				cout << message1 << value2 << message2 << strValue << endl;
                break;
            }

        }
    }
    /*
    	int i, counter = 0;
    	for (i = 0; i < table; i++){
    	    if(table[i] == key){
    	        counter = 1;
    	        break;
        }
   	 
   	 	if(counter == 1){
    	  
    	}
    	else{
    	    cout << "not found";
    	}
    */
    
	if (NULL == current)
	{
		string message = "failure";
        cout << message << endl;
    }
}

void MapChain::deleteK(long long key)
{
    /*
    	node* temp = table[a]->search(k);
        if (temp == nullptr){
            throw 0;
    */
    long long valueTable = 0;
	int valueTable = firstfunction(key);
	int newCurrentValue = table[valueTable];
    head = 	newCurrentValue;


    if ((key == (head -> key)) && (NULL== (head -> next)))
	{
            delete head;

            table[valueTable] = NULL;
            string message = "success";
            cout << message << endl;
     
    }
    /*
					if ( ( key % 2 ) == 0) {		
					key = key + 1;				
							
					}
				return key;
				*/
    if ((key != (head -> key)) && (NULL== (head -> next)))
    {
    	string message = "failure";
        cout << message << endl;
	}
	if (NULL == head)
	{
		string message = "failure";
        cout << message << endl;
    }

	/*
    	else
		{
            table[a]->remove_node(key);
            if (table[a]->get_size() == 0){
                delete table[h];
                table[h] = nullptr;
            }
        }
    */
    else
	{
        head -> next = head -> next;
        head = head;
		predecessor = head;
        successor = head -> next;
        

        if (key == predecessor -> key)
		{	
			delete predecessor;
            delete head;
			successor = successor;
            table[valueTable] = successor;
            
            string message = "success";
            cout << message << endl;
        }
		/*
			int result = k % array_size; // k % M
    		if (k < 0) { // If negative, add M
        	result += array_size;
    	}
    	return result;
		*/

        if (key != predecessor -> key)
		{
			bool boolValue = false;
            bool isKeyDeleted = boolValue;
            
			if (false ==isKeyDeleted)
			{
				if (NULL == successor)
				{
					string message = "failure";
					cout << message << endl;
				}
                
            }
            /*
            	 for (int i = 0; i < array_size; ++i) {
        	std::cout << i << ": " << array[i] << std::endl; 
   			 }
			return;
            */
            while (NULL != successor)
			{
                if (key != successor -> key)
                {
                	successor = successor;
					successor -> next = successor -> next;
					
					successor = successor -> next;
                    predecessor = successor;
				}
                /*
				while (array!= EMPTY && !( array[a] == OCCUPIED) && counter < size) {
				a = (a + offset) % size;
				counter++;
			}	
			if (counter == array_size || array_state[index] == EMPTY) {
				return -1;
			}
			else {
				return a;
			}
			*/
				if (key == successor -> key)
				{
                    temporary -> next = temporary -> next;
                    successor = successor;
				
					bool newisKeyDeleted = true;
					
					temporary = successor;
					delete temporary;
					
                    successor = temporary -> next;
                    
                    predecessor -> next = successor;
                    

                    isKeyDeleted = newisKeyDeleted;
                    
                    string message = "success";
                    cout << message << endl;
                }

            }
        }
    }
}

MapChain::MapChain()//Constructs
{
	initialValue = 0;
	
	table.resize(initialValue);
	
    max = initialValue;
}

MapChain::~MapChain()//Destructs
{
    for (int a = 0; a < max; a++)
	{
		valueofTableatEachSize = table[a];
		
		assigntoCurrentNode = valueofTableatEachSize;
		
        current = assigntoCurrentNode;

        while (a < max && current != NULL)//state *array_state;
		{
            current = current;
			temporary = current;
			/*
				while (array!= EMPTY && !( array[a] == OCCUPIED) && counter < size) {
			a = (a + offset) % size;
			counter++;
		}	
		if (counter == array_size || array_state[index] == EMPTY) {
			return -1;
		}
		else {
			return a;
		}
			*/
			current -> next = current -> next;
            current = current -> next;
            
            delete temporary;         
        }
    }
}


void MapChain::printFunction(int a)
{
    newPreValue = table[a];
	predecessor = newPreValue ;
	/*
		if (a >= size){
        //do nothing
    	}
    	else if (table[a] == nullptr){
        //do nothing
    	}//empty chain
    	else{
        table[i]->print();
    	}
	*/
    if (NULL != predecessor -> next)
    
    	newSuccessorValue = table[a] -> next;//int size() const;
        successor = newSuccessorValue;

        if (NULL == successor) 
		{
			newPredecessorValue = predecessor -> key;//int capacity() const;		
            cout << newPredecessorValue << endl;
        }
        /*
        	for (temp = table[a].point; temp != nullptr; temp = temp -> next){
            vector.remove(temp -> numbers);
            count ++;
        */
        else
        {
		while (NULL != successor)
		{
			newPredecessorValue = predecessor -> key;//int hash( T const & ) const; 
            cout << newPredecessorValue';

            predecessor = successor;
            successor = successor -> next;              
        }
    	}
    }
    /*
    	for(int a = 0; a < count; a++){
            cout << vector[a] << " ";
        }
    */
	
	if (NULL == predecessor -> next)
	{
        keyofPre = predecessor -> key;
		cout << keyofPre << endl;//bool remove( T const & );
    }
}
