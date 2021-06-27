#include <bits/stdc++.h>
using namespace std;

int contiguoussubarray(int arr[],int size)
{
    int maxsofar=0;
    int maxendinghere=0;
    for(int i=0;i<size;i++)
    {
        maxendinghere=maxendinghere+arr[i];
        maxendinghere=max(maxendinghere,0);
        maxsofar=max(maxsofar,maxendinghere);
    }
    return maxsofar;
    
}

int main() {
    int arr[]={1,2,3,-2,5};
    int size=sizeof(arr)/sizeof(int);
    cout<<contiguoussubarray(arr,size);
	return 0;
}