#include <vector>
#include <unordered_map>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions, vector<int> results) {
	unordered_map<string,int> umap;
	for(int i = 0; i < competitions.size(); ++i) {
		if(results[i] == 1) {
			umap[competitions[i][0]]++;
		}
		else {
			umap[competitions[i][1]]++;
		}
	}
	
	string res;
	int maxCount = 0;
	for(auto v: umap) {
		if(v.second > maxCount) {
			maxCount = v.second;
			res = v.first;
		}
	}
	return res;
}
