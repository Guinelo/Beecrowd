#include <bits/stdc++.h>
using namespace std;

#define ll long long

int mds(int a, int b) {
	while (b) {
		a = b;
		b = a%b;
	}
	return a;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    while (n--) {
    	int f1, f2;
    	cin >> f1 >> f2;
    	ans = mdc(f1, f2);
    	cout << ans << "\n";
    }
}