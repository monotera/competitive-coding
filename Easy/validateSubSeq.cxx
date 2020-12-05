//First solution Time: O(N) Space: O(1)
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence)
{
    // Write your code here.
    int j = 0;
    if (array.size() < sequence.size())
        return false;
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] == sequence[j])
            j++;
        if (j == sequence.size())
            return true;
    }
    return false;
}