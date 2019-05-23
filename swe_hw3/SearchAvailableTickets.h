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
	void startSearch();
	void showAvailableTickets(HomeTeam *);
	~SearchAvailableTickets();
};

