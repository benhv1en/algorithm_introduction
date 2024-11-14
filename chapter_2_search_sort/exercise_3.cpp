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
    {
        if (a[i] == K)
        {
            for (int j = i; j > 0; --j)
            {
                swap(a[j], a[j - 1]);
            }
        }
    }
}
int main(int argc, char *argv[])
{
    vector<int> a = {1, 2, 3, 2, 4, 2, 6, 5, 4, 8, 6, 9};
    moveToFront(a, 6);
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    return 0;
}