void show(Node *root,int &cnt,int d)
{
    if(root==NULL) return;
    if(cnt==d)
        printf("%d ",root->data),cnt++;
    show(root->right,cnt,d+1);
    show(root->left,cnt,d+1);
}
show(root,0,0);