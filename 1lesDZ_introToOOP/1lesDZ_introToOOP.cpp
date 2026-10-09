#include <iostream>
#include <fstream>
using namespace std;
/*
struct Player {
	string name;
	short age;
	int games;
	int goals;
};
void printPlayer(Player& pl) {
	cout << "name: " << pl.name << endl;
	cout << "age: " << pl.age << endl;
	cout << "games: " << pl.games << endl;
	cout << "goals: " << pl.goals << endl;
}
void initPlayer(Player& pl) {
	cout << "enter name: "; cin >> pl.name;
	cout << "enter age: "; cin >> pl.age;
	pl.games = 0;
	pl.goals = 0;
}
void addGameToPlayer(Player& pl, int goals = 0) {
	pl.games++;
	pl.goals += goals;
}
*/

//class Player {
//	string name;
//	short age;
//	int games;
//	int goals;
//
//public:
//	void printPlayer() {
//		cout << "name: " << name << endl;
//		cout << "age: " << age << endl;
//		cout << "games: " << games << endl;
//		cout << "goals: " << goals << endl;
//	}
//	void initPlayer() {
//		cout << "enter name: "; cin >> name;
//		cout << "enter age: "; cin >> age;
//		games = 0;
//		goals = 0;
//	}
//	void addGameToPlayer(int goals = 0) {
//		games++;
//		this->goals += goals;
//	}
//};
//class Student {
//private:
//	string name;
//	int marks[3];
//
//public:
//
//	void setName(string name) {
//		this->name = name;
//	}
//
//	void setMark(int index, int mark) {
//		if (mark >= 1 and mark <= 12)
//		{
//			marks[index] = mark;
//		}
//		else
//		{
//			marks[index] = mark;
//		}
//	}
//
//	double getAverage() {
//		double summa = 0;
//		for (int i = 0; i < 3; i++)
//		{
//			summa += marks[i];
//		}
//		return (double)summa / 3;
//	}
//
//	string getName() {
//		return name;
//	}
//	int getMark(int index) {
//		return marks[index];
//	}

//};



//2

class Dot
{
private:
	int x;
	int y;
	int z;
public:

	void setX(int x) {
		this->x = x;
	}
	void setY(int y) {
		this->y = y;
	}
	void setZ(int z) {
		this->z = z;
	}

	int getX() {
		cout << x << endl;
		return x;
	}
	int getY() {
		cout << y << endl;
		return y;
	}
	int getZ() {
		cout << z << endl;
		return z;
	}

	void initCords() {
		cout << "enter x: "; cin >> x;
		cout << "enter y: "; cin >> y;
		cout << "enter z: "; cin >> z;
	}

	void showCords() {
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
		cout << "z: " << z << endl;
	}

	void saveToFile() {
		ofstream out;
		out.open("point.txt");
		out << x << endl;
		out << y << endl;
		out << z << endl;
		out.close();
	}

	void readFromFile() {
		ifstream in("point.txt");
		in >> x;
		in >> y;
		in >> z;
		in.close();
	}

};



//1

class Student
{
private:
	string name;
	string surname;
	string middleName;

	int birthDay;
	int birthMonth;
	int birthYear;

	int phoneNum;

	string city;
	string country;

	string learnPlace;//<-LP
	string LPcity;
	string LPcountry;
	int LPnum;
public:

	void fillStudent() {
		cout << "enter name: ";cin >> name;
		cout << "enter surname: ";cin >> surname;
		cout << "enter middleName: ";cin >> middleName;
		cout << "enter birthDay: ";cin >> birthDay;
		cout << "enter birthMonth: ";cin >> birthMonth;
		cout << "enter birthYear: ";cin >> birthYear;
		cout << "enter phoneNum: ";cin >> phoneNum;
		cout << "enter city: ";cin >> city;
		cout << "enter country: ";cin >> country;
		cout << "enter learnPlace: ";cin >> learnPlace;
		cout << "enter LPcity: ";cin >> LPcity;
		cout << "enter LPcountry: ";cin >> LPcountry;
		cout << "enter LPnum: ";cin >> LPnum;
	}

