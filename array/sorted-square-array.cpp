#include <vector>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
	vector<int> res(array.size(), 0);
	int left = 0;
	int right = array.size() - 1;
	
	for (int i = array.size() - 1; i >= 0; i--) {
		if(abs(array[left]) > abs(array[right])) {
			res[i] = array[left] * array[left];
			left++;
		} 
		else {
			res[i] = array[right] * array[right];
			right--;
		}
	}
	return res;
}
