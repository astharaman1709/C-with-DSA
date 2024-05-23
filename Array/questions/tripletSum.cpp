#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int>arr{10, 20, 30, 40};
    int sum = 80;
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            int element1 = arr[j];

            for (int k = j + 1; k < arr.size(); k++)
            {
                int element2 = arr[k];
                if (element + element1 + element2 == sum)
                {
                    cout << element << "," << element1 << "," << element2 << endl;
                }
            }
        }
        return 0;
    }
}