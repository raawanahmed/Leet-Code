class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int i = 0; i < 32; i++ ) {
           
            // left shift ans add 0 bit to right
            ans <<= 1;
            // make the first bit in ans from left same as first bit in n from right
            ans |= (n & 1);
            // right shift n remove rightmost bit
            n >>= 1;                 

        }
        return ans;
    }
};