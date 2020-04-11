#include <bits/stdc++.h>
using namespace std;

void generate_subarray(vector<int> arr)
{
    int i, j, n = arr.size();
    vector<vector<int>> result;
    for(i = 1; i < pow(2, n); i++)
    {
        vector<int> vec;
        for(j = 0; j < n; j++)
        {
            if((i >> j) & 1)
            {
                vec.push_back(arr[j]);
            }
        }
        result.push_back(vec);
    }
    cout << "Array of subarrays is : \n";
    int count = 0;
    for(auto v : result)
    {
        cout << count++ <<" : " ;
        for(auto i : v)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main()
{
   int i, n;
   cin >> n;
   vector<int> arr(n);
   for(i = 0; i < n; i++)
   {
       cin >> arr[i];
   }
   generate_subarray(arr);
   return 0;
} 