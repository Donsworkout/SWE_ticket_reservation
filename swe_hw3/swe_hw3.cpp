// swe_hw3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
#include "stdafx.h"
#include "HomeTeamCollection.h"
#include "DataSetter.h"
#include "HomeTeam.h"

using namespace std;

int main() {
	cout << "app_started" << endl;
	DataSetter ds = DataSetter::getInstance();
	vector<HomeTeam *> homeTeams = ds.getHomeTeams();

	cout << homeTeams.size() << endl;
	int hts = homeTeams.size();
	for (int i = 0; i < hts; i++) {
		cout << homeTeams[i]->getName() << endl;
	}

	cout << "ended" << endl;
	return 0;
}

