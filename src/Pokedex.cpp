#include "Pokedex.h"

Pokedex::Pokedex()
{
    //ctor
}
PokemonData* Pokedex::getPokemonByID(int ID){
for (int i = 0 ; i < sizeof(liste)/sizeof(liste[1]);i++){
    if (liste[i].getID() == ID) return &liste[i] ;
}
return &liste[1];


}
