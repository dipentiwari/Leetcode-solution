class Solution {
public:

    int reverseBits(int n) {
        string result="";
    while(result.size() < 32){
        if(n%2==0)
        result='0'+result;
        else
        result='1'+result;
        n/=2;
    }

    string binary=result;
    long long num=binary.size();
    reverse(binary.begin(),binary.end());
        unsigned int val=0;

        for(int i=num-1;i>=0;i--){
            char ch=binary[i];
            long long x=ch-'0';
            val=val+x*(1<<num-i-1);
        }
        

        return val;



    }
};