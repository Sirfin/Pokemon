#ifndef TRAINER_H
#define TRAINER_H
#include "Pokemon.h"
#include "TrainerList.h"
#include <vector>
class Trainer
{
    public:
        Trainer(int TrainerID);
        ~Trainer();
        void PrintTeam() ;
        Pokemon* getPokemon(int numberInTeam){
        return team[numberInTeam] ;
        }
        int getSizeOfTeam(){
        return team.size() ;
        }
        std::string getName() {
        return Name ;
        }
    protected:
                std::string Name ;
                std::vector <Pokemon*> team ;

    private:
};

#endif // TRAINER_H
