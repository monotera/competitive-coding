//Solution 1 Time : O(N) Space : O(1)
using namespace std;

bool isPalindrome(string str) {
  // Write your code here.
	if(str.size() == 1)
		return true;
	int  i = 0; 
	int  j = str.size() - 1;
	while(i < j){
		if(str[i] == str[j]){
			i++;
			j--;
		}
		else{
			return false;
		}
	}
  return true;
}
