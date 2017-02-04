#ifndef POKEDEX_H
#define POKEDEX_H
#include "PokemonData.h"
#include <vector>
class Pokedex
{
    public:
        static Pokedex& instance(){
        static Pokedex _instance ;
        return _instance ;
        }
        PokemonData* getPokemonByID(int ID) ;
        //PokemonData* getPokemonByName(std::string Name) ;
        int a ;
    protected:
        std::vector<PokemonData> liste ;
        //PokemonData liste[3]={{1,"Glumanda",20,20,20,20,1,2,3,4},{2,"Glutexo",20,20,20,20,1,2,3,4},{3,"Glurak",20,20,20,20,1,2,3,4}};
    private:
        Pokedex() ;
//        AttackList{const AttackList&} ;
        Pokedex& operator = (const Pokedex &) ;
};

#endif // POKEDEX_H
