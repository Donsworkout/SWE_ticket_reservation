// swe_hw3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
#include "stdafx.h"
#include "SearchAvailableTickets.h"
#include "DataSetter.h"
using namespace std;

int main() {
	// data setting 
	vector<HomeTeam *> homeTeams = DataSetter::getInstance()->getHomeTeams();
	vector<Buyer *> buyers = DataSetter::getInstance()->getBuyers();
	Buyer * user = buyers[0];

	cout << "=====================================================" << endl;
	cout << "================= 티켓 예약 시스템 ==================\n\n\n" << endl;
	cout << "=============  " + user->getName() + " 님 환영합니다" + "  =============\n\n\n" << endl;

	cout << "1 : 티켓 검색 / -1: 종료하기 \n\n" << endl;
	cout << "원하는 기능을 입력하여 주세요 : ";

	int funcNum = 1000;
	cin >> funcNum;
	cout << endl;

	switch(funcNum) {
		case 1: 
		{
			// start search available tickets use case 
			SearchAvailableTickets::getInstance()->startSearch(user, homeTeams);
		}
		case -1:
		{
			cout << "app_exit" << endl;
			return 0;
		}
	}
	return 0;
}

