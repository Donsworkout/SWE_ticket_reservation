#pragma once
#include "stdafx.h"
class Buyer;

class SearchBookedTicketsUI
{
private:
	static SearchBookedTicketsUI * inst;
	SearchBookedTicketsUI();
public:
	~SearchBookedTicketsUI();
	void showBookedList(Buyer *);
	static SearchBookedTicketsUI * getInstance() { return inst; }
};

