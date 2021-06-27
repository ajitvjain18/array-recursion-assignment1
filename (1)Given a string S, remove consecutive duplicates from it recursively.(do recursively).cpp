#include<bits/stdc++.h>
#include<string>
using namespace std;

void removeduplicates(string s)
{
    if(s[0]=='\0') return;
    if(s[0]==s[1]){
        int i=0;
        while(s[i]!='\0'){
            s[i]=s[i+1];
            i++;
        }
        removeduplicates(s);
    }
    removeduplicates(s+1);
}

int main() {
    string s="aabccba";
    removeduplicates(s);
    cout<<s;
	return 0;
}