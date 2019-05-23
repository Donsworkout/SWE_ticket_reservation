#pragma once
#include "stdafx.h"
#include "TicketCollection.h"
#include "HomeTeam.h"

using namespace std;

class HomeTeam {
private:
	string name;
	string city;

public:
	TicketCollection ticketCollection;
	HomeTeam();
	HomeTeam(string, string);
	virtual ~HomeTeam();

	HomeTeam getHomeTeam(HomeTeam *homeTeam);
	string getName();
	void listAvailableTickets();
};