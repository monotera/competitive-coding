#include <any>
#include <vector>

using namespace std;

// Tip: You can use el.type() == typeid(vector<any>) to check whether an item is
// a list or an integer.
// If you know an element of the array is vector<any> you can cast it using:
//     any_cast<vector<any>>(element)
// If you know an element of the array is an int you can cast it using:
//     any_cast<int>(element)

//// O(n) time | O(d) space - where n is the total number of elements in the
// array, including sub-elements, and d is the greatest depth of "special"
// arrays in the array
int productSum(vector<any> array, int multiplier = 1) {
  // Write your code here.
	int answer = 0;
	for (int i = 0; i < array.size();++i){
		if(array[i].type() == typeid(vector<any>)){
			answer += productSum(any_cast<vector<any>>(array[i]),multiplier + 1);
		}
		else{
			answer += any_cast<int>(array[i]);
		}
	}
  return answer * multiplier;
}


