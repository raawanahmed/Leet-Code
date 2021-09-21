class Solution {
public:
    string getPermutation(int n, int k) {
        string s = "";
        for(int i = 1; i <= n; i++){
            s+=(i + '0');
        }
        int i = 0;
        do{
            i++;
            if (i == k){
                return s;
                break;
            }
            
        }while(next_permutation(s.begin(), s.end()));

        return s;
    }
};