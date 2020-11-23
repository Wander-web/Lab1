#include "Water.hpp"
#include <iostream>

void Water::print_water(){
    
    std::cout << "NAME: " << m_name << std::endl << "TYPE: " << m_type << std::endl << "HP: " << m_hp << std::endl << "ATTACK: " << m_attack << std::endl << "DEFENSE: " << m_defense << std::endl << "SPEED: " << m_speed << std::endl << "SPECIAL ATTACK: " << m_special_attack << std::endl << "SPECIAL DEFENSE: " << m_special_defense << std::endl;
}