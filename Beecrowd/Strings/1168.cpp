#include <bits/stdc++.h>

using namespace std;

int n;
int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    int s = 0;
    string v;
    cin >> v;
    int h = 0;
    for (char& j : v){
      int o = (int)j - 48;
      h += leds[o];
    }
    cout << h << " leds"<< endl;
  }
}