#include <iostream>

using namespace std;

bool tp(int n) {
	int c = 0;
	for (int d = 1; d * d <= n; d++) {
		if (n % d == 0) {
			c++;
			if(d*d!=n){
				c++;
			}
		}
	}

	if (c == 2) {
		return 1;
	}
	else {
		return 0;
	}
}

int c[10000];
void ciur() {
	for (int i = 0; i < 10000; i++) {
		if (tp(i) == 1) {
			c[i] = 1;
		}
		else {
			c[i] = 0;
		}
	}
}

int pc(int n) {
	while (n > 10) {
		n /= 10;
	}

	return n;
}

int sc(int n) {
	int s = 0;
	while (n) {
		s += n % 10;
		n /= 10;
	}

	return s;
}

int main()
{
	ciur();

	int r = 0,a;
	do{
		cin >> a;
		int s = sc(a);

		if (c[s] == 1) {
			if (pc(s) % 2 == 0) {
				r++;
			}
		}
	} while (a != 0);

	cout << r;
}
