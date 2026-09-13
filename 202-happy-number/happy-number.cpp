class Solution {
public:
    int SumOfSquare(int n) {
        int sum = 0;
        while (n != 0) {
            int x = n % 10;
            sum += x * x;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = SumOfSquare(n);
        int fast = SumOfSquare(SumOfSquare(n));

        while (slow != fast) {
            slow = SumOfSquare(slow);
            fast = SumOfSquare(SumOfSquare(fast));
        }

        return slow == 1;
    }
};