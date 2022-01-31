#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> hash_table(256, 0);
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        hash_table[s[i]]++;
    }
    int max_count = 0;
    char ans;
    for (int i = 0; i < 256; i++)
    {
        if (hash_table[i] > max_count)
        {
            max_count = hash_table[i];
            ans = i;
        }
    }
    cout <<"Maximum occurring character is "<< ans << endl;
    return 0;
}
