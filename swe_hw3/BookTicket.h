#pragma once
#include "stdafx.h"
#include "HomeTeam.h"
#include "Buyer.h"

class BookTicket
{
private:
	static BookTicket * inst;
	BookTicket();
	~BookTicket();
public:
	bool bookTicket(HomeTeam *, Buyer *, map<string, string>);
	static BookTicket * getInstance() { return inst; }
};

