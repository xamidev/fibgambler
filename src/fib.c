#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "dice.h"
#include "main.h"

void fibStrat(int faces, float bet, float balance, int amount) {

	srand(time(NULL));
	for (int i=0; i<amount; i++) {
		int dice = rollDice(faces);
		
		if (dice == WINFACE) {
			balance += bet;
			bet = BASEBET;
			printf("win!\n");
		}
		else {
			balance -= bet;
			bet = bet*2;
			printf("lose.\n");
		}

		if (balance <= 0) {
			printf("Bankrupt after %d rolls! Balance: %f\n", i+1, balance);
			exit(1);
		}
	}

	printf("\nFinal balance: %f\n", balance);
}
