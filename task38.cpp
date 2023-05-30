#include <iostream>
#include <math.h>
using namespace std;
int main() {

	int N, sum1, sum2;
	cout << "Type number N: ";
	cin >> N;
	for (int i = 1; i <= N; i++) {
		sum1 = i;
		for (int i2 = 1; i2 <= N-i; i2++) {
			sum2 += sum1;
		}
	}
	cout << "Summa is equal: " << sum2 << endl;
}
