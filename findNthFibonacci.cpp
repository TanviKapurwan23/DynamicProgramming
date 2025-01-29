class Solution
{
    public:
    //Function to find the nth fibonacci number using bottom-up approach.
    long long findNthFibonacci(int number)
    {
        // Your Code Here
        vector<long long> f(number + 1);
        
        f[0] = 0, f[1] = 1;
        
        for(int i=2; i<=number; i++){
            f[i] = f[i-1] + f[i-2];
        }
        return f[number];
    }
};
