#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "fib.h"
#include "stats.h"
#include "dice.h"
#include "main.h"

int main(int argc, char** argv) {
	
	if (argc <= 1) {
		printf("Usage: %s <rolls>\n", argv[0]);
		return EXIT_FAILURE;
	}
	
	int diceAmount = atol(argv[1]);

	fibStrat(FACES, BASEBET, BALANCE, diceAmount);

	return EXIT_SUCCESS;
}
