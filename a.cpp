#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int solve()
{
	int n;
	cin >> n;
	int a[n];
	
	for(int i = 0; i<n; i++) cin >> a[i];
	
	int len = 2, mx = 0;
	for(int i = 1; i<n-1; i++)
	{
		if(a[i+1]-a[i] == a[i]-a[i-1]) len++;
		else
		{
			mx = max(mx, len);
			len = 2;
		}
	}
	mx = max(mx, len);
	return mx;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int t; cin >> t;
	for(int i = 0; i<t; i++)
		cout << "Case #" << i + 1 << ": " << solve() << "\n";
	return 0;
}
