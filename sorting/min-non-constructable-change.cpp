#include <vector>
using namespace std;

int nonConstructibleChange(vector<int> coins) {
	sort(coins.begin(), coins.end());
	
	int runningChange = 0;
	for(int coin: coins) {
		if(coin > runningChange + 1) {
			return runningChange + 1;
		}
		runningChange += coin;
	}
	return runningChange + 1;
}
