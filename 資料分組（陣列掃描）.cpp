#include <iostream>  
using namespace std;
int main(){
    int A[1001],i,j,n,compare,max=0,min=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    cin>>compare;
    for(i=0;i<n;i++){
        if(A[i]>compare)   max++; 
        else    min++;
    }
    cout<<max<<endl<<min;
    return 0;

}