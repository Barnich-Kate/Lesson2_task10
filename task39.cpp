#include <iostream>
#include <math.h>
using namespace std;
int main() {

	int N, K, sum1, sum2, i2;
	cout << "Type number N: ";
	cin >> N;
	cout << "Type number K: ";
	cin >> K;
	for (int i = 1; i <=N; i++) {
		sum1 = i;
		for (i2 = 1; i2 <=K; i2++) {
			sum2 += sum1;
		}
	}
	cout << "Summa is equal: " << sum2 << endl;
}
