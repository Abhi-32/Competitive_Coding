#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool customSort(vector<int> a, vector<int> b){
    if(a[1] > b[1])
        return true;
    if(a[1] == b[1])
        return a[2] < b[2];
    return false;
}

int main(){
    int n, c, x, pos=1;
    map<int, int> count, position;
    vector< vector<int> > result;

    scanf("%d%d", &n, &c);

    for(int i=0;i<n;i++){
        scanf("%d", &x);
         count[x]++;

        if(position[x] == 0)
            position[x] = pos++;
    }

    for(map<int, int>::iterator it = count.begin();it != count.end();it++){
        vector<int> tmp;
        tmp.clear();
        tmp.push_back(it->first);
        tmp.push_back(it->second);
        tmp.push_back(position[it->first]);
        result.push_back(tmp);
    }

    sort(result.begin(), result.end(), customSort);

    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i][1];j++)
            printf("%d ", result[i][0]);
    }

    return 0;
}