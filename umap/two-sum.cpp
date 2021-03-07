#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
	unordered_map<int, int> umap;
	vector<int> res;
	for(int i = 0; i < array.size(); ++i) {
		int potentialMatch = targetSum - array[i];
		
		if(umap.find(array[i]) != umap.end()) {
			return{umap[array[i]],array[i]};
		}
		umap[potentialMatch] = array[i];
	}
	return {};
}
