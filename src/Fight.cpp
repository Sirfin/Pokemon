#include "Fight.h"
#include <stdlib.h>
#include <iostream> ;
Fight::Fight(Trainer* Player,Trainer* EnemyTrainer)
{
    this->_enemyTrainer = EnemyTrainer ;
    this->_player = Player ;
    this->currentPokemonEnemy = _enemyTrainer->getPokemon(0) ;
    this->currentPokemonPlayer = _player->getPokemon(0) ;
    MainFightLoop() ;
}

Fight::~Fight()
{
    this->_enemyTrainer = NULL ;
    this->_player = NULL ;
}

void Fight::MainFightLoop(){
    int Auswahl = -1  ;
    char Skipper ;




    do{
        while (Auswahl < 1 || Auswahl > 4 ) {
            system("cls") ;
            PrintFight(true) ;
            std::cout << std::endl ;
            std::cout << "Eine Attacke auswählen (1-4)"  << std::endl ;
            std::cin >> Auswahl ;
        }
        if (currentPokemonEnemy->info->getInitiative() > currentPokemonPlayer->info->getInitiative()){
            AttackPokemonWithAttack(currentPokemonPlayer,currentPokemonEnemy->getAttacksByID(1)) ;

            if (currentPokemonPlayer->GetRemainingHP() > 0){

                AttackPokemonWithAttack(currentPokemonEnemy,currentPokemonPlayer->getAttacksByID(Auswahl-1)) ;
            }
        }else{
            AttackPokemonWithAttack(currentPokemonEnemy,currentPokemonPlayer->getAttacksByID(Auswahl-1)) ;
            if (currentPokemonEnemy->GetRemainingHP() > 0){
                AttackPokemonWithAttack(currentPokemonPlayer,currentPokemonEnemy->getAttacksByID(1)) ;
            }
        }

        if (currentPokemonPlayer->GetRemainingHP() < 1) {
            currentPokemonPlayer = SwitchUpPokemon(true) ;
            if (currentPokemonPlayer != NULL){
            std::cout << currentPokemonPlayer->info->getName() << " wird von " << _player->getName() << " in den Kampf geschickt" << std::endl ;
            WaitForEnter();
            }
        }
        if (currentPokemonEnemy->GetRemainingHP() < 1) {
            currentPokemonEnemy = SwitchUpPokemon(false) ;
            if (currentPokemonEnemy != NULL){
            std::cout << currentPokemonEnemy->info->getName() << " wird von " << _enemyTrainer->getName() << " in den Kampf geschickt" << std::endl ;
            WaitForEnter();
            }
        }


        if (!checkIfTrainerCanFight(_player)){
                Win = false ;
                std::cout << "Es gewinnt der Spieler" << std::endl ;
                WaitForEnter();
                //return ;
        }
        if (!checkIfTrainerCanFight(_enemyTrainer)){
            Win = true ;
            std::cout << "Es gewinnt der Gegner" << std::endl ;
            WaitForEnter();
            //return ;
        }
        PrintFight(false) ;


        Auswahl = 0 ;
    }while(checkIfTrainerCanFight(_player) && checkIfTrainerCanFight(_enemyTrainer)) ;
    std::cout << "Kampf beendet" << std::endl;
}

void Fight::WaitForEnter(){
std::cin.clear() ;
        std::cin.ignore(INT_MAX,'\n');
        while (std::cin.get() != '\n'){
        }}


Pokemon* Fight::SwitchUpPokemon(bool PlayerChoose){
if (PlayerChoose){
    int Auswahl ;
    std::cout << "Waehle ein Pokemon zum Wechseln aus:" << std::endl ;
    for (int i = 0 ; i < _player->getSizeOfTeam();i++){
        std::cout << i+1 << _player->getPokemon(i)->info->getName() << " " << _player->getPokemon(i)->GetRemainingHP() << "/" << _player->getPokemon(i)->info->getMaxHP() << std::endl ;
    }
    do {
        std::cin >> Auswahl ;
        Auswahl-- ;
        if (_player->getPokemon(Auswahl)->GetRemainingHP()<1){
            std::cout << "Bitte ein lebendiges Pokemon auswählen" << std::endl ;
        }
    }while(_player->getPokemon(Auswahl)->GetRemainingHP()<1) ;

    return _player->getPokemon(Auswahl) ;
}
else {
    for (int i = 0 ; i < _enemyTrainer->getSizeOfTeam();i++){
        if (_enemyTrainer->getPokemon(i)->GetRemainingHP()> 0) {
            return _enemyTrainer->getPokemon(i) ;
        }
    }
    return NULL ;
}

}

void Fight::AttackPokemonWithAttack(Pokemon* ToAttack ,Attack* attack){
     ToAttack->TakeDamage(attack->info->getAttackPower()) ;
     std::cout << ToAttack->info->getName() << " erlitt " << attack->info->getAttackPower() << " Schaden durch " << attack->info->getName() << std::endl ;
     WaitForEnter();
     PrintFight(false) ;
}


void Fight::PrintFight(bool withAttacks){
    system("cls") ;
if (currentPokemonEnemy != NULL){
std::cout <<  currentPokemonEnemy->info->getName() << ": " ;
std::cout << currentPokemonEnemy->GetRemainingHP() << "/" << currentPokemonEnemy->info->getMaxHP() << std::endl ;
currentPokemonEnemy->PrintHP() ;
}else{
std::cout << "No more Pokemon" << std::endl ;
}
std::cout << std::endl ;
if (currentPokemonPlayer != NULL){
    std::cout << currentPokemonPlayer->info->getName() << std::endl;
    std::cout << currentPokemonPlayer->GetRemainingHP() << "/" << currentPokemonPlayer->info->getMaxHP() << std::endl ;
    currentPokemonPlayer->PrintHP() ;
    std::cout << std::endl ;
    if (withAttacks){
    std::cout << "Available Attacks : " << std::endl ;

    for (int i = 0 ; i < 4 ; i++){
        std:: cout << i+1 << ": " << currentPokemonPlayer->getAttacksByID(i)->getName()  << std::endl ;
    }
    }
}
else {
    std::cout << "No more Pokemon" << std::endl ;
}


}



bool Fight::checkIfTrainerCanFight(Trainer* trainerToCheck){
    for (int i = 0 ; i < trainerToCheck->getSizeOfTeam() ; i++){
        if (trainerToCheck->getPokemon(i)->GetRemainingHP() > 0) {std::cout << trainerToCheck->getName() << " can fight" << std::endl ; return true ;}
    }
    std::cout << trainerToCheck->getName() << " cannot fight" << std::endl ;
    return false ;

}


