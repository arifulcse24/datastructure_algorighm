#include<bits/stdc++.h>
using namespace std;

void bobul_sort(int ara[],int n)
{
    int temp;
    for(int i=0; i<n; i++) {
        for(int j = 0; j<n-i-1; j++) {
            if(ara[j]>ara[j+1]) {
                temp = ara[j];
                ara[j]=ara[j+1];
                ara[j+1] = temp;
            }
        }
    }
}
int main()
{
    int ara[100],n;
    cin>>n;
    for(int i = 0; i<n; i++) {
        cin>>ara[i];
    }
    bobul_sort(ara,n);
    for(int i = 0; i<n; i++){
        cout<<ara[i]<<endl;
    }
    return 0;
}

