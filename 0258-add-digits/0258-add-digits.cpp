class Solution {
public:
    int fun(int num){
        while(num >= 10){
            int sum = 0;
            while(num > 0){
                sum += num%10;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
  
    int addDigits(int num) {
        return fun(num);
    }
};