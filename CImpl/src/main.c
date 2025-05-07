#include "tokenizer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(argc, const char* argv[])
{ 
	if (argc != 2) {
		fprintf(stderr, "Wrong syntax. Please type '%d help' for more help.\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	if (strcmp(argv[1], "help") == 0) 
		printf("Nothing here\n");
	else 
		TokenMap* tokens = tokenize(argv[1]);
	analyze_tokenmap(tokens);
	return 0;
}
	
	 
