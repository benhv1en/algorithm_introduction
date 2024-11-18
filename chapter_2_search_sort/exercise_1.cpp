/*
    bài này viết thuật toán linearsearch trả về hết các indices mà nó tìm thấy
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> linearSearch(const vector<int> &a, const int &K)
{
    vector<int> indices;
    int n = a.size();
    for (int i = 0; i < n; ++i)
        if (a[i] == K)
            indices.push_back(i);
    return indices;
}
int main(int argc, char *argv[])
{
    vector<int> a = {4, 1, 5, 2, 7, 8, 0, 6};
    vector<int> indices = linearSearch(a, 6);
    for (int i = 0; i < indices.size(); ++i)
        cout << indices[i] << "\t";
    cout << endl;
    return 0;
}
