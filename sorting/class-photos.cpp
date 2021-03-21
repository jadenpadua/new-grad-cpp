#include <vector>
using namespace std;

bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights) {	
	sort(blueShirtHeights.begin(), blueShirtHeights.end());	
	sort(redShirtHeights.begin(), redShirtHeights.end());

	int count = 0;
	
	for(int i = 0; i < redShirtHeights.size(); i++) {
		if(blueShirtHeights[i] == redShirtHeights[i]) {
			return false;
		}
		else if(blueShirtHeights[i] <= redShirtHeights[i]) {
			count++;
		}
	}	
  return count == 0 || count == redShirtHeights.size();
}
