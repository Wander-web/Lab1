#pragma once
#include "Pokemon.hpp"
#include <iostream>

class Posion: public Pokemon{
    private:
        std::string m_special_attack;
        std::string m_special_defense;
        
        std::string m_type = "Posion";

    public:
        Posion(std::string l_name, int l_hp, int l_attack, int l_defense, int l_speed, std::string l_special_attack, std::string l_special_defense){
            m_name = l_name;
            m_hp = l_hp;
            m_attack = l_attack;
            m_defense = l_defense;
            m_speed = l_speed;
            m_special_attack = l_special_attack;
            m_special_defense = l_special_defense;
        }

        void print_pos();
        
        std::string getPokemonType() { return m_type; }
        std::string getPokemonSpecialAttack() { return m_special_attack; }
        std::string getPokemonSpecialDefense() { return m_special_defense; }

};