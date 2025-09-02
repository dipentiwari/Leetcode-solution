class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        // int n=time.size();
        // int count=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){

        //         if((time[i]+time[j])%60==0)
        //         count++;

        //     }

        // }
        // return count;




        unordered_map<int,long> m;
        int n=time.size();
        for(int i=0;i<n;i++){
            time[i]=time[i]%60;
            m[time[i]]+=1;
            }
            int count=0;
            for(auto it:m){
                if(it.first==0 or it.first==30)
                count+=((it.second-1)*(it.second))/2;
                else if(it.first<30 and m.count(60-it.first))
                count+=(m[it.first]*m[60-it.first]);

            }
            return count;
    }
};