#include<bits/stdc++.h>
using namespace std;
void selection_sort(int ar[],int size){
	for(int i=0;i<size;i++)
	{
		int mn=ar[i];
		int ind=i;
		for(int j=i+1;j<size;j++)
		{
			if(ar[j]<mn)
			{ 
				mn=ar[j]; 
				ind=j;
			}
		}
		swap(ar[i],ar[ind]);
	}
}
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){ cin>>ar[i]; }
	selection_sort(ar,n);
	for(int i=0;i<n;i++){ cout<<ar[i]<<" "; }
}