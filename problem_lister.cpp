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
	vector<int> finalFinalVector;
	for (int i = 0; i < allVectors.size(); i++) {
		for (int j = 0; j < allVectors[i].size(); j++) {
			finalVector.push_back(allVectors[i][j]);
		}

	}

	sort(finalVector.begin(), finalVector.end());
	
	for (int i = 0; i < finalVector.size(); i++) {
		if (finalVector[i] != finalVector[i + 1]) {
			finalFinalVector.push_back(finalVector[i]);
		}
	}
	return finalFinalVector;
}


int main () {
	vector<int> test = numbersInRange("32-35");
	vector<int> test2 = numbersInRange("12-14");
	vector<int> test5 = numbersInRange("34-40");
	vector<vector<int> > test4;
	test4.push_back(test);
	test4.push_back(test2);
	test4.push_back(test5);
	vector<int> test3 = vectorCombineAndSort(test4);
	cout << problemLister("M10") << endl;
	for (int i = 0; i < test3.size(); i++) {
		cout << test3[i] << " ";
	}
	cout << endl;

	return 0;
}