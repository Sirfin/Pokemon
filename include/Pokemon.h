#ifndef POKEMON_H
#define POKEMON_H
#include "Attack.h"
#include "PokemonData.h"
#include "AttackList.h"
class Pokemon
{
    public:
        Pokemon(PokemonData* initValue) ;
        PokemonData* info ;

        ~Pokemon() ;
    protected:
    private:

};

#endif // POKEMON_H
