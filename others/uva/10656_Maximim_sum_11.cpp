#include <bits/stdc++.h>
#include <string>
using namespace std;
#define SYNC ios_base::sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;
#define inf 0x3f3f3f3f
#define INF 1000111000111000111LL
#define mod 1000000007
#define pi acos(-1.0)
#define eps 1e-8
#define endl '\n'
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define fi first
#define se second
#define all(cc) (cc).begin(),(cc).end()
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)

typedef long long int lli;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vector<int> > vvi;
typedef vector<long long int> vlli;
typedef vector<pair<int,int> > vpii;

bool myfunction (lli i,lli j) { return (i > j); }

int main()
{
  SYNC
  lli n;
  while(cin>>n)
  {
    if(n==0)
      break;

    lli i,j,a;
    vector<int>vi;
    for(i=0;i<n;i++)
    {
      cin>>a;
      if(a!=0)
      vi.pb(a);
    }

    if(vi.size()==0)
      cout<<0;

    for(i=0;i<vi.size();i++)
    {
      cout<<vi[i];
      if(i < vi.size()-1)
      cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}
