#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int mod = 1e9+7;
ll mx;
struct node{
	ll val;
	struct node *left,*right;
};
typedef struct node node;
void insert(node *&root,ll x)
{
	if(root==NULL)
	{
		//printf("%lld\n",x );
		node *p=(node *)malloc(sizeof(node));
		p->val=x;
		p->left=p->right=NULL;
		root=p;
	}
	else if(x>root->val)
		insert(root->right,x);
	else
		insert(root->left,x);
	
}
void inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%lld  ",root->val);
		inorder(root->right);
	}
}
ll dia(node *root)
{
	if(root==NULL)	return 0;
	ll lh=dia(root->left);
	ll rh=dia(root->right);
	mx=max(mx,lh+rh+1);
	return 1+max(lh,rh);
}
int main()
{
	node *root=NULL;
	ll n,x;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		insert(root,x);
	}
	dia(root);
	cout<<mx;
}