#include "PokemonData.h"
#include "AttackList.h"
PokemonData::PokemonData(int _id ,std::string _name,int _maxHP,int _initiative,int _damage,int _defense,int _attack1,int _attack2,int _attack3, int _attack4)
{
    this->ID = _id ;
    this->Name = _name ;
    this->MaxHP = _maxHP ;
    this->Initiative = _initiative ;
    this->Damage = _damage ;
    this->Defense = _defense ;
    this->attacks[0] = new Attack(AttackList::instance().getAttackValuesByID(_attack1));
    this->attacks[1] = new Attack(AttackList::instance().getAttackValuesByID(_attack2));
    this->attacks[2] = new Attack(AttackList::instance().getAttackValuesByID(_attack3));
    this->attacks[3] = new Attack(AttackList::instance().getAttackValuesByID(_attack4));
}
