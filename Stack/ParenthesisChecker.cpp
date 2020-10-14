#include<iostream>
#include<stack>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--){
        stack<char>St;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[') St.push(s[i]);
            else if(!St.empty()&&s[i]==')'&&St.top()=='(') St.pop();
            else if(!St.empty()&&s[i]=='}'&&St.top()=='{') St.pop();
            else if(!St.empty()&&s[i]==']'&&St.top()=='[') St.pop();
            else St.push(s[i]);
        }
        if(St.empty()) cout<<"balanced"<<endl;
        else cout<<"not balanced"<<endl;
    }
}