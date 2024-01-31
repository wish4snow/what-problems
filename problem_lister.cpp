#include <iostream>
#include <string>
#include <vector>
using namespace std;


string problemLister (string problems) {
	string assignmentLetter = problems.substr(0,1);



	return assignmentLetter;
}

vector<int> numbersInRange (string range) {
	vector<int> array;
	int intSplit = -1;

	for (int i = 0; i < range.length() - 1; i++) {
		if (range.substr(i,1) == "-") {
			intSplit = i;

		} // end of if statement
	} // end of for loop

	if (intSplit == -1) {
		array.push_back(stoi(range));
		return array;

	} //end of if statement

	for (int i = stoi(range.substr(0, intSplit)); i < stoi(range.substr(intSplit + 1, range.length() - intSplit)) + 1; i++) {
		array.push_back(i);
	} //end of for loop

	return array;
}


int main () {
	vector<int> poop = numbersInRange("1-16");
	cout << problemLister("M10") << endl;
	for (int i = 0; i < poop.size(); i++) {
		cout << poop[i] << " ";
	}


	return 0;
}