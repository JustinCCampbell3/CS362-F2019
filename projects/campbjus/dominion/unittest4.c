#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>


//ambassador Function
int main(int argc, char **argv){

  //set kingdom cards array
  int j[10]={remodel, smithy, village, baron,  great_hall, adventurer, council_room, feast, gardens, mine};
  int i; //for loop Iterator
  struct gameState *G; //initalize gamestate
  initializeGame(3, j, 3, &G); //create game

  G->hand[0][0]=ambassador;//gives currentPlayer an ambassador cardDrawn

  i=ambassador(&G, 1, 2, 0);

  assert(i!=-1); //asserts that if statement does not incorrectly return -1
  assert(G->hand[0][0]!=ambassador); //makes sure ambassador card was discarded


  return 0;
}
