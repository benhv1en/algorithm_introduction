/*
    bài này nhập 2 xâu T và P, trả về tất cả các phần từ của T chứa P
*/
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
vector<int> stringMatch(string T, string P)
{
    vector<int> indices;
    int n = T.size(), m = P.size();
    for (int k = 0; k <= n - m; ++k)
    {
        int j = 0;
        while ((j < m) && (T[k + j] == P[j]))
            j = j + 1;
        if (j == m)
            indices.push_back(k);
    }
    return indices;
}
int main(int argc, char *argv[])
{
    string T = "abaababacbbcaa", P = "abac";
    vector<int> indices = stringMatch(T, P);
    for (int i = 0; i < indices.size(); ++i)
        cout << indices[i] << "\t";
    cout << endl;
    return 0;
}
