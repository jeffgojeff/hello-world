//include our file stream library
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	string firstName;
	string lastName;
	double age;

	// declare an input file stream variable and open the file
	ifstream fin;
	fin.open("input_file_name.txt");

	// declare an output file stream variable and open the file.
	ofstream fout;
	fout.open("output_file_name.txt");

	// read data from the file
	fin >> firstName >> lastName >> age;

	// Here we output variables 'firstName','lastName', 'jediLevel' 
	// and a string literal to the output file. 
	// Notice the use "fout" exactly the same as "cout".
	fout << firstName << " " << lastName << endl;
	fout << age << endl;
	fout << "You can also output literals to a text file " << 1337 << endl << "test" << endl;

	// let the user data was written to the file
	// by printing a message to the console (screen).
	cout << "Data has been written to 'output_file_name.txt'" 
	     << endl;
	
	// close files (dont forget about this!)
	fin.close();
	fout.close();

	return 0;
}