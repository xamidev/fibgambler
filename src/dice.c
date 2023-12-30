#include <stdio.h>
#include <stdlib.h>

int rollDice(int faces) {
	int dice = 1 + rand() % faces;
	return dice;	
}

/* unused function
void rollDices(int faces, int amount) {
	srand(time(NULL));
	for (int i=0; i<amount; i++) {
		int n = rollDice(faces);
		printf("rolled %d\n", n);
	}
}
*/
