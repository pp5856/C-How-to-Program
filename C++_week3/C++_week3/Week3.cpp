#include<iostream>

//UML ����ȭ ���� -> ppt �׸� ����

using namespace std;

int main() {

	int grade = 0;
	cin >> grade;

	//grade >= 60 ? cout<< "passed" : cout << "failed";
	cout << (grade >= 60 ? "passed" :"failed");

	return 0;
}