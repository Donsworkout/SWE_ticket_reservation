#pragma once
#include "stdafx.h"
class HomeTeam;
class Buyer;
class Ticket;

class SearchAvailableTicketsUI
{
private:
	static SearchAvailableTicketsUI * inst;
	SearchAvailableTicketsUI();
public:
	~SearchAvailableTicketsUI();
	static SearchAvailableTicketsUI * getInstance() { return inst; }
	vector<Ticket *> startInterface(Buyer *, string);
	void buyTicketInterface(Buyer *, HomeTeam *);
};

