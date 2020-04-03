void printDuplicates(int arr[], int n)
{
    int c = 1;
    for(int i = 0; i < n; i++)
    {
        int ind = arr[i] % n;
        arr[ind] += n;
        if(arr[ind]/n == 2)
        {
            cout << ind << " ";
            c = 0;
        }
    }
    if(c)
        cout << "-1";
}

//Find Missing Positive No

ll fun(vector<int> &arr,ll n)
{
    ll j=0;
    for(ll i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return j;
}
    int firstMissingPositive(vector<int>& arr) {
        
       ll n=arr.size();
       ll cnt=fun(arr,n);
        if(n==0)    return 1;
       for(ll i=0;i<cnt;i++)
       {
           if(abs(arr[i])-1 <n && arr[abs(arr[i])-1]>0)
                arr[abs(arr[i])-1] = -arr[abs(arr[i])-1]; 
       }
        
       int ans=cnt+1;
       for(int i=0;i<cnt;i++)
            if(arr[i]>=0)
            {
                ans=i+1;
                break;
            }
    return ans;
    }