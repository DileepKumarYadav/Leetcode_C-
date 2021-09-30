#include<bits/stdc++.h>
using namespace std;

vector<string> reverseword(string str)
{
    stack<string> st;
    vector<string> vs;
   
    for(int i=0;i<str.length();i++)
    {

         string w="";
        while(str[i]!=' ' && i<str.length())
        {
            w+=str[i];
            i++;
        }

        st.push(w);
    }

     while(!st.empty())
     {
          vs.push_back(st.top());
          st.pop();  
     }
    

    return vs;
}

int main()
{

    string str="Hi, how are you doing";
    vector<string> vt;
    vt=reverseword(str);
    for(auto it: vt)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}