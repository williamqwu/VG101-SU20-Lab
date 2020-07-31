# VG101-SU20 Mid2 Ex4
*TA in charge: SHX*

Total score: 15
Testcase score: 2
Total count of testcases: 7
Partial credits: 3,5,7,10,12,15

Cases Design:
1. Case0: Sample
2. Case1: f(x)=0
3. case2: f(x)=-5
4. case3: f(x)=3x
5. Case4: f(x)=-2x^2+9
6. Case5: f(x)=x^5-x^4+x^3-x^2+x
7. Case6: f(x)=-x^2+x+3

Cases Explanation: 
1. Case 1 is a check for boundary value.
2. Case 2,3 is a check for incorrectly taking minus part into consideration.
3. Case 5 is check for consider n = 5.
4. The rest is general cases.

Accuracy:
1. The same with std: 100%
2. +-1 with std: 100%
3. +-2+20% with std: 70%
4. Other will be considered as totally incorrect.

Notes:
1. Getting 100% accuracy on JOJ for all cases will get full mark.
2. Getting 100% accuracy on JOJ for almost cases and only one case has a large deviation will get 7~12 Mark. (Given on how accurate the result is)
3. Partial Credit Deduction can cause 3 points or more on the basis of testcases score.
4. Compile error, run time error, incorrect submission format are currently given 0 point. However, arguing is accepted. 
5. For those output specific value like 6 or 0, earn no points even if passing some cases. 
6. No output is given 0 point.

Possible Partial Credit Deduction includes: -3~5 points each
1. Consider y<0 part.
2. No using rand() (If pass the testcases, then never mind.)
3. Get incorrect coefficient, e.g. someone's input function can't get minus coefficient.
4. Incorrect range scale (+-1 is acceptable).
5. Can only due with limited situation (e.g. n=4).
