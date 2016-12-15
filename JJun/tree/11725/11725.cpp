#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
int parent[100001] = { 0, };
vector < int > v[100001];
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n-1; ++i) {
		int a, b;
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	queue < int > q;
	q.push(1);
	parent[1] = -1;
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int next : v[now]) {
			if (parent[next] == 0) {
				parent[next] = now;
				q.push(next);
			}
		}
	}
	for (int i = 2; i <= n; ++i) {
		printf("%d\n", parent[i]);
	}
}
