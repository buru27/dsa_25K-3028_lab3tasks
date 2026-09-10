#include <iostream>
using namespace std;

int main()
{
    int arr[] = {55, 61, 67, 72, 78, 81, 80, 85};
    int n = 8;

    int comparisons = 0;
    int swaps = 0;
    int passes = 0;

    // Array  sorted after pass 2
    // Total comparisons before endihng are 13
    // Total swaps are 1
    //  bubble srt would perform 7 passes
    //  Bubble sort would perform 28 comparisons

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        passes++;

        for (int j = 0; j < n - i - 1; j++)
        {
            comparisons++;

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swaps++;
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    cout << "Passes: " << passes << endl;
    cout << "Total Comparisons: " << comparisons << endl;
    cout << "Total Swaps: " << swaps << endl;

    return 0;
}
