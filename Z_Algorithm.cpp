#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> calculateZ(string s) {

	int n = s.length();
	vector<int> Z(n);

	int left = 0;
	int right = 0;

	Z[0] = 0;
	for (int i = 1; i < n; i++ ) {
		if (i > right) {
			left = right = i;
			while (right < n && s[right] == s[right - left]) {
				right++;
			}
			Z[i] = right - left;
			right--;
		} else {
			int i1 = i - left;

			if (Z[i1] < right - i1 + 1) {
				Z[i] = Z[i1];
			} else {
				left = i;
				while (right < n && s[right] == s[right - left]) {
					right++;
				}
				Z[i] = right - left;
				right--;
			}
		}
	}
	return Z;
}

vector<int> ZAlgorithm(string text, string pattern) {

	vector<int> foundIndecis;

	string combined = pattern + '$' + text;
	vector<int> Z = calculateZ(combined);

	for (int i = pattern.length(); i < Z.size(); i++) {
		if (Z[i] == pattern.length())
			foundIndecis.push_back(i - pattern.length() - 1);
	}
	return foundIndecis;
}

int main() {
	string text = "ababcdabcb";
	string pattern = "abc";
	vector<int> indecis = ZAlgorithm(text, pattern);
	for (int i : indecis)
		cout << i << " ";
	return 0;
}