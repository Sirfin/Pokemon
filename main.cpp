#include <iostream>
#include "AttackList.h"
#include "Attack.h"
#include "Pokemon.h"
#include "Pokedex.h"
using namespace std;

int main()
{

   Pokemon Glumanda(Pokedex::instance().getPokemonByID(1)) ;
   cout << Glumanda.info->getName() << endl;

   for (int i = 0 ; i < 4 ; i++){
    cout << Glumanda.info->attacks[i]->info->getName() << endl ;
   }
    return 0;
}
