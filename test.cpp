#include <iostream>
#include "problem_lister.cpp"

int main () {
	problemLister("L6");
	problemLister("M1-3");
	problemLister("N1,2,5");
	problemLister("P1-3,5");
	problemLister("Q1-3,5-7");
	problemLister("R1-1,3-3,5-8");
	problemLister("R1-1,3,5-8");
	problemLister("T 4 - 5 ,1- 3,7 - 10,8-   12");
	return 0;
}