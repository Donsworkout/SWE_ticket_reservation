#include "stdafx.h"
#include "SearchAvailableTickets.h"
#include "SearchAvailableTicketsUI.h"
#include "DataSetter.h"

SearchAvailableTickets::SearchAvailableTickets()
{

}


SearchAvailableTickets::~SearchAvailableTickets()
{
}

void SearchAvailableTickets::startSearch(vector<HomeTeam *> availableTeams) {
	SearchAvailableTicketsUI::getInstance()->startInterface(availableTeams);
}

void SearchAvailableTickets::showAvailableTickets(HomeTeam * homeTeam) {
	homeTeam->listAvailableTickets();
}

SearchAvailableTickets * SearchAvailableTickets::inst;