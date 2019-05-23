#include "stdafx.h"
#include "SearchAvailableTicketsUI.h"

SearchAvailableTicketsUI::SearchAvailableTicketsUI()
{
}


SearchAvailableTicketsUI::~SearchAvailableTicketsUI()
{
}

void SearchAvailableTicketsUI::startInterface(vector<HomeTeam *> homeTeams) {
	int ats = homeTeams.size();
	for (int i = 0; i < ats; i++) {
		homeTeams[i]->listAvailableTickets();
	}
}

SearchAvailableTicketsUI * SearchAvailableTicketsUI::inst;