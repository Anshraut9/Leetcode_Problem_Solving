class Solution {
public:
    bool isPrime(long long n){
    if(n < 2) return false;
    if(n % 2 == 0) return n == 2;
    if(n % 3 == 0) return n == 3;

    for(long long i = 5; i*i <= n; i += 6){
        if(n % i == 0 || n % (i+2) == 0)
            return false;
    }
    return true;
}
    bool completePrime(int num) {
        long long temp = num;
    while(temp > 0){
        if(!isPrime(temp)) return false;
        temp /= 10;
    }
    string s = to_string(num);
    long long prefix = 0;

    for(char c : s){
        prefix = prefix * 10 + (c - '0');
        if(!isPrime(prefix)) return false;
    }

    return true;
    }
};