#pragma once
#include "stdafx.h"
#include "Ticket.h"

using namespace std;

class HomeTeam {
private:
	string name;
	string city;
	vector<Ticket*> tickets;

public:
	HomeTeam();
	HomeTeam(string, string);
	virtual ~HomeTeam();
	HomeTeam getHomeTeam(HomeTeam *homeTeam);
	string getName();
};