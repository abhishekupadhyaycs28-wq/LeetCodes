class Solution {
public:
    int getSum(int a, int b) {

        int new_carry = b;
        int sum = a;
        int carry = 0;

        while(new_carry != 0) {
            
            carry=sum&new_carry;
            sum = sum^new_carry;
            new_carry = carry<<1;
            
            }

        return sum;
        
        }

};