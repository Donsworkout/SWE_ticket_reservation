#include "stdafx.h"
#include "SearchAvailableTicketsUI.h"
#include "SearchAvailableTickets.h"
#include "DataSetter.h"

SearchAvailableTicketsUI::SearchAvailableTicketsUI()
{
}


SearchAvailableTicketsUI::~SearchAvailableTicketsUI()
{
}

void SearchAvailableTicketsUI::startInterface(vector<HomeTeam *> homeTeams) {
	int hts = homeTeams.size();
	string teamName;
	bool flag = true;

	cout << "홈팀 중 하나를 골라 이름을 입력해 주세요" << endl;
	cout << "=====================================" << endl;
	for (int i = 0; i < hts; i++) {
		cout << to_string(i) + ". " + homeTeams[i]->getName() << endl;
	}
	cout << "=====================================" << endl;
	while (flag == true) {
		cout << "팀 이름 입력 : ";
		cin >> teamName;
		for (int i = 0; i < hts; i++) {
			if (teamName == homeTeams[i]->getName()) {
				SearchAvailableTickets::getInstance()->showAvailableTickets(homeTeams[i]);
				flag = false;
				break;
			}
		}
		if (flag == true) {
			cout << "일치하는 팀이 없습니다." << endl;
		}
	}
}

SearchAvailableTicketsUI * SearchAvailableTicketsUI::inst;