#include <iostream>
#include <string>
#include <vector>
using namespace std;




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

string removeSpaces(string text) {
	string finalText;

	for (int i = 0; i < text.size(); i++) {
		if (text[i] != ' ') {
			finalText +=text[i];
		}
	}

	return finalText;
}

vector<string> commaSeparator (string text) {
	string fText = removeSpaces(text);
	string substring;
	int commaIndex = 0;
	vector<string> finalVector;

	for (int i = 1; i < fText.size(); i++) {
		if (fText[i] != ',') {
			substring += fText[i];

		} else {
			finalVector.push_back(substring);
			substring = "";
			commaIndex = i;

		}
	}
	finalVector.push_back(fText.substr(commaIndex + 1, fText.size()));

	return finalVector;
}

void problemLister (string problems) {
	string assignmentLetter = problems.substr(0,1);
	vector<string> separatedCommas;
	vector<vector<int> > allRanges;
	vector<int> sortedNumbers;
	separatedCommas = commaSeparator(problems);
	
	for (int i = 0; i < separatedCommas.size(); i++) {
		vector<int> ranges = numbersInRange(separatedCommas[i]);
		allRanges.push_back(ranges);
	}

	sortedNumbers = vectorCombineAndSort(allRanges);

	cout << "Do problem";

	if (sortedNumbers.size() > 1) {

		cout << "s ";
		for (int i = 0; i < sortedNumbers.size() - 1; i++) {
			cout << sortedNumbers[i] << ", ";
			if (i % 5 == 0 && i > 0) {
				cout << "\n";
			}
		}
		cout << "and " << sortedNumbers[sortedNumbers.size() - 1];
		
	} else {
		cout << " " << sortedNumbers[0];
	}
	cout << " of " << assignmentLetter;
	cout << endl;
}

// int main () {
// 	vector<int> test = numbersInRange("32-35");
// 	vector<int> test2 = numbersInRange("32-35");
// 	vector<int> test5 = numbersInRange("32-35");
// 	vector<vector<int> > test4;
// 	test4.push_back(test);
// 	test4.push_back(test2);
// 	test4.push_back(test5);
// 	vector<int> test3 = vectorCombineAndSort(test4);
// 	//cout << problemLister("M10") << endl;
// 	for (int i = 0; i < test3.size(); i++) {
// 		cout << test3[i] << " ";
// 	}
// 	cout << endl;
// 	cout << removeSpaces("h e l l o") << endl;

// 	vector<string> s = commaSeparator("T4-5");
// 	cout << s[0] << endl;

// 	problemLister("T 4 - 5 ,1- 3,7 - 10,8-   12");
// 	return 0;
// }