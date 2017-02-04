#include "Pokemon.h"
#include <iostream>
Pokemon::Pokemon(PokemonData* initValue)
{
    info = new PokemonData(initValue->getID(),initValue->getName(),initValue->getMaxHP(),initValue->getInitiative(),initValue->getDamage(),initValue->getDefense(),initValue->attacks[0]->info->getID(),initValue->attacks[1]->info->getID(),initValue->attacks[2]->info->getID(),initValue->attacks[3]->info->getID());
    remainig_HP = info->getMaxHP() ;
}

Pokemon::~Pokemon(){
delete(info);

}

void Pokemon::PrintHP(){
    float step ;
    step = (remainig_HP*25) / (info->getMaxHP());
    //std::cout << step << std::endl ;
    for (int i = 0 ; i < step ; i++){
        std::cout << char(219);
    }
    std::cout << std::endl ;
}
