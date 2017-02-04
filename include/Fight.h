#ifndef FIGHT_H
#define FIGHT_H
#include "Trainer.h"
class Fight
{
    public:
        Fight(Trainer* Player,Trainer* EnemyTrainer);
        ~Fight();
    protected:
        void MainFightLoop() ;
        Trainer* _player ;
        Trainer* _enemyTrainer ;
        Pokemon* currentPokemonPlayer ;
        Pokemon* currentPokemonEnemy ;
        bool Win ;
    private:
        bool checkIfTrainerCanFight(Trainer* trainerToCheck) ;
        void PrintFight() ;
        void AttackPokemonWithAttack(Pokemon* ToAttack , Attack* attack) ;
        Pokemon* SwitchUpPokemon(bool PlayerChoose) ;
};

#endif // FIGHT_H
