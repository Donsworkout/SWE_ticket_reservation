#include "stdafx.h"
#include "SearchAvailableTickets.h"
#include "SearchAvailableTicketsUI.h"
#include "DataSetter.h"
#include "HomeTeam.h"

SearchAvailableTickets::SearchAvailableTickets()
{
}


SearchAvailableTickets::~SearchAvailableTickets()
{
}

void SearchAvailableTickets::startSearch(Buyer * buyer, vector<HomeTeam *> availableTeams) {
	SearchAvailableTicketsUI::getInstance()->startInterface(buyer, availableTeams);
}

void SearchAvailableTickets::showAvailableTickets(HomeTeam * homeTeam) {
	cout << "\n===================================================================" << endl;
	cout << "가 격 | 경기날짜 | 경기시간 | 홈   팀 | 어 웨 이 팀 | 좌석" << endl;
	homeTeam->listAvailableTickets();
	cout << "\n===================================================================" << endl;
}

SearchAvailableTickets * SearchAvailableTickets::inst;