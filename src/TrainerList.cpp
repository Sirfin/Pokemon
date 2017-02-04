#include "TrainerList.h"
#include <time.h>
TrainerList::TrainerList()
{//noch aus Datei einlesen


    TrainerPokemonDB[0].push_back(2) ;
    TrainerPokemonDB[0].push_back(3) ;
    TrainerPokemonDB[1].push_back(1) ;
    TrainerPokemonDB[1].push_back(1) ;
    groesse_DB = 2 ;
    TrainerNameDB[0] = "Player" ;
    TrainerNameDB[1] = "Ace Trainer Ashe" ;

}

TrainerList::~TrainerList()
{
    //delete[]TrainerDB ;
}

std::vector<int> TrainerList::getPokemonOfTrainerByID(int ID){
    return TrainerPokemonDB[ID] ;
}
