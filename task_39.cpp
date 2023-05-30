#include <iostream>
#include <math.h>
using namespace std;
int main() {

	int A, B;
	cout << "Type number A: ";
	cin >> A;
	cout << "Type number B: ";
	cin >> B;
	for (int i = A; i <= B; i++) {
		for (int i2 = 1; i2 <= i; i2++) {
				cout << "Number: " <<i<< endl;
			
		}
	}
}
