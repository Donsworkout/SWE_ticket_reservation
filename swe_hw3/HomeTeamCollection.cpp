#include "stdafx.h"
#include "HomeTeamCollection.h"

HomeTeamCollection::HomeTeamCollection() {
	// TODO Auto-generated constructor stub

}

HomeTeamCollection::~HomeTeamCollection() {
	// TODO Auto-generated destructor stub
}

vector<HomeTeam *> HomeTeamCollection::getAll() {
	return homeTeams;
}

void HomeTeamCollection::add(HomeTeam * homeTeam) {
	homeTeams.push_back(homeTeam);
}
