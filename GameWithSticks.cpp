#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>


using namespace std;
// using namespace __gnu_pbds;
#define endl "\n"
#define ll long long
#define for(int i = value; i < limit; i++) rep(i, value, limit);
const int mod = 1e9 + 7;

// typedef tree<int, null_type, less<int>, rb_tree_tag,
//         tree_order_statistics_node_update>
//         PBDS;

// typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,
//         tree_order_statistics_node_update>
//         PBDSduplicate;

typedef pair<int, int> p;



void solve() {
	int a, b;
	cin >> a >> b;
	(min(a, b) % 2 == 1) ? (cout << "Akshat" << endl) : cout << "Malvika" << endl;

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
