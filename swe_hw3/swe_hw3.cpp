// swe_hw3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
#include "stdafx.h"
#include "SearchAvailableTicketsUI.h"
#include "SearchBookedTicketsUI.h"
#include "DataSetter.h"
#include "Buyer.h"
#include "Ticket.h"

using namespace std;

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
vector<string> split(string, char);

int main() {
	doTask();
	return 0;
}

void doTask() {
	int menu_level_1 = 0, menu_level_2 = 0; 
	int is_program_exit = 0;

	ofstream outFile(OUTPUT_FILE_NAME);
	ifstream inFile(INPUT_FILE_NAME);

	while (!is_program_exit) {
		string inputString;
		getline(inFile, inputString);

		// split은 하단에 정의되어 있음 
		vector<string> lineData = split(inputString, ' ');

		// lineData 는 입력받은 한줄 데이터로 index 0,1은 각각 메뉴, 서브메뉴
		menu_level_1 = stoi(lineData[0]); // 메뉴 
		menu_level_2 = stoi(lineData[1]); // 서브메뉴

		switch (menu_level_1) {
		case 1: {
			switch (menu_level_2) {
			case 1: {
				cout << menu_level_1 << ", " << menu_level_2 << ".";
				printf("회원가입\n");
				// ytn testpwd yoo 112233 seller
				cout << lineData[2] + " " + lineData[3] + " " + lineData[4] + " " + lineData[5] + " " + lineData[6] << endl;
				break;
			}
			case 2: {
				cout << menu_level_1 << ", " << menu_level_2 << ".";
				printf("회원탈퇴\n");
				break;
			}
			}
			break;
		}
		case 2: {
			switch (menu_level_2) {
			case 1: {
				cout << menu_level_1 << ", " << menu_level_2 << ".";
				printf("로그인\n");
				break;
			}
			case 2: {
				cout << menu_level_1 << ", " << menu_level_2 << ".";
				printf("로그아웃\n");
				break;
			}
			}
			break;
		}
		case 3: {
			switch (menu_level_2) {
			case 1: {
				cout << menu_level_1 << ", " << menu_level_2 << ".";
				printf("판매티켓 등록\n");
				break;
			}
			case 2: {
				cout << menu_level_1 << ", " << menu_level_2 << ".";
				printf("등록티켓 조회\n");
				break;
			}
			}
			break;
		}
		case 4: {
			vector<Buyer *> buyers = DataSetter::getInstance()->getBuyers();
			Buyer * buyer = buyers[0];
			switch (menu_level_2) {
			case 1: {
				cout << menu_level_1 << ", " << menu_level_2 << ".";
				printf("티켓 검색\n");
				vector<Ticket *> tickets = SearchAvailableTicketsUI::getInstance()->startInterface(buyer, lineData[2]);

				sort(tickets.begin(), tickets.end(), Ticket::compare);
				for (int i = 0; i < tickets.size(); i++) {
					Ticket * ticket = tickets[i]->getTicket();
					if (ticket->availability) {
						// [희망가격] [날짜-시간] [홈팀] [어웨이팀] [좌석위치] 
						cout << to_string(ticket->price) + " | " + ticket->matchDate + " | " + ticket->matchTime + " | " + ticket->homeTeam + " | " + ticket->awayTeam + " | " + ticket->seat << endl;
					}
				}
				/*
				for(int i=0; i<=10; i++)
					outFile << i << endl;
				cout << inputData << endl;
				*/
				break;
			}
			case 2: {
				cout << menu_level_1 << ", " << menu_level_2 << ".";
				printf("티켓 예약\n");
				break;
			}
			case 3: {
				cout << menu_level_1 << ", " << menu_level_2 << ".";
				printf("경매 중인 티켓 검색\n");
				break;
			}
			case 4: {
				cout << menu_level_1 << ", " << menu_level_2 << ".";
				printf("경매 참여\n");
				break;
			}
			case 5: {
				cout << menu_level_1 << ", " << menu_level_2 << ".";
				printf("예약 정보 조회\n");
				break;
			}
			}
			break;
		}
		case 5: {
			cout << menu_level_1 << ", " << menu_level_2 << ".";
			printf("현재시간 설정\n");
			break;
		}
		case 6: {
			switch (menu_level_2) {
			case 1: {
				cout << menu_level_1 << ", " << menu_level_2 << ".";
				printf("session 변경\n");
				break;
			}
			case 2: {
				cout << menu_level_1 << ", " << menu_level_2 << ".";
				printf("guest session으로 변경\n");
				break;
			}
			}
			break;
		}
		case 7: {
			cout << menu_level_1 << ", " << menu_level_2 << ".";
			printf("종료\n");
			is_program_exit = 1;
			break;
		}
		}
	}
}

vector<string> split(string str, char delimiter) {
	vector<string> internal;
	stringstream ss(str); // Turn the string into a stream.
	string tok;

	while (getline(ss, tok, delimiter)) {
		internal.push_back(tok);
	}

	return internal;
}


/*
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

*/