//
// Created by Youga on 2018/3/14.
//
#include <stdio.h>

const int MAX = 3;

int main() {

    int var[] = {100, 200, 300};

    int i, *ptr;

    ptr = var;

    for (int j = 0; j < MAX; ++j) {

        printf("�洢��ַ: var[%d] = %x \n", j, ptr);

        printf("�洢ֵ: var[%d] = %d \n", j, *ptr);

//        ptr++;
    }

}
