#pragma once
#include "stdafx.h"

class SearchBookedTicketsUI
{
private:
	static SearchBookedTicketsUI * inst;
	SearchBookedTicketsUI();
public:
	~SearchBookedTicketsUI();
	static SearchBookedTicketsUI * getInstance() { return inst; }
};

