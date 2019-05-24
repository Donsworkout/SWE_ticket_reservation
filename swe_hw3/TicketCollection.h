#pragma once
#include "stdafx.h"
#include "Ticket.h"

class TicketCollection {

private:
	vector<Ticket *> tickets;

public:
	TicketCollection();
	virtual ~TicketCollection();

	vector<Ticket *> getAll();
	void add(Ticket *);

	// algorithm sorting 시 커스텀 비교용 function
	static bool compare(Ticket * me, Ticket * other) {
		if (me->matchDate < other->matchDate) {
			return true;
		}
		else if (me->matchDate > other->matchDate) {
			return false;
		}
		else {
			if (me->matchTime < other->matchTime) {
				return true;
			}
			else {
				return false;
			}
		}
	}
};
