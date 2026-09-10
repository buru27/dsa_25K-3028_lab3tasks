    // Pass 1 45 12 78 34 23 90
    // Pass 2 12 45 34 23 78 90
    // Pass 3 12 34 23 45 78 90
    // Pass 4 12 23 34 45 78 90
    // Pass 5 12 23 34 45 78 90
    // Total passes = 5
    // Total comparisons = 15
    // Total swaps = 6


#include <iostream>
using namespace std;

int main()
{
    int arr[] = {45, 12, 78, 34, 23, 90};
    int n = 6;

    int comparisons = 0;
    int swaps = 0;



    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            comparisons++;

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swaps++;
            }
        }

        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    cout << "Total Comparisons: " << comparisons << endl;
    cout << "Total Swaps: " << swaps << endl;

    return 0;
}
