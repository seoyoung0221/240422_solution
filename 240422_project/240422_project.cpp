// 
// 작성자 : 장서영
// 작성일자 : 2024.04.22
// 
// main문이 있는 파일
// exclude build
#include <iostream>

// 1. 프로그램 전체에서 딱 1개만 존재하는 "함수"
// 2. 프로그램에서 가장 먼저 "실행"되는 소스코드
int main() // 정의
{ // 코드 블럭
	//콘솔 문자 "출력"
	// ; 프로그램이 실행되는 단위
	std::cout << "Hello, World. \n"; //문자열 \n : 줄바꿈

	//변수 : "자료형" 정수, 문자, 문자열 ...
	//어떤 "값"이 들어갈 지 모르는 문자

	//int : 자료형, 정수(integer)
	//num : 변수 이름, 약간의 제약 + 자유롭게 지정가능
	int num; // 32bit, 변수, 정수가 들어갈 수 있는 공간


	//콘솔 입력
	std::cin >> num;

	// main 함수 연습
	// 1. 숫자를 입력해주세요 :  <-- 문자열 출력
	// 2. 사용자에게 정수형 값을 입력받기
	// 3. 입력받은 값을 정수형 변수에 저장하기

	std::cout << "숫자를 입력해주세요 : ";
	int num1;
	std::cin >> num1;
	std::cout << num1 + "\n";

	char word = 'A'; // 문자, 작은 따옴표
	std::string MyName = "seoyeong"; // 문자열, 큰 따옴표

	char test1 = 'A';
	char test2 = 'B'; 
	//std::cout << test1 + test2;
	// <- test3 메모리 공간 할당, 변수 선언
	//선언과 동시에 값을 넣는 것 = "초기화" 한다
	std::string test3 = "포스코";
	std::string test4 = test3;

	//여기 밑에 부터는 test3 이름만 갖고 사용 가능
	test3 = "코딩온";
	
	std::cout << "내가 할 말은"
		<< test3 + test4 << " 입니다."; // <<를 여러개 사용 가능

	int new_variable; //값이 들어있음

	std::cout << "줄바꿈.\n";
	std::cout << "줄바꿈." << std::endl;
	std::cout << "줄바꿈.";

	return 0;
}