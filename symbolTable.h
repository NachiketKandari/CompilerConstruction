#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#include "symbolTableDef.h"

int hashFunction(char *value, int no_entries);
symTable *createEmptyTable(int no_lists);
void addSymbol(symTable *lookupTable, Token *t, int lineno);
nodeInfo *getInfo(symTable *lookupTable, char *lexeme);
