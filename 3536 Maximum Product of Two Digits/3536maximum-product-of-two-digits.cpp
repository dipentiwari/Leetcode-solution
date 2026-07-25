class Solution {
public:
    int maxProduct(int n) {
        string a=to_string(n);
        sort(a.begin(),a.end());
        int x=stoi(a);
        int rem=x%10;
        x=x/10;
        int val=x%10;
        int mul=val*rem;

        return mul;;
    }
};