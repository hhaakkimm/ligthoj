#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <map>

using namespace std;

//constants
const int MAXN=(int)(1e4+1e1);
const double PI=acos(-1.0);

//defines
#define ll long long
#define TASKNAME "."
#define fr freopen(TASKNAME"in","r",stdin);
#define fw freopen(TASKNAME"out","w",stdout);
#define mp make_pair
#define pb push_back
#define eof (-1)
#define forr(xx,yy,zz) for(int zz=xx;zz<=yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#define sz(x) (int)x.size()
#define mod 10000000007
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()
//=

ll a,l,r,t;


int main()
{
	cin >> t;
	forr(1,t,i)
	{
		cin >> a;
		l = 0,r = 100000000;
		while(l<r)
		{
			ll m = (l+r)>>1;
			if(m*m<a)
				l = m+1;
			else
				r = m;
		}
		l = (r-1)*(r-1)+1;
		//cout << r << ' ';

		ll m = (l+r*r)>>1;
		if(r%2==0)
		{
			if(a>=m)
				printf("Case %d: %lld %lld\n",i,m-l+1,r*r-a+1);
			else
				printf("Case %d: %lld %lld\n",i,a-l+1,r);
		}
		else
		{
			if(a>=m)
				printf("Case %d: %lld %lld\n",i,r*r-a+1,m-l+1);
			else
				printf("Case %d: %lld %lld\n",i,r,a-l+1);
		}

	}
	return 0;
}
