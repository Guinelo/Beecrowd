#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int c = 1;
	while(true){
		int n; cin >> n;
		if(!n) break;
		if(c != 1) cout << '\n' << '\n';
		vector<pair<int, int>> i(n);
		int tp = 0;
		int tc = 0;
		for(int j=0; j<n; ++j){
			cin >> i[j].first >> i[j].second;
			tp += i[j].first;
			tc += i[j].second;
		}
		map<int, int> cns;
		for(auto x:i){
			int t = x.second / x.first;
			if(cns.find(t) == cns.end()){
				cns[t] = x.first;
			}else{
				cns[t] += x.first;
			}
		}
		cout << "Cidade# " << c++ << ":\n";
		int cnt = 1;
		for(auto it:cns){
			cout << it.second << '-' << it.first;
			if(cnt != cns.size()) cout << ' ';
			cnt ++;
		}
		double m = (double)tc / (double)tp;
		int p = 2;
		double mul = std::pow(10.0, p);
		double tr = std::floor(m * mul) / mul;
		cout << "\nConsumo medio: " << fixed << setprecision(2) << tr  <<  " m3."; 
	}
}