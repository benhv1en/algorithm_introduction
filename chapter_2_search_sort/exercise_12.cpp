/*
    bài này chỉ đơn giản là chép pseudocode trong sách
*/
#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int> &a)
{
    for (int i = 1; i < a.size(); ++i)
    {
        int key = a[i];
        int j = i;
        while ((j > 0) && (a[j - 1] > key))
        {
            a[j] = a[j - 1];
            j = j - 1;
        }
        a[j] = key;
    }
}
int main(int argc, char *argv[])
{
    vector<int> a = {4, 1, 5, 2, 7, 8, 0, 6};
    insertionSort(a);
    for (int i = 0; i < a.size(); ++i)
        cout << a[i] << "\t";
    cout << endl;
    return 0;
}