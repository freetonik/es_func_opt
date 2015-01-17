#ifndef ALLINC
#define ALLINC

#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <math.h>

#define N 3
#define POP_SIZE 10
#define E 2.7182818
#define GENERATIONS 8000

struct Individual {
	float arr[N];
	float sigma;
};

struct Population{
	Individual pop[POP_SIZE];
};

#endif
