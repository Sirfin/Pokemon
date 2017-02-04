#include "Pokemon.h"

Pokemon::Pokemon(PokemonData* initValue)
{
    info = new PokemonData(initValue->getID(),initValue->getName(),initValue->getMaxHP(),initValue->getInitiative(),initValue->getDamage(),initValue->getDefense(),initValue->attacks[0]->info->getID(),initValue->attacks[1]->info->getID(),initValue->attacks[2]->info->getID(),initValue->attacks[3]->info->getID());
    remainig_HP = info->getMaxHP() ;
}

Pokemon::~Pokemon(){
delete(info);

}
