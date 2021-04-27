#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>


using namespace std;
// using namespace __gnu_pbds;
#define endl "\n"
#define ll long long
// #define for(int i = value; i < limit; i++) rep(i, value, limit);
const int mod = 1e9 + 7;

// typedef tree<int, null_type, less<int>, rb_tree_tag,
//         tree_order_statistics_node_update>
//         PBDS;

// typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,
//         tree_order_statistics_node_update>
//         PBDSduplicate;

typedef pair<int, int> p;



void solve() {
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cin >> b[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int value = a[i];
		int cnt = 0;
		for (int  j = 0; j < n; j++) {
			if (a[i] == b[j])

				cnt++;
		}
		ans += cnt;
	}
	cout << ans << endl;
}




int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n = 1;
	// cin >> n;
	while (n--) {
		solve();
	}
}
