#include<bits/stdc++.h>
using namespace std;

stack<int> reversestack(stack<int> st)
{
    stack<int> rs;

    while(!st.empty())
    {
        rs.push(st.top());
        st.pop();
    }

    return rs;
}

int main()
{

    stack<int> st;
    for(int i=1;i<=5;i++)
    {
        st.push(i);
    }

    stack<int> st1;

    st1=reversestack(st);

    while(!st1.empty())
    {
        cout<<st1.top()<<" ";
        st1.pop();
    }
    cout<<endl;
    return 0;
}