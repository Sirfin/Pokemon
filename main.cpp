#include <iostream>
#include "AttackList.h"
#include "Attack.h"
using namespace std;

int main()
{
   Attack testAttack(Attack(AttackList::instance().getAttackValuesByName("ember"))) ;
   cout << testAttack.info->getName() << endl;
    return 0;
}
