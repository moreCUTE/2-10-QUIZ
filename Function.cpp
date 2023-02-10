#include<iostream>
#include<math.h>
using namespace std;

void circumfrace(int radius);

int main() {

	//I was a bit confused on what was required for this quiz problem
	//I also forgot how to made a loop and make it keep asking 
	int num;
	cout << "give radius of circle" << endl;
	cin >> num;

	circumfrace(num);
	
	
}

void circumfrace(int radius){

	float circum = radius * 2 * 3.14;
	cout << circum << endl;
}
