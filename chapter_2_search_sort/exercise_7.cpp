/*
    1 thuật toán sắp xếp được gọi là "ổn định" nếu tồn tại a[i]==a[j], trước khi sắp xếp i<j thì sau khi sắp xếp i'<j'
    bài này modify selectionSort cho nó thành thuật toán ổn định
*/
#include <iostream>
#include <vector>
using namespace std;
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
        for (int k = i_min_; k > i; --k)
            swap(a[k], a[k - 1]);
    }
}
int main(int argc, char *argv[])
{
    vector<int> a = {4, 1, 5, 2, 7, 8, 0, 6};
    selectionSort(a);
    for (int i = 0; i < a.size(); ++i)
        cout << a[i] << "\t";
    cout << endl;
    return 0;
}
