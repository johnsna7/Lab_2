/*******************************************************
 * Program Name: letterCount.cpp
 * Author: Nathan Johnson
 * Date: 04.13.2019
 * Description: Reads file specified by user, counts
 * the letters for each paragraph and outputs the count
 * to new files.
 * *****************************************************/

#include "count_letters.hpp"
#include "output_letters.hpp"
#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
	string fNameIn, inputString;
	bool validInput = false;
	ifstream ifs;

	// Prompt for file name
	while ( !validInput )   // Validates correct filename
	{
		cout << "Please enter a filename to read." << endl;
		cin >> fNameIn;
		ifs.open(fNameIn);

		// Used info from c++.com reference on ifstream
		if ( ifs.good() )
		{
			validInput = true;
		}

		else
		{
			cout << "Invalid file name, please try again." << endl;
		}

		cin.clear();
		cin.ignore(96, '\n');
	}
	
	int count = 0;   // Counter for # of paragraphs

	// Read File
	while ( !ifs.eof() )   // Loops until the end of the file
	{

		// Create array to hold # of instances of each letter
		int letterCount[26];
		
		for ( int i = 0; i < 26; i++ )   // Initialize array
		{
			letterCount[i] = 0;
		}
		
		count_letters( ifs, letterCount );   // Populate array

		// Check for number of letters in populated array
		int aSum = 0;
		for ( int i = 0; i < 26; i++ )
		{
			aSum += letterCount[i];
		}
		
		if ( aSum > 0 )   // Doesn't output file if no letters
		{
			count++;   // counter for # of paragraphs

			cout << aSum << " letters in paragraph "
			     << count << "!" << endl;

			// Create output file showing # of each letter for that paragraph
			ofstream ofs;
			output_letters( ofs, letterCount );
		}
	}

	ifs.close();

	cout << "Done reading the file!" << endl;

	return 0;
}
