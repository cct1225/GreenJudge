#include <iostream>  
using namespace std;
int main(){
    int A[101],n,back,num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       A[i]=0;
    }
    cin>>back;
    for(int j=0;j<back;j++)
    {  
        cin>>num;
        A[num-1]=1;
    }
    for(int a=0;a<n;a++)
    {
        if(A[a]==0) cout<<a+1<<" ";
    }
    




}