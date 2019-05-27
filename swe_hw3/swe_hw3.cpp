// swe_hw3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
#include "stdafx.h"
#include "SearchAvailableTickets.h"
#include "SearchBookedTicketsUI.h"
#include "DataSetter.h"
#include "Buyer.h"

using namespace std;

int main() {
	// data setting 
	vector<HomeTeam *> homeTeams = DataSetter::getInstance()->getHomeTeams();
	// 나중에 아래 바이어는 유저쪽 서브시스템과 결합 가능
	vector<Buyer *> buyers = DataSetter::getInstance()->getBuyers();
	Buyer * user = buyers[0];

	cout << "=====================================================" << endl;
	cout << "================= 티켓 예약 시스템 ==================\n\n\n" << endl;
	cout << "=============  " + user->getName() + " 님 환영합니다" + "  =============\n\n\n" << endl;

	bool flag = true;
	int funcNum;

	while (flag == true) {
		cout << "\n\n1 : 티켓 검색 / 2: 예약된 티켓 검색 / -1: 종료하기 \n\n" << endl;
		cout << "원하는 기능을 입력하여 주세요 : ";
		cin >> funcNum;
		cout << endl;
		switch (funcNum) {
			case 1: 
				SearchAvailableTickets::getInstance()->startSearch(user, homeTeams);
				break;
			case 2:
				// 내 티켓 조회
				SearchBookedTicketsUI::getInstance()->showBookedList(user);
				break;
			case -1:
				flag = false;
				break;
			default: 
				break;
		}
	}

	return 0;
}

