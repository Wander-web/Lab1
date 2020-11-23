#include <iostream>
#include <fstream>
#include "Pokemon.hpp"
#include "Fire.hpp"
#include "Water.hpp"
#include "Posion.hpp"

int main(){
    std::string name, type, spicial_attack, special_defense;
    int hp, attack, defense, speed;
    Fire Pikka("Pikka", 255, 35, 27, 18, "Arckan", "Sheild");
    //Pikka.print_fire();
    Water Bulb("Bulbozavr", 245, 33, 25, 18, "Water attack", "Water defense");
    //Bulb.print_water();
    Posion Ivi("Ivizavr", 250,36, 28, 20, "Posion attack", "Posion defense");
    //Ivi.print_pos();

    std::ofstream test;
    test.open("test.yaml");

    if(!test.is_open()){
        std:: cout << "Error open file" << std::endl;
    }
    else{
        test << "---" << std::endl;
        test << "pokemons: " << std::endl;
        test << "-Fire: " << std::endl;
        test << "  name: " << Pikka.getPokemonName() << std::endl;
        test << "  hp: " << Pikka.getPokemonHp() << std::endl;
        test << "  attack: " << Pikka.getPokemonAttack() << std::endl;
        test << "  defense: " << Pikka.getPokemonDefense() << std::endl;
        test << "  speed: " << Pikka.getPokemonSpeed() << std::endl;
        test << "  special attack: " << Pikka.getPokemonSpecialAttack() << std::endl;
        test << "  special defense: " << Pikka.getPokemonSpecialDefense() << std::endl;
        test << "-Water: " << std::endl;
        test << "  name: " << Bulb.getPokemonName() << std::endl;
        test << "  hp: " << Bulb.getPokemonHp() << std::endl;
        test << "  attack: " << Bulb.getPokemonAttack() << std::endl;
        test << "  defense: " << Bulb.getPokemonDefense() << std::endl;
        test << "  speed: " << Bulb.getPokemonSpeed() << std::endl;
        test << "  special attack: " << Bulb.getPokemonSpecialAttack() << std::endl;
        test << "  special defense: " << Bulb.getPokemonSpecialDefense() << std::endl;
        test << "-Posion: " << std::endl;
        test << "  name: " << Ivi.getPokemonName() << std::endl;
        test << "  hp: " << Ivi.getPokemonHp() << std::endl;
        test << "  attack: " << Ivi.getPokemonAttack() << std::endl;
        test << "  defense: " << Ivi.getPokemonDefense() << std::endl;
        test << "  speed: " << Ivi.getPokemonSpeed() << std::endl;
        test << "  special attack: " << Ivi.getPokemonSpecialAttack() << std::endl;
        test << "  special defense: " << Ivi.getPokemonSpecialDefense() << std::endl;
        test << "..." << std::endl;
    }

    
    test.close();
    return 0;
}