(A + B) mod C = (A mod C + B mod C) mod C

Addition Under Modulo 
You are given two numbers a and b. You need to find the sum of a and b under modulo M.
Note: Take M as 109+7

Input:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains one line of input containing a and b.

Output:
For each testcase, in a new line, print sum of a and b under modulo M.

Your Task:
This is a function problem. You need to complete the function sumUnderModulo that takes a and b as parameters and returns sum of a and b under modulo M.

Note : Solve the problem in Constant time and space ccomplexity.

Constraints:
1 <= T <= 105
1 <= a,b <= 263-1

Examples:
Input:
2
9223372036854775807 9223372036854775807
1000000007 1000000007
Output:
582344006
0

int sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    return (a%M+b%M)%M;
}
