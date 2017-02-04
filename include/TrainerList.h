#ifndef TRAINERLIST_H
#define TRAINERLIST_H
#include <map>
#include <vector>
#include <string>
class TrainerList
{
    public:
        TrainerList();
        virtual ~TrainerList();
        std::vector<int> getPokemonOfTrainerByID(int ID) ;
       // int getGroesseDB(return groesse_DB ; );
        std::string getNameOfTrainerByID(int ID){
        return TrainerNameDB[ID] ;
        }
    protected:
        std::map<int,std::vector<int> > TrainerPokemonDB ;
        std::map<int,std::string> TrainerNameDB ;
        //int** TrainerDB ;
        int groesse_DB ;
        int* size_Of_Pokemon_Team ;
    private:
};

#endif // TRAINERLIST_H
