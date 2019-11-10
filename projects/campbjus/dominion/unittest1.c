#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>


// Baron Function
int main(int argc, char **argv){

  //checks to make sure the funciton deletes the currentPlayers baron card after the funciton is executed

  //set kingdom cards array
  int j[10]={remodel, smithy, village, baron,  great_hall, adventurer, council_room, feast, gardens, mine};
  int i; //for loop variable
  G.coins=5; //need enough coins to play card
  struct gameState *G; //initialize gamestate
  initializeGame(3, j, 3, &G); //create game

  g->hand[0][0]=baron; //gives the current player a baron card
  g->hand[0][1]=estate; //gives the current player an estate card to discard

  printf("Testing the Baron function\n");
  baron(&G, 1, 0); //calls baron funciton

  while(g->hand[0][i]!=NULL){

    assert(g->hand[0][i]!=baron); //checks to make sure card is deleted.
    i++; //iterate to next card
  }

  printf("Baron card was deleted\n"); //successful test

  assert(G->numBuys==2); //makes sure numBuys was incremented


  return 0;
}
