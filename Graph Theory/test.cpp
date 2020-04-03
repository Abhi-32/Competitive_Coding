#include <bits/stdc++.h>
 
using namespace std;
 
struct tree {
    long long data;
    struct tree *left, *right;
};
long long diameter;
struct tree * Insert(struct tree * top, long long data)
{
    if(top == NULL){
        top = (struct tree *)malloc(sizeof(struct tree));
        top->data = data;
    //    top->left = NULL;
        top->right = NULL;
    //    cout<<top->data<<" ";
        return top;
    }
    if(top->data >= data)
    {
         top->left = Insert(top->left, data);
    } else {
         top->right = Insert(top->right, data);
    }
    return top;
}
 
long long Diameter(struct tree *top)
{
    if(top == NULL)
    {
        return -1;
    }
    
    long long left = Diameter(top->left);
    long long right = Diameter(top->right);
   //  cout<<diameter<<" ";
    diameter = max(diameter,left+1 + right+1);
   // cout<<diameter<<" ";
    return max(left+1, right+1);
}
 
void Display(struct tree *top)
{
    if(top == NULL) return;
    
    Display(top->left);
    cout<<top->data<<" ";
    Display(top->right);
}
int main()
{
    long long a, n;
    
    diameter = 0;
    
    cin>>n;
    struct tree * top = NULL;
    for(long long i = 0; i < n ; i++)
    {
        cin>>a;
        top = Insert(top, a);
    }
    //Display(top);
    
    Diameter(top);
    cout<<diameter+1;
}