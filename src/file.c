#include "line.h"

#include <stdio.h>
#include <stdlib.h>
#include "file.h"

void parseFile(const char* filepath) {
    FILE* file;
    char* line = NULL;
    size_t len = 0;
    ssize_t read;

    file = fopen(filepath   , "r");

    if (file == NULL) {
        printf("Error file could not be loaded!\n");
        exit(0);
    }

    while ((read = getline(&line, &len, file)) != -1) {
        parseLine(line);
    }

    printf("\n");

    fclose(file);

    if (line) free(line);

    exit(1);
}