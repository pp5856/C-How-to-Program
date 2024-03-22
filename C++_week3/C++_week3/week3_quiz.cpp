#include<iostream>

using namespace std;


//quiz1
 /*int main() {

	int num = 0;
	int i = 0;

	cout << "please input number smaller than 20: ";
	cin >> num;
	cout << "print " << num << "*\n";

	while (i < num) {

		i = i++;
		cout << "*";
	}
	cout << "\n" << i << "번 반복함";


	return 0;
	
}*/

//quiz2

int main() {

	int total{ 0 }, min{ 0 }, max{ 0 }, grade2{ 0 };
	int stu_num{ 12 }, grade{ 0 };
	int grade_counter = 1;
	while(grade_counter <=  stu_num) {
		cout << grade_counter << ": Enter grade: ";
		cin >> grade;
		
		grade_counter = grade_counter++;
		total = total + grade;
		if (max < grade)
			max = grade;
		if (min > grade)
			min = grade;
		grade2 = grade;
		
	}
	double avg = total / stu_num;

	cout << "The average score is: " << avg;
	cout << "The max score is: " << max;
	cout << "The min score is: " << min;


	return 0;
}