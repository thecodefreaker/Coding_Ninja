#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int z,x,count=1;
    cin>>x;
	for(int i=1;i<=1000;i++)
    {   if(count<=x){
        z=3*i+2;
        if(z%4!=0){
            cout<<z<<" ";
            count++;
        }}
     else break;
    } return 0;
}
