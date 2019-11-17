#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <time.h>

//minion test

int int main(int argc, char const *argv[]) {
  int i, x;
  int j[10]={remodel, smithy, village, baron,  great_hall, adventurer, council_room, feast, gardens, mine};

  printf("Testing Minion Function\n");
  printf("Random Tests Starting\n");


  clock_t tic = clock(); //time the program starts

  for(i=0; i<2000; i+++){
    struct gameState *G=newGame();
    initializeGame(4, k, 1, &G);
    srand((unsigned) time(&t));
    int currentPlayer=rand() 3 + 0;
    int choice1=rand() % 1 + 0;
    int choice2;
    if(choice1==0){
      choice2=1;
    }
    else{
      choice2=0;
    }
    gainCard(minion, &G, 2, currentPlayer);
    for(x=0; x<4; x++){
      if(G->hand[currentPlayer][x]==minion){
        int handPos==x;
      }

    }
    minion(&G, choice1, choice2, currentPlayer, handPos);

  }

  clock_t toc = clock(); //time the program ends
  printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC); //total time the program has taken
  printf("Random Tests Ending\n");

  return 0;
}
