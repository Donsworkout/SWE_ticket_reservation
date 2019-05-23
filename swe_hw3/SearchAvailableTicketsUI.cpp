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

	cout << "Ȩ�� �� �ϳ��� ��� �̸��� �Է��� �ּ���" << endl;
	cout << "=====================================" << endl;
	for (int i = 0; i < hts; i++) {
		cout << to_string(i) + ". " + homeTeams[i]->getName() << endl;
	}
	cout << "=====================================" << endl;
	while (flag == true) {
		cout << "�� �̸� �Է� : ";
		cin >> teamName;
		for (int i = 0; i < hts; i++) {
			if (teamName == homeTeams[i]->getName()) {
				SearchAvailableTickets::getInstance()->showAvailableTickets(homeTeams[i]);
				flag = false;
				break;
			}
		}
		if (flag == true) {
			cout << "��ġ�ϴ� ���� �����ϴ�." << endl;
		}
	}
}

SearchAvailableTicketsUI * SearchAvailableTicketsUI::inst;