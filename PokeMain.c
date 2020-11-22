#include "PokeHeader.h"

int main(){
    printf("%d\n", counterList[getIndexFromType("Fire")][getIndexFromType("Fairy")]);

    printf("%d\n", getFileLines("Pokemon.csv"));

    int numLines = getFileLines("Pokemon.csv");

    Pokemon* Pokedex;
    Pokedex = (Pokemon*) malloc(numLines*sizeof(Pokemon));

    int check = loadTeams("Pokemon.csv", numLines, Pokedex);

    printf("%d\n", check);

    printf("%s", Pokedex[1].name);

    system("pause");
    return 0;
}