#pragma once
#include "stdafx.h"
#include "Ticket.h"

class TicketCollection {

private:
	vector<Ticket *> Tickets;

public:
	TicketCollection();
	virtual ~TicketCollection();

	vector<Ticket *> getAll();
	void add(Ticket *);
};
