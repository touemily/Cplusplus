
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
  
        string message = "success";
    	cout << message << endl;
    }
	
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
  
        else
		{
			if (NULL==successor)
			{
                current -> next = current -> next;
				current -> next = new EntryChain;
				
				string newCallerID = callerID;
				current -> next = current -> next;
				current -> next -> strValue = newCallerID;
			
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
                    	
                    	current -> next -> next = current -> next -> next;
                    	current -> next -> next = successor;
                    	
                    	stringnewCallerID = callerID;
                    	current -> next -> strValue = callerID;
                    	
                    	
                    	string message = "success";
            			cout << message << endl;
                    	break;
                	}
                }
              
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
   
	if (NULL != current)
	{
        while (NULL != current)
		{
            if (key != current -> key )
            {
            	current -> next = current -> next//int result = k % array_size; // k % M
				current = current -> next;
			}
          
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
    
	if (NULL == current)
	{
		string message = "failure";
        cout << message << endl;
    }
}

void MapChain::deleteK(long long key)
{
 
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
          
            while (NULL != successor)
			{
                if (key != successor -> key)
                {
                	successor = successor;
					successor -> next = successor -> next;
					
					successor = successor -> next;
                    predecessor = successor;
				}
                
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
	
    if (NULL != predecessor -> next)
    
    	newSuccessorValue = table[a] -> next;//int size() const;
        successor = newSuccessorValue;

        if (NULL == successor) 
		{
			newPredecessorValue = predecessor -> key;//int capacity() const;		
            cout << newPredecessorValue << endl;
        }
        
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
    
	if (NULL == predecessor -> next)
	{
        keyofPre = predecessor -> key;
		cout << keyofPre << endl;//bool remove( T const & );
    }
}
