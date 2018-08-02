#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int ara[],int n)
{
    int i,j,item;
    for(int i = 1;i < n; i++) {
        item = ara[i];
        j  = i-1;
        while(j >= 0 && ara[j] > item){
            ara[j+1] = ara[j];
            j--;
        }
        ara[j+1] = item;
    }
}
int main()
{
    int n,ara[100];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    insertion_sort(ara,n);
    for(int i = 0; i<n; i++) {
        cout<<ara[i]<<endl;
    }
    return 0;
}
