#include "Pokemon.hpp"
#include <iostream>

Pokemon::Pokemon(){

}

Pokemon::Pokemon(int l_hp, int l_attack, int l_defense, int l_speed){
    m_hp = l_hp;
    m_attack = l_attack;
    m_defense = l_defense;
    m_speed = l_speed;
}

Pokemon::~Pokemon(){

}

void Pokemon::print(){
    std::cout << "HP: " << m_hp << std::endl << "ATTACK: " << m_attack << std::endl << "DEFENSE: " << m_defense << std::endl << "SPEED: " << m_speed << std::endl;
}