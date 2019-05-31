#include "stdafx.h"
#include "HomeTeamCollection.h"
#include "HomeTeam.h"
#include "DataSetter.h"

HomeTeamCollection::HomeTeamCollection() {
	// Ȩ�� �ʱ�ȭ
	HomeTeam* a = new HomeTeam("sk", "Seoul");
	HomeTeam* b = new HomeTeam("lg", "Ulsan");
	HomeTeam* c = new HomeTeam("doosan", "Gwangju");
	this->add(a);
	this->add(b);
	this->add(c);
}

HomeTeamCollection::~HomeTeamCollection() {
	// TODO Auto-generated destructor stub
}

vector<HomeTeam *> HomeTeamCollection::getHomeTeams() {
	return homeTeams;
}

void HomeTeamCollection::add(HomeTeam * homeTeam) {
	homeTeams.push_back(homeTeam);
}

HomeTeam * HomeTeamCollection::getHomeTeamByName(string teamName) {
	vector<HomeTeam *> homeTeams = this->getHomeTeams();
	for (int i = 0; i < homeTeams.size(); i++) {
		if (teamName.compare(homeTeams[i]->getName()) == 0) {
			return homeTeams[i];
		}
	}
	return NULL;
}

HomeTeamCollection* HomeTeamCollection::inst = nullptr;