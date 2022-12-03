#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;
	while (0 != b) {
		if (0 == (c - a) % b) {
			const auto& ans = (c - a) / b + 1;
			if (0 < ans) {
				cout << ans;
			}
			else {
				cout << "X";
			}
		}
		else {
			cout << "X";
		}

		cout << '\n';
		cin >> a >> b >> c;
	}

	return 0;
}