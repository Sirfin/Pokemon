#ifndef ATTACKDATA_H
#define ATTACKDATA_H
#include <string>

class AttackData
{
    public:
        AttackData(int ID,int AD,int AP,std::string Name);
        int getAttackPower() {return attack_Power;};
        std::string getName(){return attack_Name;} ;
        int getID(){return ID;} ;
        int getMaxAttackPoints(){return max_Attack_Points;} ;

    protected:

    private:
        int ID ;
         std::string attack_Name ;
        int attack_Power ;
        int max_Attack_Points ;

};

#endif // ATTACKDATA_H
