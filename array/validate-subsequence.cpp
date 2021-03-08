using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
	int i = 0;
	int j = 0;
	while(i < array.size()) {
		if(array[i] == sequence[j]) {
			i++; j++;
		}
		else {
			i++;
		}
	}
	return j == sequence.size();
}
