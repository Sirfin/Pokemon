#ifndef POKEMONDATA_H
#define POKEMONDATA_H
#include <string>
#include "Attack.h"

class PokemonData
{
    public:
        PokemonData(int _id,std::string _name,int _maxHP,int _initiative,int _damage,int _defense,int _attack1,int _attack2,int _attack3, int _attack4);
        int getMaxHP(){return MaxHP;};
        int getInitiative(){return Initiative;};
        int getDamage(){return Damage;};
        int getDefense(){return Defense;};
        int getID(){return ID; };
        std::string getName(){return Name;};
        Attack* attacks[4] ;
    protected:
    private:
        int ID ;
        int MaxHP ;
        int Initiative ;
        int Damage ;
        int Defense ;
        std::string Name;


};

#endif // POKEMONDATA_H
