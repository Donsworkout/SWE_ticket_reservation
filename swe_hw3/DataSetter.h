#pragma once
#include "stdafx.h"
#include "HomeTeam.h"

class DataSetter {
private:
	static DataSetter * inst;
	DataSetter();

public:
	static DataSetter * getInstance() { return inst; };
	virtual ~DataSetter();

	vector<HomeTeam *> getHomeTeams();
	vector<HomeTeam *> setDefaultTickets(vector<HomeTeam *>);
};
