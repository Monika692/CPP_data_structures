/*Assumption

m > 0 and n > 0
Sum lies within the integral range
 
Example

Input:
m = 6
n = 30

Output:
285

Integers divisible by 6 are 6, 12, 18, 24, and 30. Their sum is 90.
Integers that are not divisible by 6 are 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 25, 26, 27, 28, and 29. Their sum is 375.
The difference between them is 285 (375 – 90).
 
Sample input:
m = 3
n = 10

Sample output:
19
 

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cout << "Enter 2 numbers: ";
    cin >> m >> n;

    int sum_divisible = 0, sum_not_divisible = 0, diff = 0;

    for (int i = 1; i <= n; i++) {
        if (i % m == 0) {
            sum_divisible += i;
        } else {
            sum_not_divisible += i;
        }
    }

    diff = sum_not_divisible - sum_divisible;

    cout << "Integers divisible by " << m << " are: " << sum_divisible << endl;
    cout << "Integers not divisible by " << m << " are: " << sum_not_divisible << endl;
    cout << "The difference between them is: " << diff << endl;

    return 0;
}
