#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	vector<pair<int, string> > v;
	v.push_back(pair<int, string>(90, "AA"));
	v.push_back(pair<int, string>(85, "BB"));
	v.push_back(pair<int, string>(82, "CC"));
	v.push_back(pair<int, string>(86, "DD"));
	v.push_back(pair<int, string>(78, "EE"));
	
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		cout <<v[i].second << ' ';
	}
	return 0;
}
