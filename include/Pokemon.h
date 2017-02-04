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
        Attack* getAttacksByID(int ID) {
            return info->attacks[ID] ;

        }
        int GetRemainingHP(){
        return remainig_HP ;
        }
        void TakeDamage(int damage){

        remainig_HP-= damage ;
        if (remainig_HP < 0 ) remainig_HP = 0 ;
        }

        void PrintHP () ;

    protected:
        int remainig_HP ;
    private:

};

#endif // POKEMON_H
