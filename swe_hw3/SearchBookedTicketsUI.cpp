#include "stdafx.h"
#include "SearchBookedTicketsUI.h"
#include "SearchBookedTickets.h"
#include "Buyer.h"

SearchBookedTicketsUI::SearchBookedTicketsUI()
{
}


SearchBookedTicketsUI::~SearchBookedTicketsUI()
{
}

void SearchBookedTicketsUI::showBookedList(Buyer * buyer) {
	cout << "\n=============== " + buyer->getName() + "님의 티켓 예약 내역 ================\n\n";
	cout << "구매가격 | 경기날짜 | 경기시간 | 홈   팀 | 어 웨 이 팀 | 좌석위치" << endl;
	SearchBookedTickets::getInstance()->listBookedTickets(buyer);
	cout << "==============================================================================\n\n";
}

SearchBookedTicketsUI * SearchBookedTicketsUI::inst;