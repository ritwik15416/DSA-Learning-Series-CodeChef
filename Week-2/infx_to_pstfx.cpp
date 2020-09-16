#include <iostream>
#include<stack>
#include<string>
using namespace std;
int prec(char c){
  if(c=='^'){
      return 3;
  }else if(c=='*' || c=='/'){
      return 2;
  }else if(c=='+' || c=='-'){
      return 1;
  }else{
      return 0;
  }
};
int main() {
	// your code goes here
	stack<char> s;
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string st,ns="";
	    cin >> st;
	    for(int i=0;i<n;++i){
	        if((st[i]>='a' && st[i]<='z')||(st[i]>='A' && st[i]<='Z')){
	            ns += st[i];
	        }
	        else if(st[i]=='('){
	            s.push(st[i]);
	        }
	        else if(st[i]==')'){
	            while((s.empty()==false)&&(s.top()!='(')){
	                char tmp = s.top();
	                ns += tmp;
	                s.pop();
	            }
	            if(s.top()=='('){
	                char tmp = s.top();
	                s.pop();
	            
	        }
	        }
	        else{
	            while((s.empty()==false)&&(prec(st[i])<=prec(s.top()))){
	                char tmp = s.top();
	                ns += tmp;
	                s.pop();
	            }
	            s.push(st[i]);
	        }
	    }
	    while(s.empty()==false){
	        char tmp = s.top();
	        ns += tmp;
	        s.pop();
	    }
	    cout << ns << endl; 
	}
    return 0;
}
