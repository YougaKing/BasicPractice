//
// Created by Youga on 2018/3/14.
//
#include <stdio.h>

void createFile() {

    FILE *file = NULL;

    file = fopen("D:\\AndroidLocal\\test.txt", "w+");

    fprintf(file, "Write first row Hello C use fprintf() \n");

    fputs("Write second row World C use fputs() \n", file);

    fclose(file);
}