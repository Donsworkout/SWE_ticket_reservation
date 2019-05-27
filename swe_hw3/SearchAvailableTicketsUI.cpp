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
		cout << "홈팀 중 하나를 골라 이름을 입력해 주세요" << endl;
		cout << "=====================================" << endl;
		for (int i = 0; i < hts; i++) {
			cout << to_string(i) + ". " + homeTeams[i]->getName() << endl;
		}
		cout << "=====================================" << endl;
		cout << "팀 이름 입력 : ";
		cin >> teamName;
		for (int i = 0; i < hts; i++) {
			if (teamName == homeTeams[i]->getName()) {
				SearchAvailableTickets::getInstance()->showAvailableTickets(homeTeams[i]);
				// extend 부분 (티켓 구매 인터페이스)
				buyTicketInterface(buyer, homeTeams[i]);
				cannotFindTeam = false;
			}
		}
		if(cannotFindTeam)
			cout << "일치하는 팀이 없습니다." << endl;
	}
}

void SearchAvailableTicketsUI::buyTicketInterface(Buyer * buyer, HomeTeam * homeTeam) {
	string matchDate;
	string matchTime;
	string awayTeam;
	string seat;
	map<string, string> ticketInfo;

	cout << "\n\n" << endl;
	cout << "구매를 원하시는 티켓이 있으면 입력하여 주세요 " << endl;
	cout << "(경기날짜 경기시간 어웨이팀 좌석 순 입력)" << endl;
	cout << "==========================================\n\n" << endl;
	cout << "티켓 정보 입력: ";

	cin >> matchDate >> matchTime >> awayTeam >> seat;

	ticketInfo.insert(make_pair("matchDate", matchDate));
	ticketInfo.insert(make_pair("matchTime", matchTime));
	ticketInfo.insert(make_pair("awayTeam", awayTeam));
	ticketInfo.insert(make_pair("seat", seat));

	if (BookTicket::getInstance()->bookTicket(homeTeam, buyer, ticketInfo)) {
		cout << "예약에 성공하였습니다." << endl;
	}else {
		cout << "이미 예약된 티켓이거나 일치하는 티켓 정보가 없습니다" << endl;
	}
}

SearchAvailableTicketsUI * SearchAvailableTicketsUI::inst;