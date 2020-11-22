#ifndef POKEFUNCTS_H
#define POKEFUNCTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static int counterList[18][18] = {
    {1,1,1,1,1,-1,1,0,-1,1,1,1,1,1,1,1,1,1},
    {2,1,-1,-1,1,2,-1,0,2,1,1,1,1,-1,2,1,2,-1},
    {1,2,1,1,1,-1,2,1,-1,1,1,2,-1,1,1,1,1,1},
    {1,1,1,-1,-1,-1,1,-1,0,1,1,2,1,1,1,1,1,2},
    {1,1,0,2,1,2,-1,1,2,2,1,-1,2,1,1,1,1,1},
    {1,-1,2,1,-1,1,2,1,-1,2,1,1,1,1,2,1,1,1},
    {1,-1,-1,-1,1,1,1,-1,-1,-1,1,2,1,2,1,1,2,-1},
    {0,1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,-1,1},
    {1,1,1,1,1,2,1,1,-1,-1,-1,1,-1,1,2,1,1,2},
    {1,1,1,1,1,-1,2,1,2,-1,-1,2,1,1,2,-1,1,1},
    {1,1,1,1,2,2,1,1,1,2,-1,-1,1,1,1,-2,1,1},
    {1,1,-1,-1,2,2,-1,1,-1,-1,2,-1,1,1,1,-1,1,1},
    {1,1,2,1,0,1,1,1,1,1,2,-1,-1,1,1,-1,1,1},
    {1,2,1,2,1,1,1,1,-1,1,1,1,1,-1,1,1,0,1},
    {1,1,2,1,2,1,1,1,-1,-1,-1,2,1,1,-1,2,1,1},
    {1,1,1,1,1,1,1,1,-1,1,1,1,1,1,1,2,1,0},
    {1,-1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,-1,-1},
    {1,2,1,-1,1,1,1,1,-1,-1,1,1,1,1,1,2,2,1}
};

typedef struct Poke{
    int index;
    char name[20];
    char typeOne[10];
    char typeTwo[10];
    int statTotal;
    int HP;
    int ATTACK;
    int DEFENSE;
    int SATTACK;
    int SDEFENSE;
    int SPEED;
}Pokemon;

int getFileLines(char fileName[]);
int loadTeams(char fileName[], int numLines, Pokemon allPokemon[]);
int getIndexFromType(char PokemonType[]);



#endif //POKEFUNCTS_H