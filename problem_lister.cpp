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
} //end of function

vector<int> vectorCombineAndSort (vector<vector<int> > allVectors) {
	vector<int> finalVector;

	for (int i = 0; i < allVectors.size(); i++) {
		for (int j = 0; i < allVectors[i].size(); j++) {
			finalVector.push_back(allVectors[i][j]);
		}

	}

	return finalVector;
}


int main () {
	vector<int> poop = numbersInRange("32-35");
	vector<int> poop2 = numbersInRange("12-14");
	vector<vector<int> > poop4;
	poop4.push_back(poop);
	poop4.push_back(poop2);
	// vector<int> poop3 = vectorCombineAndSort(poop4);
	// cout << problemLister("M10") << endl;
	// for (int i = 0; i < poop3.size(); i++) {
	// 	cout << poop3[i] << " ";
	// }
	// cout << endl;

	return 0;
}