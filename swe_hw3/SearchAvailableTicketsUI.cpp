#include "stdafx.h"
#include "SearchAvailableTicketsUI.h"
#include "SearchAvailableTickets.h"
#include "DataSetter.h"
#include "Buyer.h"
#include "Ticket.h"
#include "BookTicket.h"
#include "HomeTeam.h"

SearchAvailableTicketsUI::SearchAvailableTicketsUI()
{
}


SearchAvailableTicketsUI::~SearchAvailableTicketsUI()
{
}

vector<Ticket *> SearchAvailableTicketsUI::startInterface(Buyer * buyer, string teamName){ 
	vector<HomeTeam *> homeTeams = DataSetter::getInstance()->getHomeTeams();
	teamName.erase(remove_if(teamName.begin(), teamName.end(), isspace), teamName.end());
	bool cannotFindTeam = true;

	while (cannotFindTeam) {
		for (int i = 0; i < homeTeams.size(); i++) {
			if (teamName.compare(homeTeams[i]->getName()) == 0) {
				cannotFindTeam = false;
				return SearchAvailableTickets::getInstance()->showAvailableTickets(homeTeams[i]);
			}
		}
		if (cannotFindTeam) {
			cout << "��ġ�ϴ� ���� �����ϴ�." << endl;
			break;
		}
	}

	return {};
}

void SearchAvailableTicketsUI::buyTicketInterface(Buyer * buyer, HomeTeam * homeTeam) {
	string matchDate;
	string matchTime;
	string awayTeam;
	string seat;
	map<string, string> ticketInfo;

	cout << "\n\n" << endl;
	cout << "���Ÿ� ���Ͻô� Ƽ���� ������ �Է��Ͽ� �ּ��� " << endl;
	cout << "(��⳯¥ ���ð� ������� �¼� �� �Է�)" << endl;
	cout << "==========================================\n\n" << endl;
	cout << "Ƽ�� ���� �Է�: ";

	cin >> matchDate >> matchTime >> awayTeam >> seat;

	ticketInfo.insert(make_pair("matchDate", matchDate));
	ticketInfo.insert(make_pair("matchTime", matchTime));
	ticketInfo.insert(make_pair("awayTeam", awayTeam));
	ticketInfo.insert(make_pair("seat", seat));

	if (BookTicket::getInstance()->bookTicket(homeTeam, buyer, ticketInfo)) {
		cout << "���࿡ �����Ͽ����ϴ�." << endl;
	}else {
		cout << "�̹� ����� Ƽ���̰ų� ��ġ�ϴ� Ƽ�� ������ �����ϴ�" << endl;
	}
}

SearchAvailableTicketsUI * SearchAvailableTicketsUI::inst;