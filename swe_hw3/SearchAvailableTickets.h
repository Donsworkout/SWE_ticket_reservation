#pragma once
#include "stdafx.h"

class SearchAvailableTickets
{
private:
	static SearchAvailableTickets * inst;
	SearchAvailableTickets();
public:
	static SearchAvailableTickets * getInstance() { return inst; }
	void startSearch();
	~SearchAvailableTickets();
};

