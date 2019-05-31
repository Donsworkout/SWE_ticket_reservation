#pragma once
#include "stdafx.h"
class HomeTeam;
class Buyer;
class Ticket;

class SearchAvailableTickets
{
private:
	static SearchAvailableTickets * inst;
	SearchAvailableTickets();
public:
	static SearchAvailableTickets * getInstance() { return inst; }
	//void startSearch(Buyer *);
	vector<Ticket *> showAvailableTickets(HomeTeam *);
	~SearchAvailableTickets();
};

