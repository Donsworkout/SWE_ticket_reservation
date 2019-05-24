#pragma once
#include "stdafx.h"
#include "HomeTeam.h"

class SearchAvailableTickets
{
private:
	static SearchAvailableTickets * inst;
	SearchAvailableTickets();
public:
	static SearchAvailableTickets * getInstance() { return inst; }
	void startSearch(vector<HomeTeam *>);
	void showAvailableTickets(HomeTeam *);
	~SearchAvailableTickets();
};

