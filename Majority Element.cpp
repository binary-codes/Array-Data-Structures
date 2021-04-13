#include<bits/stdc++.h>
using namespace std;

void findMax(int ar[], int n){
   int maxcount=0,index=-1;
   for(int i=0;i<n;i++){
      int count=0;
	  for(int j=0;j<n;j++){
	     if(ar[i]==ar[j])
		   count++;
	  }
	  if(count>maxcount){
	     maxcount=count;
		 index=i;
		}
   }
   
   if(maxcount>n/2)
      cout<<"Majority element is: "<<ar[index]<<endl;
   else
      cout<<"There is  no as such element";
}

int main(){
	int n;
	cout<<"Enter size of the array: ";
	cin>>n;
	cout<<"\nEnter array elements: ";
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	findMax(ar,n);
}
