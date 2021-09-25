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

	string get_name(int id);
	int get_age(int id);

	int s;

	friend ostream& operator<<(ostream& os, Name_pairs l);
	friend bool operator== (const Name_pairs& l1, const Name_pairs& l2);
	friend bool operator!= (const Name_pairs& l1, const Name_pairs& l2);

private:

	vector<string> name;
	vector<double> age;

};

