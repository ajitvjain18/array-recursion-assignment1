#include <bits/stdc++.h>
using namespace std;

int removeduplicates(int arr[],int size)
{
    int result=1;
    for(int i=1;i<size;i++)
    {
        if(arr[result-1]!=arr[i])
        {
            arr[result]=arr[i];
            result;
        }
    }
    return result;
}

int main() {
    int arr[]={2,2,2,2,2};
    int size=5;
    size=removeduplicates(arr,size);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<' ';
	return 0;
}