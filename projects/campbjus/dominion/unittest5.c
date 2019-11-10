#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>


//Minion Function
int main(int argc, char **argv){

  //set kingdom cards array
  int j[10]={remodel, smithy, village, baron,  great_hall, adventurer, council_room, feast, gardens, mine};
  int i; //for loop Iterator
  struct gameState *G; //initalize gamestate
  initializeGame(3, j, 3, &G); //create game

  i=G->coins;

  minion(&G, 1, 0, 0, 0);

  assert(G->coins==i+2); //asserts coins were given to the user.

  return 0;
}
