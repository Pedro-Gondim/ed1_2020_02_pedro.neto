#ifndef TAD_immh
#define TAD_immh
#include "TMat2D.h"

int open(char* fileN,TMat2D* matrix);
int convert(char* fileIn, char* fileOut,TMat2D* matrix);
int segment(int thr,char* fileIn, char* fileSeg, TMat2D* matrix);
int cc(char* fileSeg, char* fileOut, TMat2D* matrix);
int lab(char* labIn, char* labOut, TMat2D* matrix);
#endif 