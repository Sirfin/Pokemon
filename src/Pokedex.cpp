#include "Pokedex.h"
#include <iostream>
Pokedex::Pokedex()
{
   //std::cout << "Konstruktor aufgerufen" << std::endl ;
   liste.push_back(PokemonData(1,"Glumanda",200,10,20,10,1,2,3,4)) ;
   liste.push_back(PokemonData(2,"Schiggy",200,10,20,10,1,2,3,4)) ;
   liste.push_back(PokemonData(3,"Bisasam",200,10,20,10,1,2,3,4)) ;
}
PokemonData* Pokedex::getPokemonByID(int ID){
for (int i = 0 ; i < liste.size();i++){
    if (liste[i].getID() == ID) return &liste[i] ;
}
return &liste[1];


}
