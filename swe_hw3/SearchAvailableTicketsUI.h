#pragma once
#include "stdafx.h"
#include "HomeTeam.h"
#include "Buyer.h"

class SearchAvailableTicketsUI
{
private:
	static SearchAvailableTicketsUI * inst;
	SearchAvailableTicketsUI();
	void buyTicketInterface(Buyer *, HomeTeam *);
public:
	~SearchAvailableTicketsUI();
	static SearchAvailableTicketsUI * getInstance() { return inst; }
	void startInterface(Buyer *, vector<HomeTeam *>);
};

