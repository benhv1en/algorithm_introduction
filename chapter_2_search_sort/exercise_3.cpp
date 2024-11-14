/*
    thuật toàn linearsearch nhưng mà movetofront
*/
#include <iostream>
#include <vector>
using namespace std;
void moveToFront(vector<int> &a, const int &K)
{
    int n = a.size();
    for (int i = 0; i < n; ++i)
        if (a[i] == K)
            for (int j = i; j > 0; --j)
                swap(a[j], a[j - 1]);
}
int main(int argc, char *argv[])
{
    vector<int> a = {4, 1, 5, 2, 7, 8, 0, 6};
    moveToFront(a, 6);
    for (int i = 0; i < a.size(); ++i)
        cout << a[i] << "\t";
    cout << endl;
    return 0;
}
