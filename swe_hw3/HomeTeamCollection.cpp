#include "stdafx.h"
#include "HomeTeamCollection.h"

using namespace std;

HomeTeamCollection::HomeTeamCollection() {
	// TODO Auto-generated constructor stub

}

HomeTeamCollection::~HomeTeamCollection() {
	// TODO Auto-generated destructor stub
}

vector<HomeTeam *> HomeTeamCollection::getAll() {
	cout << "getAll BAAM" << endl;
	return homeTeams;
}

void HomeTeamCollection::add(HomeTeam * homeTeam) {
	this->homeTeams.push_back(homeTeam);
}
