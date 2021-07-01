#include <bits/stdc++.h>
using namespace std;

int findingfreq(vector<int>&v,int x)
{
    int l=lower_bound(v.begin(),v.end(),x)-v.begin();
    int u=upper_bound(v.begin(),v.end(),x)-v.begin();
    return u-l;
}

int main() {
    vector<int>v{1,2,3,4,4,4,4,5};
    cout<<findingfreq(v,4);
    return 0;
}