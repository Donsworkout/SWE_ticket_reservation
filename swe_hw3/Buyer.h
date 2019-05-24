#pragma once
#include "stdafx.h"
#include "Member.h"
#include "Ticket.h"
//#include "TicketCollection.h"

class Buyer : public Member
{
public:
	//TicketCollection * purchasedTickets;
	Buyer();
	Buyer(string, string, string, string, string, string);
	~Buyer();
};

