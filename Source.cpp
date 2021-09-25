#include "Name_pairs.h"
#include <iostream>
#include <ctime>

#include <vector>

using namespace std;
Name_pairs list1;



int main() {

	srand(time(0));
	
	list1.read_names();

	list1.read_ages();
	
	cout << list1;
	
	cout << "\nSORT\n\n";

	list1.sort();

	cout << list1;
	
	Name_pairs list2 = list1;

	if (list1 == list2) cout << "\nEQUAL";
	if (list1 != list2) cout << "\nNOT EQUAL";

}

