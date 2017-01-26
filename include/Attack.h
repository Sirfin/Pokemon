#ifndef ATTACK_H
#define ATTACK_H
#include <AttackData.h>

class Attack
{
    public:
        Attack(AttackData* ToInitiliaze);
        AttackData* info ;
        ~Attack() ;
    protected:
        int remaining_Attack_Points ;
    private:
};

#endif // ATTACK_H
