#pragma once
#include "stdafx.h"
class HomeTeam;
class Buyer;

class SearchAvailableTicketsUI
{
private:
	static SearchAvailableTicketsUI * inst;
	SearchAvailableTicketsUI();
public:
	~SearchAvailableTicketsUI();
	static SearchAvailableTicketsUI * getInstance() { return inst; }
	void startInterface(Buyer *, vector<HomeTeam *>);
	void buyTicketInterface(Buyer *, HomeTeam *);
};

