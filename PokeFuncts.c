#include "PokeHeader.h"

int getFileLines(char fileName[]){
    FILE* fp;
    int count = 0;
    fp = fopen(fileName, "r");
    if (fp == NULL) 
    { 
        printf("Could not open file %s", fileName); 
        return 0; 
    } 
    for (int c = getc(fp); c != EOF; c = getc(fp)){
        if (c == '\n'){
            count = count + 1; 
        }
    }
    fclose(fp);
    return count;
}

int loadTeams(char fileName[], int numLines, Pokemon allPokemon[]){
    FILE* fp;
    fp = fopen(fileName,"r");
    int count;
    if (fp == NULL) 
    { 
        printf("Could not open file %s", fileName); 
        return 0; 
    } 
    int c;
    for(int i = 0; i < numLines; i++){
        fscanf(fp, "%d,%s,%s,%s,%d,%d,%d,%d,%d,%d,%d\n", &allPokemon[i].index, allPokemon[i].name, allPokemon[i].typeOne, allPokemon[i].typeTwo, &allPokemon[i].statTotal, &allPokemon[i].HP, &allPokemon[i].ATTACK,&allPokemon[i].DEFENSE, &allPokemon[i].SATTACK, &allPokemon[i].SDEFENSE, &allPokemon[i].SPEED);
        count++;
    }
    fclose(fp);
    return count;
}


int getIndexFromType(char PokemonType[]){
    if (strcmp(PokemonType, "Normal") == 0){
        return 0;
    }
    else if (strcmp(PokemonType, "Fighting") == 0){
        return 1;
    }
    else if (strcmp(PokemonType, "Flying") == 0){
        return 2;
    }
    else if (strcmp(PokemonType, "Poison") == 0){
        return 3;
    }
    else if (strcmp(PokemonType, "Ground") == 0){
        return 4;
    }
    else if (strcmp(PokemonType, "Rock") == 0){
        return 5;
    }
    else if (strcmp(PokemonType, "Bug") == 0){
        return 6;
    }
    else if (strcmp(PokemonType, "Ghost") == 0){
        return 7;
    }
    else if (strcmp(PokemonType, "Steel") == 0){
        return 8;
    }
    else if (strcmp(PokemonType, "Fire") == 0){
        return 9;
    }
    else if (strcmp(PokemonType, "Water") == 0){
        return 10;
    }
    else if (strcmp(PokemonType, "Grass") == 0){
        return 11;
    }
    else if (strcmp(PokemonType, "Electric") == 0){
        return 12;
    }
    else if (strcmp(PokemonType, "Psychic") == 0){
        return 13;
    }
    else if (strcmp(PokemonType, "Ice") == 0){
        return 14;
    }
    else if (strcmp(PokemonType, "Dragon") == 0){
        return 15;
    }
    else if (strcmp(PokemonType, "Dark") == 0){
        return 16;
    }
    else if (strcmp(PokemonType, "Fairy") == 0){
        return 17;
    }
    else{
        return -1;
    }
}
