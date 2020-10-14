#include<iostream>
#include <stack>
using namespace std;

int performOperation(char c,int op1,int op2){
    if(c=='+') return op1+op2;
    else if(c=='-') return op1-op2;
    else if(c=='*') return op1*op2;
    else return op1/op2;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    stack<int>st;
	    cin>>s;
	    //Main Logic
	    for(int i=0;i<s.length();i++){
	        //'0' is 48
	        //character gets converted to decimal value
	        //if s[i]=2 which evaluates to 50
	        //so s[i]-'0' in decimal value gives 50-48 == 2
	        if(isdigit(s[i])) st.push((s[i]-'0'));
	        else{
	            int op2=st.top();
	            st.pop();
	            int op1=st.top();
	            st.pop();
	            int res=performOperation(s[i],op1,op2);
	            st.push(res);
	        }
	    }
	    cout<<(st.top())<<endl;
	}
	return 0;
}