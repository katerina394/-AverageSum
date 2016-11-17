#ifndef C__GIT_AVERAGESUM_AVERAGESUM_INCLUDE_STRUCT_H_
#define C__GIT_AVERAGESUM_AVERAGESUM_INCLUDE_STRUCT_H_
#include "stdlib.h"
struct CNode {
    int data;
    CNode *next;
    CNode *prev;
};

int* AverageSum(int* a, int n, int w);
#endif  // C__GIT_AVERAGESUM_AVERAGESUM_INCLUDE_STRUCT_H_
