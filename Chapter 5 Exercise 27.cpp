#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	inputFile.open("People-2.txt");

	if (!inputFile)
	{
		cout << "Error opening file." << endl;
		return 1;
	}

	int year = 0;
	int population = 0;
    int star = population;

	cout << "PRAIREVILLE POPULATION GROWTH" << endl;
	cout << "(each * represents 1,000 people)" << endl;

	for (year = 1910; year <= 2010; year += 20)
	{
		inputFile >> population;
		cout << year << " ";
		for (int i = 0; i < population / 1000; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

