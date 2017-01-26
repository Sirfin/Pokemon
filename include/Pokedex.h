#ifndef POKEDEX_H
#define POKEDEX_H
#include "PokemonData.h"

class Pokedex
{
    public:
        static Pokedex& instance(){
        static Pokedex _instance ;
        return _instance ;
        }
        PokemonData* getPokemonByID(int ID) ;
        //PokemonData* getPokemonByName(std::string Name) ;

    protected:
       PokemonData liste[1]={{1,"Glumanda",20,20,20,20,1,2,3,4}};
    private:
        Pokedex() ;
//        AttackList{const AttackList&} ;
        Pokedex& operator = (const Pokedex &) ;
};

#endif // POKEDEX_H
