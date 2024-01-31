#include <iostream>
#include <string>
using namespace std;


string problemLister (string problems) {
	string assignmentLetter = problems.substr(0,1);



	return assignmentLetter;
}

string numbersInRange (string range) {
	string text;
	int intSplit = -1;

	for (int i = 0; i < range.length() - 1; i++) {
		if (range.substr(i,1) == "-") {
			intSplit = i;

		} // end of if statement
	} // end of for loop

	if (intSplit == -1) {
		return range;

	} //end of if statement

	for (int i = stoi(range.substr(0, intSplit)); i < stoi(range.substr(intSplit + 1, range.length() - intSplit)) + 1; i++) {
		text = text + to_string(i) + ","; 
	} //end of for loop

	return text.substr(0, text.length() - 1);
}


int main () {

	cout << problemLister("q10") << endl;
	cout << numbersInRange("4-10") << endl;


	return 0;
}