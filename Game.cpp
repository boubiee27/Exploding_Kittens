/*
 *Title: Exploding Kittens Card Game
 *Date: 2/22/2017
 *Author: Boubacar Diallo
 *Description: This is the game class for the exploding kittens game
*/

#include "Game.h"

Game::Game()
{
}


void Game::SetNumPlayer(int numPlayers){
    this->numPlayers = numPlayers;
}

	// Name - Shuffle()
	// Desc - Shuffles the cards that are currently in the deck
	// Preconditions - A deck with at least 1 card
	// Postconditions - A deck with the elements shuffled in a different order
void Game::Shuffle(){
    vector<Card> newDeck;
    while(m_deck.size() != 0){
        int index = rand() % deck.size();
        newDeck.push_back(m_deck[index]);
        m_deck.remove(index);
    }
    delete(m_deck);
    m_deck = newDeck;
}

	// Name - Peek()
	// Desc - The Action for the See into the future card
	// Preconditions - A deck with at least 1 card
	// Postconditions - Will print the next [insert const num] card(s) in the deck
void Game::Peek(){
    for (int i = 0; i < PEEK_NUM; i++){
        cout << m_deck[i].ToString() << endl;
    }
}

	// Name - DrawCard()
	// Desc - Get the card on the top of the deck and give it to a player
	// Preconditions - At least 1 card in the deck
	// Postconditions - Returns and deletes the top card on the deck
Card Game::DrawCard(){
    Card firstCard = m_deck[0];
    m_deck.pop_front();
    return firstCard;
}

	// Name - HandleCard()
	// Desc - Handles the last card placed by the currentPlayer
	// Preconditions - An integer number representing the currentPlayer,
	//                 a card placed on the discard pile
	// Postconditions - Handles the card according to their descriptions
int Game::HandleCard(int){
        //stub
        return 0;
}

	// Name - PlayGame()
	// Desc - Runs the game
	// Preconditions - A loaded deck, all players having cards
	// Postconditions - Determine winner and print to console
void Game::PlayGame(){
        //stub
}

	// Name - LoadDeck()
	// Desc - Loads the cards in from a text file
	// Preconditions - A valid filepath
	// Postcondition - m_deck contains cards
int Game::LoadDeck(string){
    //stub
    return 0;
}

	// Name - AddBombCards()
	// Desc - Loads the bomb cards in from a text file,
	//        this must be separate due to the nature of the game
	// Preconditions - A valid filepath, the file must contain 1 less bomb
	//                 than the number of players
	// Postconditions - Adds the bomb cards to m_deck
int Game::AddBombCards(string){
    //stub
    return 0;
}
