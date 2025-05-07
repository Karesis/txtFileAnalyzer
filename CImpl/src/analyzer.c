#include <stdio.h>
#include <stdlib.h>

typedef	const char* Token;

typedef struct {
	Token* tokens;
	size_t token_count;
	size_t capacity;
}TokenMap;

TokenMap* tokenmap_start() 
{
	TokenMap* map = (TokenMap*)malloc(sizeof(TokenMap));
	if (map == NULL) {
		fprintf(stderr
	
