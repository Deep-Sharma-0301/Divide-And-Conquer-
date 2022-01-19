#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long

ll n, m, x, y;

bool check(ll mid) {
	ll total = m + (n - mid) * y;//total means that we already have M coupons and if we want to give scholarship to mid number of studenst that we can borrow Y coupons from other students 
	if (total >= mid * x) {//if our total coupons are greater than required(mid*x) coupons that means we can give scholarship otherwise we can not give scholarship
		return true;
	}
	else {
		return false;
	}
}

int main(){   
  cin >> n >> m >> x >> y;
	ll s = 0, e = n;
	ll ans = 0;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (check(mid)) {
			ans = mid;
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}
	cout << ans;
}