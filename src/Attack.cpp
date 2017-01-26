#include "Attack.h"

Attack::Attack(AttackData* ToInitiliaze)
{
    info = new AttackData(ToInitiliaze->getID(),ToInitiliaze->getAttackPower(),ToInitiliaze->getMaxAttackPoints(),ToInitiliaze->getName()) ;
}
Attack::~Attack(){
delete(info) ;
}
