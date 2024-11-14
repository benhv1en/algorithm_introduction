/*
    bài này viết thuật toán linearsearch trả về hết các indices mà nó tìm thấy
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> linearSearch(vector<int> a, const int &K)
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
    vector<int> a = {1, 2, 3, 2, 4, 2, 6, 5, 4, 8, 6, 9};
    vector<int> indices = linearSearch(a, 6);
    for (int i = 0; i < indices.size(); ++i)
        cout << indices[i] << "\t";
    cout << endl;
    return 0;
}