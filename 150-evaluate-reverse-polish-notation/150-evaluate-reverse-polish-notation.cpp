class Solution {
public:
    int evalRPN(vector<string>& tokens) {
      	stack<int>st;
		int n=tokens.size();

		for(int i=0;i<n;i++){

			string x=tokens[i];

			if(x=="+" || x=="-" || x=="/" || x=="*"){
				long long int v1,v2,val;
				v2=st.top();
				st.pop();
				v1=st.top();
				st.pop();

				if(x=="+"){
					val=v1+v2;
				}
				else if(x=="-"){
					val=v1-v2;
				}
				else if(x=="*"){
					val=v1*v2;
				}
				else{
					val=v1/v2;
				}
				st.push(val);
			}
			else{
				st.push(stoi(tokens[i]));
			}
		}
		return st.top();
  
    }
};