	void showStudent(){
		cout << "student name:" << name << endl;
		cout << "student surname:" << surname << endl;
		cout << "student middleName:" << middleName << endl;
		cout << "student birthDay:" << birthDay << endl;
		cout << "student birthMonth:" << birthMonth << endl;
		cout << "student birthYear:" << birthYear << endl;
		cout << "student phoneNum:" << phoneNum << endl;
		cout << "student city:" << city << endl;
		cout << "student country:" << country << endl;
		cout << "student learnPlace:" << learnPlace << endl;
		cout << "student LPcity:" << LPcity << endl;
		cout << "student LPcountry:" << LPcountry << endl;
		cout << "student LPnum:" << LPnum << endl;
	}

	void setName(string name) {
		this->name = name;
}
	void setSurname(string surname) {
		this->surname = surname;
}
	void setMiddlename(string middlename) {
		this->middleName = middlename;
}
	void setBirthDay(int birthDay) {
		this->birthDay = birthDay;
}
	void setBirthMonth(int birthMonth) {
		this->birthMonth = birthMonth;
}
	void setBirthYear(int birthYear) {
		this->birthYear = birthYear;
}
	void setPhoneNum(int phoneNum) {
		this->phoneNum = phoneNum;
}
	void setCity(string city) {
		this->city = city;
}
	void setCountry(string country) {
		this->country = country;
}
	void setLearnPlace(string learnPlace) {
		this->learnPlace = learnPlace;
}
	void setLPcity(string LPcity) {
		this->LPcity = LPcity;
}
	void setLPcountry(string LPcountry) {
		this->LPcountry = LPcountry;
}
	void setLPnum(int LPnum) {
		this->LPnum = LPnum;
}



	string getName() {
		cout << name << endl;
		return name;
	}
	string getSurname() {
		cout << surname << endl;
		return surname;
	}
	string getMiddlename() {
		cout << middleName << endl;
		return middleName;
	}
	int getBirthday() {
		cout << birthDay << endl;
		return birthDay;
	}
	int getBirthMonth() {
		cout << birthMonth << endl;
		return birthMonth;
	}
	int getBirthYear() {
		cout << birthYear << endl;
		return birthYear;
	}
	int getPhoneNum() {
		cout << phoneNum << endl;
		return phoneNum;
	}
	string getCity() {
		cout << city << endl;
		return city;
	}
	string getCountry() {
		cout << country << endl;
		return country;
	}
	string getLearnPlace() {
		cout << learnPlace << endl;
		return learnPlace;
	}
	string getLPcity() {
		cout << LPcity << endl;
		return LPcity;
	}
	string getLPcountry() {
		cout << LPcountry << endl;
		return LPcountry;
	}
	int getLPnum() {
		cout << LPnum << endl;
		return LPnum;
	}
};








int main()
{
	//1


	Student st;
	//st.fillStudent();
	//st.showStudent();
	st.setName("a");
	st.setSurname("b");
	st.setMiddlename("c");

	st.setBirthDay(1);
	st.setBirthMonth(2);
	st.setBirthYear(3);

	st.setPhoneNum(228);

	st.setCity("rivne");
	st.setCountry("kyivstar");

	st.setLearnPlace("school");
	st.setLPcity("rivne");
	st.setLPcountry("zimbabwe");
	st.setLPnum(44);


	st.getName();
	st.getSurname();
	st.getMiddlename();

	st.getBirthday();
	st.getBirthMonth();
	st.getBirthYear();

	st.getPhoneNum();

	st.getCity();
	st.getCountry();

	st.getLearnPlace();
	st.getLPcity();
	st.getLPcountry();
	st.getLPnum();

	//2
	//Dot d;
	/*d.initCords();
	d.showCords();

	d.setX(100);
	d.setY(2);
	d.setZ(3);

	d.showCords();

	d.getX();
	d.getY();
	d.getZ();
	d.saveToFile();
	cout << endl;*/
	//d.readFromFile();
	//d.showCords();


	//Student st;
	//st.setName("bem");
	//st.setMark(0,11);
	//st.setMark(1,10);
	//st.setMark(2,6);
	//

	//cout << "name: " << st.getName() << " marks: " << st.getMark(0) << " " << st.getMark(1) << " " << st.getMark(2) << " " << endl;

	//cout << "average mark: " <<st.getAverage() << endl;

	//Player player;
	//player.initPlayer();
	//player.printPlayer();
	//player.addGameToPlayer(2);
	//player.printPlayer();


//Player player;
	//initPlayer(player);
	//printPlayer(player);
	//addGameToPlayer(player,1);
	//printPlayer(player);
}