// swe_hw3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
#include "stdafx.h"
#include "SearchAvailableTickets.h"
using namespace std;

int main() {
	cout << "=====================================================" << endl;
	cout << "================= 티켓 예약 시스템 ==================\n\n\n" << endl;
	
	int funcNum = 1000;
	cout << "1 : 티켓 검색 / -1: 종료하기 \n\n" << endl;
	cout << "원하는 기능을 입력하여 주세요 : ";
	cin >> funcNum;
	cout << endl;

	switch(funcNum) {
		case 1: 
		{
			// 검색기능 시작
			SearchAvailableTickets::getInstance()->startSearch();
		}
		case -1:
		{
			cout << "app_exit" << endl;
			return 0;
		}
	}
	return 0;
}

