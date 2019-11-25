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
  int coin_bonus=0; //new variable

  G->hand[0][0]=ambassador;//gives currentPlayer an ambassador cardDrawn

  i=playAmbassador(G->hand[0][0], 3, 4, 0, &G, 0, coin_bonus);

  assert(i!=-1); //asserts that if statement does not incorrectly return -1
  assert(G->hand[0][0]!=ambassador); //makes sure ambassador card was discarded

  G->hand[0][0]=ambassador;//gives currentPlayer an ambassador cardDrawn
  i=ambassador(&G, 1, 5, 0);
  assert(i!=-1); //assert will fail becasue choice2 is not between 0 and 2


  return 0;
}
