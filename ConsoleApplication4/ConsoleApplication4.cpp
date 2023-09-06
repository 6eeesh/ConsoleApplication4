#include<iostream>
using namespace std;
class Man {
	int number_of_hands=2;
	int number_of_eyes = 2;
	string eye_color="grean";
	string fur_color = "black";
	string nick = "Nikita";

	void Dance() {
		cout << "Микита почав танцювати"<<endl;
	}
	void StopDance() {
		cout << "Микита припинив танцювати" << endl;
	}
	void Walk() {
		cout << "Микита пiшов" << endl;
	}
	void DoHomework() {
		cout << "Микита почав виконувати домашне завдання" << endl;
	}
	void Musick(string executor) {
		cout << "Микта почав слухати музику"<< executor << endl;
	}
};
class Room {
	int Computer = 1;
	int Doors = 1;
	int Windows = 3;
	int Bed = 1;
	string wallpaper_color = "blue";
	int chairs = 4;
	void OpenTheDoor() {
		cout << "Дверi вiдчиняются" << endl;
	}
	void Turn_on_the_computer() {
		cout << "Чутно як ввiмкнувся комп`ютер" << endl;
	}
	void Lie_on_the_bed() {
		cout << "Поздравляю вы легли на кровать!!!" << endl;
	}
	void Open_the_window() {
		cout << "Вiкно вiдчинено" << endl;
	}
	void Sit_on_a_chair() {
		cout << "Стул был с подвохом и вы упали" << endl;
	}

};
class Mobile_phone {
	int sidebotton = 1;
	int front_camera = 1;
	int back_camera = 3;
	string collor = "Black";
	double diagonal = 6.06;//дюймiв
	void On_Phone() {
		cout << "Телефон почав ввiмкатись" << endl;
	}
	void Do_selfie() {
		cout << "Ввiмкнулась фронтальна камера та вилетiла пташка" << endl;
	}
	void make_a_call() {
		cout << "Чутно гудки..." << endl;
	}
	void Play_the_game() {
		cout << "Ввiмкнулась гра" << endl;
	}
	void Post_a_photo() {
		cout << "Спочатку треба завантажити iнстаграмчик!" << endl;
	}
};
class Monkey {
	int eyes = 2;
	int hands = 2;
	int ears = 2;
	double wool_length = 0.4;
	string Nick = "Arnold";
	void Eat(string food) {
		cout << "Беремо смачний" << food << "та починаемо iсти" << endl;
	}
	void Noise() {
		cout << "Привiтатися" << endl;
	}
	void Sleep() {
		cout << "Арнольд в пошуках мiстечка для дрьому" << endl;
	}
	void Play() {
		cout << "Арнольд починае гратися с друзями" << endl;
	}
	void Dance() {
		cout << "Арнольд показуе дуже класснi рухи" << endl;
	}
};
class Car {
	int Wheels = 6;
	int doors = 4;
	int Number_of_seats = 7;
	string Color = "White";
	int Steering_wheel = 1;
	void We_start_the_engine() {
		cout << "Слышен рёв этого зверя" << endl;
	}
	void Need_to_fix_urgently() {
		cout << "На панели засвтился бензин, машине пора кушать" << endl;
	}
	void Fasten_seat_belts() {
		cout << "Машина напоминает нам о мере безопасности, и что нужно присегнуть ремни" << endl;
	}
	void Nead_to_fix() {
		cout << "Машина чуствует себя не хорошо, нужно заехать на СТО" << endl;
	}
	void Ride_back() {
		cout << "Машина начинает движение назад" << endl;
	}
};

int main()
{

}