#pragma once
#include "stdafx.h"
class HomeTeam;

class HomeTeamCollection {

private:
	vector<HomeTeam *> homeTeams;

public:
	HomeTeamCollection();
	virtual ~HomeTeamCollection();

	vector<HomeTeam *> getAll();
	void add(HomeTeam *);
};