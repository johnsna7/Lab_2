/****************************************************
 * Function Name: output_letters.cpp
 * Author: Nathan Johnson
 * Date: 04.13.2019
 * Description: Copies an array of ints to an output
 *  file.
 * **************************************************/

#include "output_letters.hpp"
#include <fstream>
#include <iostream>

// Function: output_letters
// What it does: Copies an array of ints into a new file w/ name from user
// Arguments: output file stream for new file & the address for the int array
// The int array should have size of 26, one for each letter.
// Returns: Nothing, but adds content to a file
void output_letters( std::ofstream & ofs, int* pNumLetters )
{
	// Prompt for output file name
	std::string fNameOut;
	std::cout << "Please enter a name for the output file." << std::endl;
	std::cin >> fNameOut;
	ofs.open(fNameOut, std::ios::app);

	// Create output file
	char letter = ' ';  // Initialize char for output formatting

	for ( int i = 0; i < 26; i++ )   // Parse through array
	{
		letter = ( i + 97 );   // convert array location to char

		ofs << letter << ": " << pNumLetters[i] << std::endl;   // format output
	}

	ofs.close();
}
