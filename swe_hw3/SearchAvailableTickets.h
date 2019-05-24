#pragma once
#include "stdafx.h"
#include "HomeTeam.h"
#include "Buyer.h"

class SearchAvailableTickets
{
private:
	static SearchAvailableTickets * inst;
	SearchAvailableTickets();
public:
	static SearchAvailableTickets * getInstance() { return inst; }
	void startSearch(Buyer *, vector<HomeTeam *>);
	void showAvailableTickets(HomeTeam *);
	~SearchAvailableTickets();
};

