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
		cout << "올바른 티켓 정보가 아닙니다.";
		return false;
	}else {
		// 유저의 티켓 컬렉션에 추가
		// 티켓의 soldDate 추가
		// availablity false 
		cout << "티켓이 예약 되었습니다.";
		return true;
	}
}

BookTicket * BookTicket::inst;