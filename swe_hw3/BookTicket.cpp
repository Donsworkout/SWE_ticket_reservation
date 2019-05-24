#include "stdafx.h"
#include "BookTicket.h"
#include "Ticket.h"
#include "HomeTeam.h"

BookTicket::BookTicket()
{
}


BookTicket::~BookTicket()
{
}

bool BookTicket::bookTicket(HomeTeam * homeTeam, Buyer * buyer, map<string,string> ticketInfo) {
	bool result = false;
	vector<Ticket *> homeTeamTickets = homeTeam->ticketCollection.getAll();
	int ticketSize = homeTeamTickets.size();

	for (int i = 0; i < ticketSize; i++) {
		if (ticketInfo["matchDate"] == homeTeamTickets[i]->matchDate && ticketInfo["matchTime"] == homeTeamTickets[i]->matchTime && ticketInfo["awayTeam"] == homeTeamTickets[i]->awayTeam && ticketInfo["seat"] == homeTeamTickets[i]->seat) {
			result = true;
		}
	}

	if (result == false) {
		cout << "�ùٸ� Ƽ�� ������ �ƴմϴ�.";
		return false;
	}else {
		// ������ Ƽ�� �÷��ǿ� �߰�
		// Ƽ���� soldDate �߰�
		// availablity false 
		cout << "Ƽ���� ���� �Ǿ����ϴ�.";
		return true;
	}
}

BookTicket * BookTicket::inst;