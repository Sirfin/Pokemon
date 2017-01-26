#ifndef ATTACKLIST_H
#define ATTACKLIST_H
#include "AttackData.h"
#include <string>
class AttackList
{
    public:
        static AttackList& instance(){
        static AttackList _instance ;
        return _instance ;
        }
        AttackData* getAttackValuesByID(int ID) ;
        AttackData* getAttackValuesByName(std::string Name) ;

    protected:
            AttackData attacks[4]={{1,40,20,"Ember"},{2,40,20,"Razorleafs"},{3,40,20,"Watergun"},{4,200,5,"Hyperbeam"}};
    private:
        AttackList() {} ;
//        AttackList{const AttackList&} ;
        AttackList& operator = (const AttackList &) ;
};

#endif // ATTACKLIST_H
