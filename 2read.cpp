#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	// For this example we are dealing with two input files.
	// ONLY ONE FILE CAN BE USED AT A TIME. LEAVE ONE OF THE fin.open() LINES   COMMENTED.
	ifstream fin;
	fin.open("single_line.txt");
	//fin.open("multiple_lines.txt");


	// This example shows that ifstream reads variables in elements by white space.
	// White space includes spaces and new line characters! This code will provide the
	// same output for both input files single_line.txt and multiple_lines.txt.
	// Try it yourself!
	int number;
	string title;
	string name;

	fin >> number >> title >> name;

	cout << number << " " << title << " " << name << endl;

	fin >> number >> title >> name;

	cout << number << " " << title << " " << name << endl;
	return 0;
}