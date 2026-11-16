
class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> res(100 , 0 );

        for (int i = lowLimit; i <= highLimit; i++) {

            int sum = 0;
            int num = i;

            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }

            res[sum]++;
        }

        sort(res.begin(), res.end());

        return res[res.size() - 1];
    }
};
