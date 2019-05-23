#include "stdafx.h"
#include "DataSetter.h"

DataSetter::DataSetter() {
	// TODO Auto-generated constructor stub
}

DataSetter::~DataSetter() {
	// TODO Auto-generated destructor stub
}

vector<HomeTeam *> DataSetter::getHomeTeams() {
	cout << "홈팀 데이터 세팅 " << endl;
	HomeTeamCollection homeTeamCollection;

	HomeTeam* a = new HomeTeam("Doosan Bears", "Seoul");
	HomeTeam* b = new HomeTeam("Lotte Giants", "Ulsan");
	HomeTeam* c = new HomeTeam("Kia Tigers", "Gwangju");

	homeTeamCollection.add(a);
	homeTeamCollection.add(b);
	homeTeamCollection.add(c);

	vector<HomeTeam *> homeTeams = homeTeamCollection.getAll();

	return homeTeams;
}

DataSetter DataSetter::inst;
