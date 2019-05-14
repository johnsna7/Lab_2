/****************************************************
 * Function Header Name: count_letters.cpp
 * Author: Nathan Johnson
 * Date: 04.13.2019
 * Description: Counts & of each letter from ifs
 *  & stores in array
 * **************************************************/

#include "count_letters.hpp"
#include <fstream>
#include <string>

// Function: count_letters
// What it does: Reads an input file stream and counts # of each letter
// Arguments: input file stream & the address for an int array
// The int array should have size of 26, one for each letter
// Returns: Nothing, but fills in the array passed in the paramater
void count_letters( std::ifstream & ifs, int* pNumLetters )
{
	std::string input;

	std::getline(ifs, input);   // Reads paragraph to a string

	for ( unsigned i = 0; i < input.length(); i++ )   // Parse through string
	{
		char cTemp = input[i];

		int cCode = static_cast<int>(cTemp);   // char to int conversion

		if ( cCode >= 97 && cCode <= 122 )   // Convert upper to lowercase
		{
			cCode -= 32;   
		}

		if ( cCode >= 65 && cCode <= 90 )   // Counts if char is a letter
		{
			// adds to counter at corresponding location in array
			pNumLetters[cCode-65]++;
		}
	}
}
