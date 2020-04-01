#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int mod = 1000000007;
//const int m=1e9+7;
int t,n,m,k,x,y,a,b;
void inpt(vector<pair<ll,ll>> &v1,vector<pair<ll,ll>> &v2,vector<pair<ll,ll>> &v3)
{
	for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			v1.pb({a,b});
		}
		for(int i=0;i<m;i++)
		{
			cin>>a>>b;
			v2.pb({a,b});
		}
		for(int i=0;i<k;i++)
		{
			cin>>a>>b;
			v3.pb({a,b});
		};
}
double dis(ll x1,ll y1,ll x2,ll y2)
{
	ll a =(x1-x2)*(x1-x2);
	ll b=(y1-y2)*(y1-y2);
	return sqrt(a+b);
}

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>n>>m>>k;
		vector<pair<ll,ll>> v1,v2,v3;
		inpt(v1,v2,v3);
		double mn=DBL_MAX,d,d1,d2,d3,d4;


		for(int i=0;i<n;i++)
		{
			d1=dis(x,y,v1[i].first,v1[i].second);
			if(d1<mn)
			{
				for(int j=0;j<m;j++)
				{
					d2=dis(v1[i].first,v1[i].second,v2[j].first,v2[j].second);
					if(d1+d2<mn)
					{
						for(int p=0;p<k;p++)
						{
							d3=dis(v2[j].first,v2[j].second,v3[p].first,v3[p].second);
							mn=min(mn,d1+d2+d3);
						}
					}
				}
			}
		}


		for(int i=0;i<m;i++)
		{
			d1=dis(x,y,v2[i].first,v2[i].second);
			if(d1<mn)
			{
				for(int j=0;j<n;j++)
				{
					d2=dis(v2[i].first,v2[i].second,v1[j].first,v1[j].second);
					if(d1+d2<mn)
					{
						for(int p=0;p<k;p++)
						{
							d3=dis(v1[j].first,v1[j].second,v3[p].first,v3[p].second);
							mn=min(mn,d1+d2+d3);
						}
					}
				}
			}
		}
		cout<<setprecision(11)<<mn<<"\n";
	}
}