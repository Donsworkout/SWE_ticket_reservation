#pragma once
#include "stdafx.h"
#include "TicketCollection.h"
class HomeTeam;

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

	HomeTeam getHomeTeam();
	void listAvailableTickets();
	string getName();
};