#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a,
			 pair<string, pair<int, int> > b){
			 	if(a.second.first == b.second.first){
			 		return a.second.second > b.second.second;
				 }else{
				 	return a.second.first > b.second.first;
				 }
			 }

int main(void){
	vector<pair<string, pair<int, int> > > v;
	v.push_back(pair<string, pair<int, int> > ("AAA", pair<int, int>(90, 19950101)));
	v.push_back(pair<string, pair<int, int> > ("BBB", pair<int, int>(97, 19930301)));
	v.push_back(pair<string, pair<int, int> > ("CCC", pair<int, int>(88, 19951101)));
	v.push_back(pair<string, pair<int, int> > ("DDD", pair<int, int>(90, 19930121)));
	v.push_back(pair<string, pair<int, int> > ("EEE", pair<int, int>(80, 19980901)));
	
	sort(v.begin(), v.end(), compare);
	for(int i = 0; i<v.size(); i++){
		cout<<v[i].first << ' ';
	}
	return 0;
}
