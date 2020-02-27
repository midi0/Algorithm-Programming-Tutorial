#include <iostream>
#include <algorithm>

using namespace std;

class Student{
	public :
		string name;
		int score;
		// ������ �ʱ�ȭ 
		Student(string name, int score){
			this->name = name;
			this->score = score; 
		}
		//���� ������ ������ ���� ���� 
		bool operator <(Student &student){
			return this->score < student.score;
		}
};

int main(void){
	Student students[] = {
		Student("AA", 70),
		Student("BB", 65),
		Student("CC", 83),
		Student("DD", 95),
		Student("EE", 80)
	};
	sort(students, students+5);
	for(int i = 0; i < 5; i++){
		cout << students[i].name << ' ';
		cout << students[i].score << "�� / ";
	}
	return 0;
} 
