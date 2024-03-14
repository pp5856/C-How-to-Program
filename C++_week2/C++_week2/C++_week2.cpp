// C++_week2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// stream header file = <iostream>
// 데이터 버스를 통해서 전달 입출력 => 데이터의 흐름 = stream
// input/output -> io
// #: 전처리 지시어 ~~
//int 정수형 자료형 4byte 
//float, double, long double 실수형 4, 8, 16 byte
// 자료형 별로 사용하는 메모리(RAM) 공간이 다름.
// std:: = namespace/ stream 처리를 하는데 필요한 이름
// cout = object 변수 = 버퍼 변수 -> 화면에 flush = printf 와 유사
// 연산자 << 우측의 내용을 좌측으로 저장함. 새로 저장된 cout을 return 함.
//\n 들여쓰기
// \로 시작하는 특수 코드 여러가지
/*
\n \t \r \a \\ \' \"
*/
// 중단점 활용, f10 다음 라인 넘어가기
// = -> assigment 연산자 할당
//
#include <iostream>


int main() 
{
    //std::    cout   << "Hello World!\n"; //함수 키워드가 깨지지 않는 이상 띄어쓰기 영향 x => white space character 
    //std::cout << "World!\n";
    //std::cout << "     ㄴㄴWorld!\n";

    /*int number1 = 0;
    int number2 = 0;
    int sum = 0;*/

    int number1{ 0 }, number2{ 0 }, sum{ 0 }; //{}로도 선언 가능

    std::cout << "Enter first integer: ";
    std::cin >> number1;

    std::cout << "Enter second integer: ";
    std::cin >> number2;

    sum = number1 + number2;
    
    //std::cout << "Sum is " << sum << std::endl;
    std::cout << "Sum is " << sum << std::endl; // endl => end line \n과 다르게 강제 flush를 가능하게 함

    std::cout << "Modify first integer: ";
    std::cin >> number1;
    sum = number1 + number2;
    std::cout << "Sum is " << sum << std::endl;
    // string ""/ char ''
    return 0;
}
//2.4 ~ 부터 복습
// int/int 하면 int 가 나옴
// double/double or double/int 해야됨
//int main() {
//
//}