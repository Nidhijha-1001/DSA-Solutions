class Solution {
public:
static const long long modul = 1e9 + 7;
long long power(long long x, long long n) {

        if(n == 0)
            return 1;

        long long h = power(x, n / 2);

        if(n % 2 == 0)
            return h * h % modul;
        else
            return h * h % modul * x % modul;
    }

    int countGoodNumbers(long long n) {
       long long even = (n + 1) / 2;
        long long odd = n / 2;

        return power(5, even) * power(4, odd) % modul;
    }
};