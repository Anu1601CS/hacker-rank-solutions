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

class Hello 
{

	public:

		int a,b;

		int sub();
		
		Hello() {
			cout<<"Hello"<<endl;
		}

		Hello(string s) {
			cout<<"Hello"<<s<<endl;
		}

		int add()
		{
			return a+b;
		}

};

int Hello::sub(){
	return a-b;
}

int main()
{
	Hello obj1("World");

	obj1.a = 1;
	obj1.b = 2;

	cout<<obj1.add();
	cout<<obj1.sub();

    return 0;
}