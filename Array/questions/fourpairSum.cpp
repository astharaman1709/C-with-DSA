#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int>arr{10, 20, 30, 40,70,20,60};
    int sum = 130;
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            int element1 = arr[j];

            for (int k = j + 1; k < arr.size(); k++)
            {
                int element2 = arr[k];
              for (int p = k + 1; p < arr.size(); p++)
            {
                int element3 = arr[p];
               if (element+element1+element2+element3==sum)
               {
                cout<<element<<","<<element1<<","<<element2<<","<<element3<<endl;
               }
               
            } 
            }
        }
        return 0;
    }
}