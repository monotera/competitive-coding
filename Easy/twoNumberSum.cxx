#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	for(int i = 0; i < array.size() - 1; i++){
		for(int j = i + 1; j < array.size(); j++){
			if(array[i]+array[j] == targetSum)
				return {array[i],array[j]};
		}
	}
  return {};
}