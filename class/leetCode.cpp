#include <iostream>
#include <vector>
using namespace std;
int chalkReplacer(int k)
{
    vector<int> chalk = {1, 2, 3, 5};
    int i = 0;
    // int total = k;
    int total_chalk = 0;
    for (int i = 0; i < chalk.size(); i++)
    {
        total_chalk = total_chalk + chalk[i];
    }
    k = k % total_chalk;
    for (int i = 0; i < chalk.size(); i++)
    {
        if (k < chalk[i])
        {
            return i;
        }
        k -= chalk[i];
    }
    return 0;
}
int main()
{
    int arr[] = {5, 1, 5};
    int val = chalkReplacer(1000000000);
    cout << val << endl;
    return 0;
}