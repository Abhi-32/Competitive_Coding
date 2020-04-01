#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
void sol(vector<int> &v)
{
	for(int i=0;i<10;i++)
	{
		v[i]+=20;
	}
}
int main()
{
	vector<int> v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}
	sol(v);
	for(int x: v)
		printf("%d  ",x);
	printf("\n");
}