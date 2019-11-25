#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>


//Mine Function
int main(int argc, char **argv){

  //set kingdom cards array
  int j[10]={remodel, smithy, village, baron,  great_hall, adventurer, council_room, feast, gardens, mine};
  int i;
  struct gameState *G; //initalize gamestate
  initializeGame(3, j, 3, &G); //create game
  int coin_bonus=0; //new variable

  G->hand[0][0]=copper;

  printf("Testing mine funciton\n", );
  i=playMine(G->hand[0][0], 0, silver, 0, &G, 0, coin_bonus); //calls mine function

  assert(G->hand[0][0]!=copper); //asserts card was discarded
  assert(G->hand[0][0]==silver); //asserts card was added
  assert(i!=-1); //asserts function did not incorrectly trigger one of the first three if statements
  assert(G->handCount==5); //asserts handcount did not change

  printf("Funciton Passed\n", );
  return 0;
}
