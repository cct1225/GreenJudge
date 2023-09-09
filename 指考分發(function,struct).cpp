#include <iostream>  
#include <algorithm>  
using namespace std;  
  
struct Student{  
      
    int id,sum,math;          
};  
  
int cmp(Student a, Student b)  
{  
    if(a.sum>b.sum)  return 1;  
    if(a.sum==b.sum&&a.math>b.math)  return 1;  
    return 0;  
}  
  
int main()  
{  
    int n,chi,eng,phy,chem,i;  
    Student stu[101];  
    cin>>n;  
    for(i=0;i<n;i++)  
    {  
        cin>>stu[i].id>>chi>>eng>>stu[i].math>>phy>>chem;  
        stu[i].sum=chi+eng+stu[i].math+phy+chem;  
    }  
    sort(stu,stu+n,cmp);  
    for(i=0;i<n;i++)  
    {  
        cout<<stu[i].id<<endl;  
    }  
    return 0;  
}  