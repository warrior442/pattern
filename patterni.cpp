#include<iostream>
  
using namespace std;

int main(){
 
int i=1;
int n;
cin>>n;

while (i<=n)
{
    int j=1;
    while(j<=n){
                                //form
    char ch='A'+i-1;
    cout<< ch;
    j=j+1;
}
cout<<endl;
i=i+1;






}
return 0;
}