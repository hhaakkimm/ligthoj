#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <ctime>
#include <queue>
#include <map>

using namespace std;

//constants
const int MAXN=(int)(1e5+1e1);
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

int T,a[111],ans,n,pos[111];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> T;
	forr(1,T,ttt)
	{
		memset(a,0,101);
		memset(pos,0,101);
		cin >> n;
		ans = 0;
		forr(1,n,i)
		{
			cin >> a[i];
			pos[a[i]] = i;
		}
		forr(1,n,i){
        if(a[i] != i){
            a[pos[i]] = a[i];
            pos[a[i]] = pos[i];
            a[i] = i;
            ans++;
        }
    }
		cout<<"Case "<<ttt<<": "<<ans<<'\n';
	}
	return 0;
}
