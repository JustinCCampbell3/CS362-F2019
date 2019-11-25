#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <time.h>



int int main(int argc, char const *argv[]){
  int i, k;
  int j[10]={remodel, smithy, village, baron,  great_hall, adventurer, council_room, feast, gardens, mine};

  printf("Testing Baron Function\n");
  printf("Random Tests Starting\n");
  clock_t tic = clock();


  for(i=0; i<2000; i++){
    struct gameState *G=newGame();
    int coin_bonus=0;
    initializeGame(4, k, 1, &G);
    srand((unsigned) time(&t));
    k=rand() % 1 + 0;
    int currentPlayer=rand() 3 + 0;
    gainCard(baron, &G, 2, currentPlayer);
    //baron(&G, k, currentPlayer);
    playBaron(G->hand[0][0], 1, 0, 0, &G, 0, coin_bonus);
  }

  clock_t toc = clock();

  printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
  printf("Random Tests Ending\n");
  return 0;
}
