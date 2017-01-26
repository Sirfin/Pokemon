#include "AttackList.h"
#include <algorithm>


AttackData* AttackList::getAttackValuesByID(int ID){

    for (int i = 0 ; i < sizeof(attacks)/sizeof(attacks[1]);i++){
        if (attacks[i].getID() == ID ) return &attacks[i] ;
    }
    return &attacks[1] ;
}

AttackData* AttackList::getAttackValuesByName(std::string Name){
    for (int i = 0 ; i < sizeof(attacks)/sizeof(attacks[1]);i++){
        std::string list_Element_Name = attacks[i].getName() ;
        std::transform(list_Element_Name.begin(),list_Element_Name.end(),list_Element_Name.begin(),::tolower);
        std::transform(Name.begin(),Name.end(),Name.begin(),::tolower);
        if (list_Element_Name == Name) return &attacks[i] ;
    }
    return &attacks[1] ;

 }
