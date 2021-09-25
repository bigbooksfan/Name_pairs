#include "Name_pairs.h"
#include <iostream>

using namespace std;

int i = 0, j = 0;				// counters

string name_swap;
double age_swap;

string name_in;


void Name_pairs::read_names() {

	for (int i = 0; i < 5; ++i) {

		name_in.clear();

		name_in.push_back(rand() % 26 + 0x41);		// First name

		for (int j = 0; j < (rand() % 5 + 5); ++j)

			name_in.push_back(rand() % 26 + 0x61);

		name_in.push_back(' ');

		name_in.push_back(rand() % 26 + 0x41);		// Last name

		for (int j = 0; j < (rand() % 5 + 5); ++j)

			name_in.push_back(rand() % 26 + 0x61);


		name.push_back(name_in);

	}

}

void Name_pairs::print() {

	for (i = 0; i < name.size(); ++i) {

		cout << name[i] << ", age = ";

		if (age.size() > i) cout << age[i];
	
		cout << endl;

	}
}

void Name_pairs::read_ages() {

	age.resize(name.size());

	for (i = 0; i < name.size(); ++i) {

		//cout << "Age for " << name[i] << "? ";
		//cin >> age[i];

		age[i] = rand() % 40 + 20;

	}

}

void Name_pairs::sort() {

	int s = name.size();

	for (i = 0; i < s - 1; ++i) {			// Bubbles

		for (j = s-1; j > i; --j) {

			if (name[j] < name[j - 1]) {

				name_swap = name[j - 1];

				name_swap = name[j - 1];
				name[j - 1] = name[j];
				name[j] = name_swap;

				age_swap = age[j - 1];
				age[j - 1] = age[j];
				age[j] = age_swap;


			}

		}

	}

}