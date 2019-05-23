#pragma once
#include "stdafx.h"
#include "HomeTeam.h"

class HomeTeamCollection {

private:
	vector<HomeTeam *> homeTeams;

public:
	HomeTeamCollection();
	virtual ~HomeTeamCollection();

	vector<HomeTeam *> getAll();
	void add(HomeTeam *);
};