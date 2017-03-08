/*
 *Title: Exploding Kittens Card Game
 *Date: 2/22/2017
 *Author: Boubacar Diallo
 *Description: This is the game class for the exploding kittens game
*/

#include "Player.h"
#include "Card.h"
#include <vector>

  // Name - Default Constructor
  // Unused
Player::Player(){

}

  // Name - Constructor (Overloaded)
  // Preconditions: A valid input string for the name
  // Postcondition: A player with a name, an empty hand, and m_lost set to false
Player::Player(string m_name){
    this->m_name = m_name;
    this->m_lost = false;
    m_hand = {};
}

  // Name - PlayCard()
  // Desc - Function for moving a card from a player's hand to the discard pile
  // Preconditions - A hand with at least 1 card
  // Postconditions - Returns a card from the hand and deletes it from the array
Card Player::PlayCard(){
    Card card = m_hand[0];
    m_hand.remove(0);
    return card;
}

  // Name - LoseCard() 
  // Desc - Function where a player steals card from another player
  // Preconditions - A hand with at least 1 card, a valid index
  // Postconditions - Returns and deletes the card at index i
Card Player::LoseCard(int i){
    Card card = m_hand[i];
    m_hand.remove(i);
    return card;
    
}

  // Name - HasCards() 
  // Desc - Function to check if the player has cards
  // Preconditions - None
  // Postconditions - True if the player has cards, false otherwise
bool Player::HasCards(){
    return (m_hand.size() != 0);
}

  // Name - HasLost()
  // Desc - Function checks to see if player already lost.
  //        If already lost, skips turn.
  // Preconditions - None
  // Postconditions - The state of m_lost
bool Player::HasLost(){
    return m_lost;
}

  // Name - HasExtraTurn()
  // Desc - Function checks to see if player has extra turn.
  //        If already lost, skips turn.
  // Preconditions - None
  // Postconditions - The state of m_extraTurn
bool Player::HasExtraTurn(){
    return m_extraTurn;
}

  // Name - AddToHand()
  // Desc - Function to add a card to the players hand.
  //        This also detects if the player has drawn a bomb
  // Preconditions - A valid Card input
  // Postconditions - A integer status about the player in regards to the card
  //                  that was just added to his hand (see .cpp for more info)
int Player::AddToHand(Card){
    
}

  // Name - GetName()
  // Desc - Function to get the name of the player
  // Preconditions - None
  // Postconditions - Returns the name of the player
string Player::GetName(){
    return m_name;
}

  // Name - DisplayHand()
  // Desc - Function to print out the cards in the hand
  // Preconditions - None
  // Postconditions - Uses cout to print the player's hand
void Player::DisplayHand(){
    for (int i = 0; i < m_hand.size(); i++){
        cout << "Card " << i + 1 << ": " << m_hand[i] << endl;
    }
}

  // Name - GetNumberOfCards()
  // Desc - Returns the number of cards in the player's hand
  // Preconditions - None
  // Postconditions - Returns an integer number for the number of cards
  //                  in the player's hand
int Player::GetNumberOfCards(){
    return m_hand.size();
}

  // Name - ReturnBomb()
  // Desc - Returns the bomb card the player drew in the event of a defusal
  // Preconditions - A bomb in the player's hand
  // Postconditions - A card object that is the bomb the player drew
Card Player::ReturnBomb(){
    for (Card card : m_hand){
        if (card.GetType() == 0){
            return card;
        }
    }
    
} 

  // Name - SetLost() 
  // Desc - Sets if the player lost or not
  // Preconditions - a bool
  // Postconditions - m_lost is set to the input
void Player::SetLost(bool m_lost){
    this->m_lost = m_lost;
}

  // Name - SetExtraTurn()
  // Desc - Sets if the player was attacked or not
  // Preconditions - a bool
  // Postconditions - m_extraTurn is toggled
void Player::SetExtraTurn(bool m_extraTurn){
    this->m_extraTurn = m_extraTurn;
}