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
	vector<HomeTeam *> availableTeams = ds.setDefaultTickets(homeTeams);
		
	int ats = availableTeams.size();
	cout << "team size : " + ats << endl;

	for (int i = 0; i < ats; i++) {
		availableTeams[i]->listAvailableTickets();
	}
	
	cout << "app_exit" << endl;
	return 0;
}

