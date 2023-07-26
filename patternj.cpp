#include<iostream>
  
using namespace std;

int main(){
 
int i=1;
int n;
cin>>n;

while (i<=n)
{                                   // here you can store 'A' value in variable normal sum
    int j=1;                                  
      //    declare ch value inside fist loop
    while(j<=n){                                  
        char ch='A'+j-1;
        cout<<ch<<"";
    
    
    j=j+1;
}
cout<<endl;
i=i+1;






}
return 0;
}