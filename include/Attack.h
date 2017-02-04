#ifndef ATTACK_H
#define ATTACK_H
#include <AttackData.h>
#include <string>
class Attack
{
    public:
        Attack(AttackData* ToInitiliaze);
        AttackData* info ;
        ~Attack() ;
        int getRemainingAP(){return remaining_Attack_Points;};
        std::string getName(){return info->getName();};
    protected:
        int remaining_Attack_Points ;
    private:
};

#endif // ATTACK_H
