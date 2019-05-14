/****************************************************
 * Function Header Name: count_letters.hpp
 * Author: Nathan Johnson
 * Date: 04.13.2019
 * Description: Counts & of each letter from ifs
 *  & stores in array
 * **************************************************/

#ifndef COUNT_LETTERS_HPP
#define COUNT_LETTERS_HPP

#include <fstream>

// Function: count_letters
// What it does: Reads an input file stream and counts # of each letter
// Arguments: input file stream & the address for an int array
// The int array should have size of 26, one for each letter
// Returns: Nothing, but fills in the array passed in the paramater
void count_letters( std::ifstream & ifs, int* pNumLetters );

#endif
