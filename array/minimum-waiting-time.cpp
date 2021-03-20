using namespace std;

int minimumWaitingTime(vector<int> queries) {
	sort(queries.begin(), queries.end());
	
	int waitingTime = 0;
	int runningSum = 0;
	
	if(queries.size() < 1) {
		return 0;
	}
	
	for(int i = 0; i < queries.size() - 1; i++) {
		runningSum += queries[i];
		waitingTime += runningSum;
	}
	return waitingTime;
}
