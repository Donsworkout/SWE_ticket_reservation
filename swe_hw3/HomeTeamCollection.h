#pragma once
#include "stdafx.h"
class HomeTeam;

class HomeTeamCollection {

private:
	vector<HomeTeam *> homeTeams;

public:
	HomeTeamCollection();
	virtual ~HomeTeamCollection();
	vector<HomeTeam *> getHomeTeams();
	HomeTeam * getHomeTeamByName(string);
	void add(HomeTeam *);
};