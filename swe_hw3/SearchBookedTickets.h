#pragma once
#include "stdafx.h"
class Buyer; 

class SearchBookedTickets
{
private:
	static SearchBookedTickets * inst;
	SearchBookedTickets();
	~SearchBookedTickets();
public:
	static SearchBookedTickets * getInstance() { return inst; }
	void listBookedTickets(Buyer *);
};

