#include <bits/stdc++.h>
#include <string>
using namespace std;
#define SYNC                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define inf 0x3f3f3f3f
#define INF 1000111000111000111LL
#define mod 1000000007
#define pi acos(-1.0)
#define eps 1e-8
#define endl '\n'

typedef long long int lli;

int main()
{
	int n;
	cin>>n;
	std::vector<int> v;
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	int k;
	cin>>k;

	for(int i=0; i<k; i++) {
		v[i]= -v[i];
	}

	int sum = 0;
	for(auto x: v) {
		cout<<x<<endl;
		sum = sum + x;
	}

	cout<<sum<<endl;

	return 0;
}