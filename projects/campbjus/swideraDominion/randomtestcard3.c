#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <time.h>

//tribute test

int int main(int argc, char const *argv[]) {
  int i;
  int j[10]={remodel, smithy, village, baron,  great_hall, adventurer, council_room, feast, gardens, mine};
  struct gameState *G=newGame();
  initializeGame(2, k, 1, &G); //create game

  printf("Testing Tribute Function\n");
  printf("Random Tests Starting\n");


  clock_t tic = clock(); //time the program starts
  for(i=0; i<2000; i++){
    struct gameState *G=newGame();
    initializeGame(4, k, 1, &G);
    srand((unsigned) time(&t));
    int currentPlayer=rand() 2 + 0;
    int nextPlayer=currentPlayer + 1;
    int tributeRevealedCards[2] = {-1, -1};
    gainCard(tribute, &G, 2, currentPlayer);
    tribute(&G, currentPlayer, nextPlayer, tributeRevealedCards);

  }

  clock_t toc = clock(); //time the program ends
  printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC); //total time the program has taken
  printf("Random Tests Ending\n");

  return 0;
}
