
#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        
        if(x<=-2147483648||x>=2147483647)
        {
            return 0;
        }
        
        long int sum=0;
        
        if(x>0)
        {
        while(x>0)
        {
            sum=sum*10;
             
        if(sum<=-2147483648||sum>=2147483647)
        {
            return 0;
        }
            sum=sum+(x%10);
            x=x/10;
            
        }
            
        }
        
        else
        {
            x=x*(-1);
            
            while(x>0)
            { 
                sum=sum*10;
        if(sum<=-2147483648||sum>=2147483647)
        {
            return 0;
        }
            sum=sum+(x%10);
            x=x/10;
            
        }
            sum=sum*(-1);
        }
        return (int)sum;
        
        
    }
};

int main()
{
    int n;
    cin>>n;
    Solution ob1;
   cout<<ob1.reverse(n)<<endl;
return 0;
}