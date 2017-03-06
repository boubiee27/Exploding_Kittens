#include "Card.h"

Card::Card(int m_type, string m_desc){
    this->m_type = m_type;
    this->m_desc = m_desc;
    
}

int Card::GetType(){
    return m_type;
}

string Card::ToString(){
    return "Card Number " +m_type+ "\nCard Description " +m_desc;
}