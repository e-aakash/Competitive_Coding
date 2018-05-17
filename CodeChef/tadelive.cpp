#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int const MAXN = 112345;
int n, x, y, a[MAXN], b[MAXN], c[MAXN];

int main() {
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    //making the array c as the values (b[i] - a[i]) sorted in the decreasing order
    //sum = sum of all elements in array a
	long long sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += a[i];
		c[i] = b[i] - a[i];
	}
	sort(c + 1, c + 1 + n, greater<int>());

	//if we pick i value from array b (n - x <= u <= y) then the result will be sum + sum of ith first values in array c.
	long long res = -1;
	for (int i = 1; i <= y; i++) {
		sum += c[i];
		if (i >= n - x)
			res = max(res, sum);
	}

	cout << res << endl;
    return 0;
}
