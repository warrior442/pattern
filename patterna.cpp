#include<iostream>
  
using namespace std;

int main(){
 
int i=1;
int n;
cin>>n;

while (i<=n)
{                               // here j=i; then it will print downward
    int j=1; 
    while(j<=n){      
    
    cout<<i;
    j=j+1;
}
cout<<endl;
i=i+1;





}
}