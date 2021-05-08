/**
    ECE250
    entrychain.cpp

    Author: Emily Tou
    Version 1.0  - 09/10/2020
*/
#include "entrychain.h"

#include <string>

EntryChain::~EntryChain() 
{

}

EntryChain::EntryChain()
{
    initialValueKey = -1;
	key = initialValueKey; //Set initial key value
    
    blankstring = "";
    striValue = blankstring; //Set initial
    
    next = NULL; //Set next pointer to NULL
}


