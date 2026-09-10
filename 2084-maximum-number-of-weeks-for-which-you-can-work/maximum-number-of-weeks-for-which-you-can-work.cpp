class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        long long sum = 0;
        long long mx = 0;

        for (long long x : milestones) {
            sum += x;
            mx = max(mx, x);
        }

        long long remaining = sum - mx;

        if (mx <= remaining + 1) {
            return sum;
        }

        return 2 * remaining + 1;
    }
};