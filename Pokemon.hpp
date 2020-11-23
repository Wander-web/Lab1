#pragma once

#include <string>

class Pokemon{

    public:
        int m_hp;
        int m_attack;
        int m_defense;
        int m_speed;
        std::string m_name;

        Pokemon();
        Pokemon(int l_hp, int l_attack, int l_defense, int l_speed);
        ~Pokemon();
        void print();
        std::string getPokemonName() { return m_name; }
        int getPokemonHp() { return m_hp; }
        int getPokemonAttack() { return m_attack; }
        int getPokemonDefense() { return m_defense; }
        int getPokemonSpeed() { return m_speed; }
};