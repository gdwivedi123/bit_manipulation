#include <bits/stdc++.h>
using namespace std;

int countSetBitsTilln(int n)
{
    int sum = 0, i = 0, j;
    while((1 << i) <= n)
    {
        for(j = 0; j <= n; j++)
        {
            sum += ((int)(j / pow(2, i)) % 2 == 0) ? 0 : 1;
        }
        i++;
    }
    return sum;
}
int main()
{
   int n;
   cin >> n;
   cout << countSetBitsTilln(n) << endl;
   
   return 0;
} 