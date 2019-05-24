#pragma once
#include "stdafx.h"
#include "HomeTeam.h"

class DataSetter {
private:
	static DataSetter * inst;
	DataSetter();
	vector<HomeTeam *> setDefaultTickets(vector<HomeTeam *>);

public:
	static DataSetter * getInstance() { return inst; };
	virtual ~DataSetter();

	vector<HomeTeam *> getHomeTeams();
};
