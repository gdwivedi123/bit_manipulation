#include <bits/stdc++.h>
using namespace std;

int swapBitsfromTwoPositions(int N, int p1, int p2, int num)
{
    int k = 1, t1, t2;
    while(k <= num)
    {
        t1 = 1 << (p1 + k - 1);
        t2 = 1 << (p2 + k - 1);
        if((((N & t1) > 0 ? 1 : 0) ^ ((N & t2) > 0 ? 1 : 0)))
        {
            N ^= t1;
            N ^= t2;
        }
        k++;
    }
    return N;
}
int main()
{
   int N, p1, p2, num;
   cin >> N >> p1 >> p2 >> num;
   cout << swapBitsfromTwoPositions(N, p1, p2, num) << endl;
   
   return 0;
} 