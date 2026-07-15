/* *****************************************************
* Name: Adrian Vargas
* Assignment: Arrays-CPP
* Purpose: The purpose of functions.h contains function prototypes
******************************************************* */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <cstdlib>
#include <iostream>

// use these defines in your fill random function
#define MIN 1
#define MAX 100

// do not modify these prototypes, use them as is in your functions.cpp
int sum_array(int*, const int);
float avg_array(int*, const int);
void add_arrays(int*, int*, int*, const int);
void display_array(int*, const int);
void fill_random(int*, const int);
bool is_positive_integer(char*);
void reverse_array(int*, const int);

#endif /* FUNCTIONS_H */
