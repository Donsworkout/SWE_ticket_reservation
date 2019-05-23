#pragma once
#include "stdafx.h"
#include "HomeTeam.h"

class SearchAvailableTicketsUI
{
private:
	static SearchAvailableTicketsUI * inst;
	SearchAvailableTicketsUI();
public:
	~SearchAvailableTicketsUI();
	static SearchAvailableTicketsUI * getInstance() { return inst; }
	void startInterface(vector<HomeTeam *>);
};

