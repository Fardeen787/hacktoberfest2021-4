#include<bits/stdc++.h>
using namespace std;
int prefixExp(string s)
{
    stack<int> st;
   for(int i=s.length()-1;i>=0;i--)
   {

    if(s[i]>='0' && s[i]<='9')
    {
        st.push(s[i]-'0');

    }
    else
    {
        int operand1=st.top();
        st.pop();
        int operand2=st.top();
        st.pop();
        if(s[i]=='+')
        {
            st.push(operand1+operand2);
        }
        else if(s[i]=='-')
        {
            st.push(operand1-operand2);
        }
        else if(s[i]=='/')
        {
            st.push(operand1/operand2);
        }
        else if(s[i]=='*')
        {
            st.push(operand1*operand2);
        }
    }
   }
   return st.top();
}


int main()
{
    cout<<prefixExp("-+7*45+20")<<endl;
    return 0;
}
