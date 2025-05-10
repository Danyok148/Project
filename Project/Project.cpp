#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int seconds;
    cout << "������� ����� � ��������: ";
    cin >> seconds;
    int days = seconds / 86400;
    int hours = (seconds % 86400) / 3600;
    int minutes = (seconds % 3600) / 60;
    int sec = seconds % 60;
    cout << "���: " << days << ", ����: " << hours << ", ������: " << minutes << ", �������: " << sec << endl;

    cout << "������� ���, ����, ������ � �������: ";
    cin >> days >> hours >> minutes >> sec;
    seconds = days * 86400 + hours * 3600 + minutes * 60 + sec;
    cout << "����� ������: " << seconds << endl;

    double distance, time;
    cout << "������� ���������� �� ��������� (��) � ����� (����): ";
    cin >> distance >> time;
    cout << "����������� ��������: " << distance / time << " ��/�" << endl;

    int startHour, startMin, startSec, endHour, endMin, endSec;
    cout << "������� ����� ������ ������ (����, ������, �������): ";
    cin >> startHour >> startMin >> startSec;
    cout << "������� ����� ��������� ������ (����, ������, �������): ";
    cin >> endHour >> endMin >> endSec;
    int duration = (endHour * 3600 + endMin * 60 + endSec) - (startHour * 3600 + startMin * 60 + startSec);
    cout << "��������� ���������: " << (duration / 60.0) * 0.3 << " ���" << endl;

    double grn, usd_rate, eur_rate, rub_rate;
    cout << "������� ����� � ������� � ����� �������, ���� � �����: ";
    cin >> grn >> usd_rate >> eur_rate >> rub_rate;
    int usd = grn / usd_rate;
    int eur = grn / eur_rate;
    int rub = grn / rub_rate;
    cout << "��������: " << usd << ", ����: " << eur << ", ������: " << rub << ", �����: " << grn - (usd * usd_rate + eur * eur_rate + rub * rub_rate) << " ���" << endl;

    cout << "������� ��������� ����� � �������� � ������ �������� ���: ";
    cin >> seconds;
    cout << "�������� ��������: " << max(0, 8 - (seconds / 3600)) << " �����" << endl;

    double laptop_price, discount;
    int quantity;
    cout << "������� ���� ��������, ���������� � ������� ������: ";
    cin >> laptop_price >> quantity >> discount;
    cout << "����� ����� ������: " << quantity * laptop_price * (1 - discount / 100) << " ���" << endl;

    double sales;
    cout << "������� ����� ������ ��������� �� �����: ";
    cin >> sales;
    cout << "�������� ���������: " << 100 + sales * 0.05 << " $" << endl;

    double film_size, speed;
    cout << "������� ������ ������ (��) � �������� ���������� (���/�): ";
    cin >> film_size >> speed;
    seconds = film_size * 1024 * 1024 * 1024 * 8 / speed;
    cout << "����� ��������� �� " << seconds / 3600 << " � " << (seconds % 3600) / 60 << " ��� " << seconds % 60 << " ���" << endl;

    int flash_size;
    cout << "������� ����� ������ (��): ";
    cin >> flash_size;
    cout << "������� �������� 760 �� ����������: " << (flash_size * 1024) / 760 << endl;

    double num;
    cout << "������� ������� �����: ";
    cin >> num;
    cout << "����������� �����: " << round(num * 100) / 100 << endl;

    int passed, debtors;
    cout << "������� ���������� ���������, ������� �������, � ���������� ���������: ";
    cin >> passed >> debtors;
    cout << "������� ���������: " << (debtors * 100.0) / (passed + debtors) << "%, ������� �������: " << (passed * 100.0) / (passed + debtors) << "%" << endl;

    cout << "������� ��������� ����� � �������� � ������ ���: ";
    cin >> seconds;
    cout << "�� �������� ��������: " << (86400 - seconds) / 3600 << " � " << ((86400 - seconds) % 3600) / 60 << " ��� " << (86400 - seconds) % 60 << " ���" << endl;

    cout << "������� ������ ������ (��): ";
    cin >> film_size;
    cout << "����������� ���������� ������: " << ceil(film_size * 1024 * 1024 / 1.44) << endl;

    double deposit, months, rate;
    cout << "������� ����� ������, ���� (�������) � ������� ������ (%): ";
    cin >> deposit >> months >> rate;
    cout << "����� ����� " << months << " �������: " << deposit * pow(1 + rate / 100 / 12, months) << " ���" << endl;

    return 0;

}