#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>


//Tribute Function
int main(int argc, char **argv){

  //set kingdom cards array
  int j[10]={remodel, smithy, village, baron,  great_hall, adventurer, council_room, feast, gardens, mine};
  int i; //for loop Iterator
  struct gameState *G; //initalize gamestate
  initializeGame(3, j, 3, &G); //create game
  int tributeRevealedCards[2] = {-1, -1}; //create tribute revealed cards variable

  G.coins=5; //need enough coins to play card
  G->hand[0][0]=tribute; //guves the currentPlayer a tribute card
  printf("Testing tribute function\n");
  tribute(&G, 0, 1, tributeRevealedCards); //call function

  while(g->hand[0][i]!=NULL){

    assert(g->hand[0][i]!=tribute); //checks to make sure card is deleted.
    i++; //iterate to next card
  }
  printf("Tribute card was deleted\n"); //successful test
  return 0;
}
