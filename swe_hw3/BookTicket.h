#pragma once
#include "stdafx.h"
class HomeTeam;
class Buyer;

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

