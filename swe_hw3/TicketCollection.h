#pragma once
#include "stdafx.h"
class Ticket;

class TicketCollection {

private:
	vector<Ticket *> tickets;

public:
	TicketCollection();
	virtual ~TicketCollection();

	vector<Ticket *> getAll();
	void add(Ticket *);
};
