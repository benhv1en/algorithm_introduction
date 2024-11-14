/*
    bài này viết hết tất cả thuật toán sort cơ bản
*/
#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int> &a)
{
    for (int i = 1; i < a.size(); ++i)
        for (int j = i; (j > 0) && (a[j] < a[j - 1]); --j)
            swap(a[j], a[j - 1]);
}
void selectionSort(vector<int> &a)
{
    for (int i = 0; i < a.size(); ++i)
    {
        int i_min_ = i, v_min_ = a[i];
        for (int j = i; j < a.size(); ++j)
            if (a[j] < v_min_)
            {
                i_min_ = j;
                v_min_ = a[j];
            }
        swap(a[i], a[i_min_]);
    }
}
void bubbleSort(vector<int> &a)
{
    for (int i = 0; i < a.size(); ++i)
        for (int j = 0; j < a.size() - i - 1; ++j)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
}
int main(int argc, char *argv[])
{
    vector<int> a = {4, 1, 5, 2, 7, 8, 0, 6};
    // insertionSort(a);
    // selectionSort(a);
    bubbleSort(a);
    for (int i = 0; i < a.size(); ++i)
        cout << a[i] << "\t";
    cout << endl;
    return 0;
}