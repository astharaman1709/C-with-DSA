#include <iostream>
#include <vector>
using namespace std;

int NearlyBinary(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)

            return arr[mid];

        if (mid-1>=0 && arr[mid - 1] == target)

            return arr[mid - 1];

        if (mid+1<=arr.size() &&arr[mid + 1] == target)

            return arr[mid + 1];

        if (target > arr[mid])
        {
            // right search
            s = mid + 2;
        }
        else
        {
            // left
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 50;

    int ans = NearlyBinary(arr, target);
    cout << "index of " << target << " is " << ans << endl;
    return 0;
}