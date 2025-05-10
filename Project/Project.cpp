#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int seconds;
    cout << "Введите время в секундах: ";
    cin >> seconds;
    int days = seconds / 86400;
    int hours = (seconds % 86400) / 3600;
    int minutes = (seconds % 3600) / 60;
    int sec = seconds % 60;
    cout << "Дни: " << days << ", Часы: " << hours << ", Минуты: " << minutes << ", Секунды: " << sec << endl;

    cout << "Введите дни, часы, минуты и секунды: ";
    cin >> days >> hours >> minutes >> sec;
    seconds = days * 86400 + hours * 3600 + minutes * 60 + sec;
    cout << "Всего секунд: " << seconds << endl;

    double distance, time;
    cout << "Введите расстояние до аэропорта (км) и время (часы): ";
    cin >> distance >> time;
    cout << "Необходимая скорость: " << distance / time << " км/ч" << endl;

    int startHour, startMin, startSec, endHour, endMin, endSec;
    cout << "Введите время начала звонка (часы, минуты, секунды): ";
    cin >> startHour >> startMin >> startSec;
    cout << "Введите время окончания звонка (часы, минуты, секунды): ";
    cin >> endHour >> endMin >> endSec;
    int duration = (endHour * 3600 + endMin * 60 + endSec) - (startHour * 3600 + startMin * 60 + startSec);
    cout << "Стоимость разговора: " << (duration / 60.0) * 0.3 << " грн" << endl;

    double grn, usd_rate, eur_rate, rub_rate;
    cout << "Введите сумму в гривнах и курсы доллара, евро и рубля: ";
    cin >> grn >> usd_rate >> eur_rate >> rub_rate;
    int usd = grn / usd_rate;
    int eur = grn / eur_rate;
    int rub = grn / rub_rate;
    cout << "Долларов: " << usd << ", Евро: " << eur << ", Рублей: " << rub << ", Сдача: " << grn - (usd * usd_rate + eur * eur_rate + rub * rub_rate) << " грн" << endl;

    cout << "Введите прошедшее время в секундах с начала рабочего дня: ";
    cin >> seconds;
    cout << "Осталось работать: " << max(0, 8 - (seconds / 3600)) << " часов" << endl;

    double laptop_price, discount;
    int quantity;
    cout << "Введите цену ноутбука, количество и процент скидки: ";
    cin >> laptop_price >> quantity >> discount;
    cout << "Общая сумма заказа: " << quantity * laptop_price * (1 - discount / 100) << " грн" << endl;

    double sales;
    cout << "Введите сумму сделок менеджера за месяц: ";
    cin >> sales;
    cout << "Зарплата менеджера: " << 100 + sales * 0.05 << " $" << endl;

    double film_size, speed;
    cout << "Введите размер фильма (ГБ) и скорость соединения (бит/с): ";
    cin >> film_size >> speed;
    seconds = film_size * 1024 * 1024 * 1024 * 8 / speed;
    cout << "Фильм скачается за " << seconds / 3600 << " ч " << (seconds % 3600) / 60 << " мин " << seconds % 60 << " сек" << endl;

    int flash_size;
    cout << "Введите объем флешки (ГБ): ";
    cin >> flash_size;
    cout << "Фильмов размером 760 МБ поместится: " << (flash_size * 1024) / 760 << endl;

    double num;
    cout << "Введите дробное число: ";
    cin >> num;
    cout << "Округленное число: " << round(num * 100) / 100 << endl;

    int passed, debtors;
    cout << "Введите количество студентов, сдавших экзамен, и количество должников: ";
    cin >> passed >> debtors;
    cout << "Процент должников: " << (debtors * 100.0) / (passed + debtors) << "%, Процент сдавших: " << (passed * 100.0) / (passed + debtors) << "%" << endl;

    cout << "Введите прошедшее время в секундах с начала дня: ";
    cin >> seconds;
    cout << "До полуночи осталось: " << (86400 - seconds) / 3600 << " ч " << ((86400 - seconds) % 3600) / 60 << " мин " << (86400 - seconds) % 60 << " сек" << endl;

    cout << "Введите размер фильма (ГБ): ";
    cin >> film_size;
    cout << "Необходимое количество дискет: " << ceil(film_size * 1024 * 1024 / 1.44) << endl;

    double deposit, months, rate;
    cout << "Введите сумму вклада, срок (месяцев) и годовую ставку (%): ";
    cin >> deposit >> months >> rate;
    cout << "Сумма через " << months << " месяцев: " << deposit * pow(1 + rate / 100 / 12, months) << " грн" << endl;

    return 0;

}