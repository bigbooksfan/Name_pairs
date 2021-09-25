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
	
	list1.print();
	
	cout << "\nSORT\n\n";

	list1.sort();

	list1.print();
	
}