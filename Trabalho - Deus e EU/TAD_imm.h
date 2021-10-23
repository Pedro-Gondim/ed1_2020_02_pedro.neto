#ifndef _timmh_
#define _timmh_
#include "../Lab13 - TAD/ex03/TMat2D.h"
#define SUCCESS 0
#define INVALID_NULL_POINTER -1


int open_file_txt(char* input);
int convert(char* address, char* output);
int open_file_imm(char* input);
int segment(int thr, char* input, char* output);
int cc (char* input, char* output);
int lab(char* input, char* output);

#endif