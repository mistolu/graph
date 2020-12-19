#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> used;
vector<vector<int>> s;
void dfs(int v) {
	used[v] = 1;
	for (int i = 0; i < s[v].size(); i++) {
		int u = s[v][i];
		if (used[u] == 0) {
			dfs(u);
		}
	}
}
int main() {
	int  n;
	cin >> n ;
	
	used.resize(n, 0);
	s.resize(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			if (x == 1) {
				s[i].push_back(j);
			}
		}
	}
	dfs(0);
	for (int i = 0; i < n; i++){
		cout << used[i];
	}
  
	return 0;
}
