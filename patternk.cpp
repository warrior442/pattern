#include<iostream>
  
using namespace std;

int main(){
 
int i=1;
int n;
cin>>n;
char ch='A';
char count=ch;
              //no need for extra variable
while (i<=n)
{
    int j=1;
    while(j<=n){
      cout<<count<<" ";
      count=count+1;
    j=j+1;
}
cout<<endl;
i=i+1;






}
return 0;
}