#include <iostream>
#include "AttackList.h"
#include "Attack.h"
#include "Pokemon.h"
#include "Trainer.h"
#include "Pokedex.h"
#include "Fight.h"
using namespace std;

int main()
{    //cout << Pokedex::instance().a << endl ;
  Trainer AceTrainer(1) ;
    AceTrainer.PrintTeam() ;

    Trainer Player(0) ;
    Player.PrintTeam() ;

    Fight testFight(&Player,&AceTrainer) ;
    AceTrainer.PrintTeam() ;
    Player.PrintTeam() ;

//    cout << sizeof(AceTrainer.team)/sizeof(AceTrainer.team[0])<< endl ;    //cout <<  AceTrainer.team[1]->info->getName() << endl;



   /*Pokemon Glumanda(Pokedex::instance().getPokemonByID(1)) ;
   cout << Glumanda.info->getName() << endl;
    Glumanda.PrintHP() ;
   for (int i = 0 ; i < 4 ; i++){
    cout << Glumanda.getAttacksByID(i)->getName() << endl ;
   }

   Glumanda.~Pokemon() ;*/
    return 0;
}
