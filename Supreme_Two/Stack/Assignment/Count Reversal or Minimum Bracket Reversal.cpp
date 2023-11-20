
int countRev (string s)
{
    if(s.length()%2){
        return -1;
    }
    stack<char> st ;
    int i=0;
    while(i<s.length()){
        if(st.empty()){
            st.push(s[i]);
            i++;
        }
        else if( (st.top()=='{' & s[i]=='}') ){
            st.pop();
            i++;
        }
        else{
            st.push(s[i]);
            i++;
        }
    } 
    int ans =0;
    while(!st.empty()){
        char a = st.top(); st.pop();
        char b = st.top();st.pop();
        if(a==b){
            ans+=1;
        }else{
            ans+=2;
        }
    }
    return ans;
}