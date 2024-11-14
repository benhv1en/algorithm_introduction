/*
    bài này viết thuật toán kiểm tra dãy số có đơn điệu tăng hay không

    yêu cầu độ phức tạp O(n)
*/
#include <iostream>
#include <vector>
using namespace std;
bool isIncreasing(vector<int> a)
{
    for (int i = 1; i < a.size(); ++i)
        if (a[i - 1] > a[i])
            return false;
    return true;
}
int main(int argc, char *argv[])
{
    vector<int> a = {1, 2, 2, 3, 4, 5, 6, 6, 6, 7, 8, 9};
    cout << isIncreasing(a) << endl;
    return 0;
}