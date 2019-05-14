/****************************************************
 * Function Header Name: output_letters.hpp
 * Author: Nathan Johnson
 * Date: 04.13.2019
 * Description: Copies an array of ints to an output
 *  file.
 * **************************************************/

#ifndef OUTPUT_LETTERS_HPP
#define OUTPUT_LETTERS_HPP

#include <fstream>

// Function: output_letters
// What it does: Copies an array of ints into a new file
// Arguments: output file stream for new file & the address for the int array
// The int array should have size of 26, one for each letter.
// Returns: Nothing, but adds content to a file
void output_letters( std::ofstream & ofs, int* pNumLetters );

#endif
