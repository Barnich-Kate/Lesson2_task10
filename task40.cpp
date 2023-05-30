#include <iostream>
#include <math.h>
using namespace std;
int main() {

	int A, B;
	cout << "Type number A: ";
	cin >> A;
	cout << "Type number B: ";
	cin >> B;
	for (int i = 1; i <= B-A+1; i++) {
		cout << "Number1:" <<i<< endl;
		for (int i2 = 1; i2 <= i; i2++) {
				cout << "Number: " <<A+i-1<< endl;
			
		}
	}
}
    
