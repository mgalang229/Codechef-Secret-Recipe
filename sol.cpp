#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x1, x2, x3, v1, v2;
		cin >> x1 >> x2 >> x3 >> v1 >> v2;
		int chef_distance = abs(x3 - x1);
		int kefa_distance = abs(x3 - x2);
		if ((float) chef_distance / v1 < (float) kefa_distance / v2) {
			cout << "Chef";
		} else if ((float) chef_distance / v1 > (float) kefa_distance / v2) {
			cout << "Kefa";
		} else {
			cout << "Draw";
		}
		cout << '\n';
	}
	return 0;
}
