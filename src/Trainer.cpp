#include "Trainer.h"
#include "Pokedex.h"
#include <iostream>

Trainer::Trainer(int TrainerID)
{
    TrainerList* List = new TrainerList() ;
    std::vector<int> PokemonIDs = List->getPokemonOfTrainerByID(TrainerID) ;
    Name = List->getNameOfTrainerByID(TrainerID);    //std::cout << PokemonIDs.size() << std::endl ;

    for (int i = 0 ; i < PokemonIDs.size(); i++){
       team.push_back(new Pokemon(Pokedex::instance().getPokemonByID(PokemonIDs[i])))  ;
    }

}

Trainer::~Trainer()
{
    //dtor
}

void Trainer::PrintTeam(){
for (int i = 0 ; i < team.size();i++){
    std::cout << i+1 << ". " << team[i]->info->getName() << " HP: " << team[i]->GetRemainingHP() << "/" << team[i]->info->getMaxHP() <<std::endl ;
    team[i]->PrintHP() ;
}

}
