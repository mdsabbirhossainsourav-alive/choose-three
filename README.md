# Problem Statement

You will be given an array A and the size of that array N. Additionally, you will be given a sum S. Your task is to determine whether it is possible to select three distinct indexed values from the array such that their summation equals S.

## Input Format

First line will contain T, the number of test cases.
First line of each test case will contain N and S.
Second line of each test case will contain the array A.
## Constraints

1 <= T <= 100

1 <= N <= 100

1 <= S <= 1000

1 <= A[i] <= 1000 Where 0 <= i < N

## Output Format

Output "YES" if it is possible, otherwise output "NO".
## Sample Input 

5

5 10

1 2 3 4 5

5 6

4 2 3 5 4

3 6

2 2 2

4 4

2 8 1 5

1 3

1
## Sample Output 

YES

NO

YES

NO
NO
