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

void SearchAvailableTicketsUI::startInterface(Buyer * buyer, vector<HomeTeam *> homeTeams) {
	int hts = homeTeams.size();
	string teamName;
	bool cannotFindTeam = true;

	while (cannotFindTeam) {
		cout << "Ȩ�� �� �ϳ��� ��� �̸��� �Է��� �ּ���" << endl;
		cout << "=====================================" << endl;
		for (int i = 0; i < hts; i++) {
			cout << to_string(i) + ". " + homeTeams[i]->getName() << endl;
		}
		cout << "=====================================" << endl;
		cout << "�� �̸� �Է� : ";
		cin >> teamName;
		for (int i = 0; i < hts; i++) {
			if (teamName == homeTeams[i]->getName()) {
				SearchAvailableTickets::getInstance()->showAvailableTickets(homeTeams[i]);
				// extend �κ� (Ƽ�� ���� �������̽�)
				buyTicketInterface(buyer, homeTeams[i]);
				cannotFindTeam = false;
			}
		}
		if(cannotFindTeam)
			cout << "��ġ�ϴ� ���� �����ϴ�." << endl;
	}
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