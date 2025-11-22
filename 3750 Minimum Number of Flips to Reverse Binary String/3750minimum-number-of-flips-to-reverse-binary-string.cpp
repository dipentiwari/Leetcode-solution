class Solution {
public:
    string decimal_to_binary(int n){
    	string result="";
    	while(n>0){
    		if(n%2==0){
    			result="0"+result;
    		}
    		else{
    			result="1"+result;
    		}
    		n=n/2;
    	}
    	return result;
    }
    int minimumFlips(int n) {
        int count=0;
        string r=decimal_to_binary(n);
        string t=r;
        reverse(t.begin(),t.end());
        for(int i=0;i<t.size();i++){
            if(r[i]!=t[i])  count++;
            
    }
        return count;
    }
};
    