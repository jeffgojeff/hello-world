#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	string foo;
	string test;
	string third;

	ifstream name;
	name.open("input_file_name.txt");

	name >> foo >> test >> third;


	cout << foo << " " << test << " " << third << endl;

	name.close();

}