You can compute the LCM of more than two numbers by iteratively computing the LCM of two numbers, i.e.
lcm(a,b,c) = lcm(a,lcm(b,c))

Smallest divisible number 
Given a number n the task is to complete the function which returns an integer denoting the smallest number evenly divisible by each number from 1 to n.

Input:
The first line of input contains an integer T denoting the no of test cases then T test cases follow. Each line contains an integer N.

Output:
For each test case output will be in new line denoting the smallest number evenly divisible by each number from 1 to n.

Constraints:
1<=T<=50
1<=n<=25

Example(To be used only for expected output):
Input:
2
3 
6
Output:
6
60

long long lcm(long long p, long long q)
{
    return p*q/__gcd(p, q);
}

long long getSmallestDivNum(long long n)
{
    if(n==1)    // missed this, failed for n = 1
        return 1;
    long long temp = lcm(n, n-1);
    long long ans = temp /* missed this, failed for n = 2 */, i;
    for(i=n-2; i>0; --i)
    {
        ans = lcm(temp, i);
        temp = ans;
    }
    return ans;
}
