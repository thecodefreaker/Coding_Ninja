#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,z,s,e=1,sum=0;
	cin>>n;
    cin>>z;
        if(z==1)
        {
int i;
	for(i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	cout << sum;
}
    else if(z==2){
        for(int i=1;i<=n;i++){
            e=e*i;
        }
        cout<<e;
    }
    else cout<<"-1";
}