//First solution Time: O(n^2) Space: O(1)
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum)
{
    // Write your code here.
    for (int i = 0; i < array.size() - 1; i++)
    {
        for (int j = i + 1; j < array.size(); j++)
        {
            if (array[i] + array[j] == targetSum)
                return {array[i], array[j]};
        }
    }
    return {};
}

//Second solution using sort Time : O(N) Space: O(1)
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	sort(array.begin(),array.end()); //O(n log n)
	//left and rigth pointers
	int l = 0;
	int r = array.size() - 1; 
	//O(N)
	while(l != r) {
		if(array[l] + array[r] > targetSum)
			r--;
		else if(array[l] + array[r] < targetSum)
			l++;
		else
			return {array[l],array[r]};
	}
  return {};
}

//Third solution using hashmap Time: O(N) Space: O(N)
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	unordered_set<int> nums;
	for(int num : array) {
		int potentialMatch = targetSum - num;
		if(nums.find(potentialMatch) != nums.end()) {
			return {potentialMatch,num};
		}
		else
			nums.insert(num);
	}
  return {};
}