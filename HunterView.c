// DracView.c ... DracView ADT implementation

#include <stdlib.h>
#include <assert.h>
#include "Globals.h"
#include "Game.h"
#include "GameView.h"
#include "HunterView.h"
#include "Map.h" 


//Rimmal
struct hunterView {
    
    Map gameMap;
    GameView gameView;
    Round currentRound;
    PlayerID currentPlayer;
    int Health[NUM_PLAYERS]; 
    int locationTrail[NUM_PLAYERS][TRAIL_SIZE];  
    LocationID hunterLocation;
    int currentScore;
    int currentRound;
    int currentTurn;

};


//Rimmal
// Creates a new HunterView to summarise the current state of the game
HunterView newHunterView(char *pastPlays, PlayerMessage messages[])
{
    //REPLACE THIS WITH YOUR OWN IMPLEMENTATION
    DracView dracView = malloc(sizeof(struct dracView));
    //dracView->hello = 42;
    return dracView;
}
     
//Rimmal
// Frees all memory previously allocated for the HunterView toBeDeleted
void disposeHunterView(HunterView toBeDeleted)
{
    //COMPLETE THIS IMPLEMENTATION
    free( toBeDeleted );
}


//// Functions to return simple information about the current state of the game
//Vivian
// Get the current round
Round giveMeTheRound(HunterView currentView)
{
    //REPLACE THIS WITH YOUR OWN IMPLEMENTATION
    return 0;
}
//Yukti
// Get the id of current player
PlayerID whoAmI(HunterView currentView)
{
    //REPLACE THIS WITH YOUR OWN IMPLEMENTATION
    return 0;
}

//Jessie
// Get the current score
int giveMeTheScore(HunterView currentView)
{
    //REPLACE THIS WITH YOUR OWN IMPLEMENTATION
    return 0;
}


//Jessie
// Get the current health points for a given player
int howHealthyIs(HunterView currentView, PlayerID player)
{
    //REPLACE THIS WITH YOUR OWN IMPLEMENTATION
    return 0;
}

//Yukti
// Get the current location id of a given player
LocationID whereIs(HunterView currentView, PlayerID player)
{
    //REPLACE THIS WITH YOUR OWN IMPLEMENTATION
    return 0;
}


//// Functions that return information about the history of the game

//Yukti
// Fills the trail array with the location ids of the last 6 turns
void giveMeTheTrail(HunterView currentView, PlayerID player,
                            LocationID trail[TRAIL_SIZE])
{
    //REPLACE THIS WITH YOUR OWN IMPLEMENTATION
}

//// Functions that query the map to find information about connectivity


//Vivian
// What are my (player's) possible next moves (locations)
LocationID *whereCanIgo(HunterView currentView, int *numLocations, int road, int sea)
{
    //REPLACE THIS WITH YOUR OWN IMPLEMENTATION
    return NULL;
}

//Vivian
// What are the specified player's next possible moves
LocationID *whereCanTheyGo(HunterView currentView, int *numLocations,
                           PlayerID player, int road, int rail, int sea)
{
    //REPLACE THIS WITH YOUR OWN IMPLEMENTATION
    return NULL;
}
