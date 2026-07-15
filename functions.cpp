/* *****************************************************
* Name: Adrian Vargas
* Assignment: Arrays-CPP
* Purpose: The purpose of functions.cpp implements array functions used
* by main.cpp
******************************************************* */

#include "functions.h"

int sum_array(int* arr, const int size) {
/* *************************
* This function calculates the sum of all integers
* in the array
* 
* @param (arr, size) : pointer to the integer array, number of
* elements in the array
* @return (int) : sum of the array
* @exception na : na
* @note na : na 
************************* */ 
    int sum = 0;
    int i = 0;
    
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;  
}

float avg_array(int* arr, const int size) {
/* *************************
* This function calculates the average of the integers
* in the array. calls sum and performs floating point division
* @param (arr, size) : pointer to the integer array,
* number of array elements
* @return (int) : average of the array elements
* @exception na : na
* @note na : na 
************************* */ 
    int sum = sum_array(arr, size);
    return static_cast<float>(sum) / static_cast<float>(size);
  
}

void add_arrays(int* answer, int* numbers1, int* numbers2, const int size) {
/* *************************
* This function adds two integer arrays element by element
* stores the results into the answer array
* 
* @param (answer, numbers1, numbers2, size) : pointer to the array result
* pointer to arr1, pointer to arr2, number of elements in each array
* @return na : na
* @exception na : na
* @note na : na 
************************* */ 
    int i = 0;
    
    for (i = 0; i < size; i++) {
        answer[i] = numbers1[i] + numbers2[i];
    }
}

void display_array(int* arr, const int size) {
/* *************************
* This function prints an integer array with brackets.
* 
* @param (arr, size) : pointer to the integer array,
* number of elements in the array
* @return (void) : no return value
* @exception na : na
* @note na : na 
************************* */ 
    int i = 0;
    
    std::cout << "[";
    for (i = 0; i < size; i++) {
         std::cout << arr[i];
             std::cout << " "; 
    }
    std::cout << "\b]\n";
}

void fill_random(int* arr, const int size) {
/* *************************
* This function will fill an integer array with random
* values from MIN to MAX. Using rand number generator
* @param (arr, size) : pointer to the integer array,
* number of elements 
* @return (void) : no return value
* @exception na : na
* @note na : na 
************************* */ 
     const int range = (MAX - MIN) + 1;
     int i = 0;
     
     for (i = 0; i < size; i++) {
         arr[i] = (rand() % range) + MIN;
     }
}

bool is_positive_integer(char* s) {
/* *************************
* This function will test whether a C-string contains only
* digits characters representing a positive integer above 0
* @param (s) : C-string to validate
* @return (bool) : true if s is positive string, else false
* @exception na : na
* @note na : na 
************************* */ 

     bool ok = true;
     int i = 0;
     
    if (s == nullptr) {
        ok = false;
    } else if (s[0] == '\0') {
        ok = false;
    } else {
        for (i = 0; s[i] != '\0'; i++) {
            if (s[i] < '0' || s[i] > '9') {
                ok = false;
            }
        }
        if (ok) {
            if (atoi(s) <= 0) {
                ok = false;
             }
         }
      }
      
      return ok;
    
  }
  
  void reverse_array(int* arr, const int size) {
/* *************************
* This function reverses the order of elements in an
* integer array, swapping ends of the array
* @param (arr, size) : pointer to the integer array,
* number of elements in the array
* @return (void) : no return value
* @exception na : na
* @note na : na 
************************* */ 
      int i = 0;
      int temp = 0;
      
      for (i = 0; i < size / 2; i++) {
          temp = arr[i];
          arr[i] = arr[size -i -1];
          arr[size -i -1] = temp;
    
      }
  }
  
