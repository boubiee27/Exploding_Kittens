/*
 *Title: Exploding Kittens Card Game
 *Date: 2/22/2017
 *Author: Boubacar Diallo
 *Description: This is the game class for the exploding kittens game
*/

#include "Card.h"

	// Name - Constructor
	// Preconditions - valid int type for type of card, string name
	// Postcontions - A card object with the given input values
Card::Card(int m_type, string m_desc){
    this->m_type = m_type;
    this->m_desc = m_desc;
    
}

	// Name -  GetType() - Returns the type of card
	// Preconditions - an initialized card
	// Postconditions - integer representing the type of card
	// (see reference chart below)
int Card::GetType(){
    return m_type;
}

	// Name - ToString() - Returns a string representation of the card
	// Preconditions - An intitalized card
	// Postcontitions - Returns a string containing the representation of the card
string Card::ToString(){
    return "Card Number " +m_type+ "\nCard Description " +m_desc;
}