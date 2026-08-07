class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int> pre(n+1);
        vector<int> suf(n+1);
        pre[0]=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(customers[i]=='N') count++;
            pre[i+1]=count;
        }
        count=0;
        suf[n]=0;
        for(int i=n-1;i>=0;i--){
            if(customers[i]=='Y') count++;
            suf[i]=count;
        }
        int minpen=n;
        for(int i=0;i<=n;i++){
            pre[i]+=suf[i];
            int pen=pre[i];
            minpen=min(pen,minpen);
        }
        for(int i=0;i<=n;i++){
            int pen=pre[i];
            if(pen==minpen) return i;
        }
        return n;
    }
};