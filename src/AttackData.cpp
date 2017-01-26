#include "AttackData.h"

AttackData::AttackData(int ID,int AD,int AP,std::string Name)
{
    this->ID = ID ;
    this->attack_Power = AD ;
    this->max_Attack_Points= AP ;
    this->attack_Name = Name ;
}
