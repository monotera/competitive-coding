//Solution 1
#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> array)
{
    // Write your code here.
    int aux, temp;
    bool swap = true;
    while (swap)
    {
        swap = false;
        for (int j = 0; j < array.size() - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                aux = array[j];
                temp = array[j + 1];
                array[j] = temp;
                array[j + 1] = aux;
                swap = true;
            }
        }
    }
    return array;
}
//Solution improved
#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> array) {
  // Write your code here.
	if(array.empty())
		return{};
	bool isSorted = false;
	int counter = 0;
	while(!isSorted) {
		isSorted = true;
		for(int i = 0; i < array.size()- 1 - counter; i++){
			if(array[i] > array[i+1]){
				swap(array[i],array[i+1]);
				isSorted = false;
			}
		}
		counter++;
	}
  return array;
}
