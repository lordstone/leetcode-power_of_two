class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        int count = 0;
        int tmp = n;
        while(tmp | 0 != 0){
            count += tmp & 1;
            tmp = tmp >> 1;
        }
        return count == 1 ? true:false;
    }
};
