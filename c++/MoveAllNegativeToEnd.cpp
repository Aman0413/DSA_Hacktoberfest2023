#include <iostream>

using namespace std;

void moveToEnd(vector<int> &arr)
{
    int i = 0;
    int j = arr.size() - 1;

    while (i < j)
    {
        if (arr[j] > 0 && arr[i] < 0)
        {
            swap(arr[j], arr[i]);
            i++;
            j--;
        }
        if (arr[i] > 0)
        {
            i++;
        }
        if (arr[j] < 0)
        {
            j--;
        }
    }
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(-1);
    arr.push_back(3);
    arr.push_back(-7);
    arr.push_back(-5);
    arr.push_back(2);

    moveToEnd(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
