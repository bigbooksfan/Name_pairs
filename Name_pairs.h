#pragma once
#include <string>
#include <vector>

using namespace std;

class Name_pairs
{

public:

	void read_names();				// enter names
	void read_ages();				// enter ages
	void print();					// cout name[i], age[i] 

	void sort();					// alphabetic name, ages follow



private:

	vector<string> name;
	vector<double> age;

};

