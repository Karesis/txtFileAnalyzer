/*Analyzer, this file contains some useful things to deal the source txt file to a "dictionary" (sorry for that, im just used to python dictionary, and i really like that).
 * This is the first place of the whole project. Im ready for this! Yeeeyyyy!!
 */
#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 256

typedef struct {
	const char* str_key;
	size_t str_count;
}DicItem;

typedef struct {
	DicItem* words_dic;
	size_t words_count;
	size_t cap;
}WordDic;


WordDic* dic_start() 
{
	WordDic* temp = (WordDic*)malloc(sizeof(WordDic));
	if (temp == NULL) {
		fprintf(stderr, "Faild to initialize WordDic itself: %s\n", strerror(errno));
		exit(EXIT_FAILURE);
	}
	temp->words_dic = (DicItem*)calloc(CAPACITY, sizeof(DicItem));
	if (temp->words_dic == NULL) {
		fprintf(stderr, "Faild to initialize WordDic's spaces for storage: %s\n", strerror(errno));
		free(temp);
		temp = NULL;
		exit(EXIT_FAILURE);
	}
	temp->words_count = 0;
	temp->cap = CAPACITY;
	return temp;
}

void dic_add(DicItem addee, WordDic* dic)
{
	if (dic == NULL) {
        fprintf(stderr, "Error: Dictionary pointer is NULL in dic_add.\n");
        exit(EXIT_FAILURE); 
    }
	if (dic->words_count++ == dic->cap) {
		cap *= 2;
		DicItem* temp = (DicItem*)realloc(dic->words_dic, cap);	
		if (temp == NULL) {
			fprintf(stderr, "Faild to expand the memory of the dictionary: %s\n", strerror(errno));
			exit(EXIT_FAILURE);
		}
	} else 
		dic->words_dic[dic->words_count] = addee;	
}

void dic_del(WordDic* dic)
{
	for (size_t i=0;i<dic->words_count;i++) {
		free(dic->words_dic[i].str_key);
	}
	free(dic->words_dic);
	free(dic);
}
	
