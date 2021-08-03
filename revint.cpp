#include<bits/stdc++.h>
using namespace std;
class Num{
	public:
		int revnum(int n){
		int m=0;
		while(n>=1){
		m=m*10+n%10;
		n=n/10;
}
return m;
		}
};
int main(){
int n;
cin>>n;
Num st;
cout<<"rev no="<<st.revnum(n);
return 0;
}
