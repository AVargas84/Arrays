/* *****************************************************
* Name: Adrian Vargas
* Assignment: Arrays-CPP
* Purpose: To demonstrate how the program processes the
* command prompt from CMD, dynamically creates two integer arrays,
* then preforms operations; fill them with random numbers,
* adds arrays, sums/averages, reverses, and displays results
******************************************************* */

#include "main.h"

int main(int argc, char** argv) {
/* *************************
* Function main validates command line parameters,
* if valid, dynamically allocates three arrays,
* fills two with random values, adds them into a
* third array. preforms operations
* 
* @param (argc, argv) : number of command line arguments,
* array of C-string arguments
* @return (int) : returns 0 on successful execution
* @exception na : na
* @note na : na 
************************* */ 

    if (argc !=2 || !is_positive_integer(argv[1])) {
        std::cout << "usage: " << argv[0] << " n (where n is a number above 0)\n";
    }
    else {
        const int size = atoi(argv[1]);
     
         srand(time(NULL));

         int* numbers1 = new int[size];
         int* numbers2 = new int[size];
         int* answer   = new int[size];
    
         fill_random(numbers1, size);
         fill_random(numbers2, size);
    
         std::cout << "the two arrays created are:\n";
         display_array(numbers1, size);
         display_array(numbers2, size);
         std::cout << std::endl;
    
         std::cout << "adding the arrays together:\n";
         add_arrays(answer, numbers1, numbers2, size);
         display_array(answer, size);
         std::cout << std::endl;
    
         std::cout << "The sum and average of the arrays:\n";
         std::cout << "array 1 sum: " << sum_array(numbers1, size) << "\n";
         std::cout << "array 1 average: " << avg_array(numbers1, size) << std::endl;
         std::cout << "\narray 2 sum: " << sum_array(numbers2, size) << "\n";
         std::cout << "array 2 average: " << avg_array(numbers2, size) << std::endl;
    
         reverse_array(numbers1, size);
         reverse_array(numbers2, size);
    
         std::cout << "\nThe arrays reversed are:\n";
         std::cout << "array 1 ";
         display_array(numbers1, size);
         std::cout << "array 2 ";
         display_array(numbers2, size);
    
         delete[] numbers1;
         delete[] numbers2;
         delete[] answer;
    }

    return 0;
}

