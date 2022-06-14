// Kursovaya.cpp : Разработка системы классов для обеспечения работы театра на языке программирования Visual C++.
//название спектакля, театра, время, цена билета, число, сортировка по названию

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <windows.h>

using namespace std;

class Client
{
public:

    string cost1;
    string cost2;
    string cost3;
    string vcost1;
    string vcost2;
    string vcost3;
    string date1;
    string date2;
    string date3;
    string typec;
    string typev;
    string tname;
    string sname1;
    string sname2;
    string sname3;
    string time1;
    string time2;
    string time3;
    string rest;

};

class Admin     //сумма проданных билетов, кол-во билетов (всего и проданных), всего спектаклей, всего посетителей
{
public:
    
    string tname;
    string sname1;
    string sname2;
    string sname3;
    string places;
    string placesc;
    string placesv;
    string unsoldb1;
    string unsoldb2;
    string unsoldb3;
    string soldb1;
    string soldb2;
    string soldb3;
    string csold1;
    string csold2;
    string csold3;
    string total;
    string vipsold1;
    string vipsold2;
    string vipsold3;
    string gsum;
    string sum1;
    string sum2;
    string sum3;
    string employee1;
    string employee2;
    string employee3;
    string job1;
    string job2;
    string job3;
    string zp1;
    string zp2;
    string zp3;
    string date1;
    string date2;
    string date3;
    string enddate1;
    string enddate2;
    string enddate3;

};

void firstmenu() {
    system("cls");
    cout << "Здравствуйте, Владислав Андреевич\n" << endl;
    cout << "Добро пожаловать в Театр им. Горбачёва" << "\n" << endl;
    cout << "Что вы хотите посмотреть?" << endl;
    cout << "1. Спектакли\n";
    cout << "2. Время работы театра\n" << endl;
}

void firstmenuadm() {
    system("cls");
    cout << "Здравствуйте, Администратор\n" << endl;
    cout << "Добро пожаловать в Театр им. Горбачёва" << "\n" << endl;
    cout << "Что вы хотите посмотреть?" << endl;
    cout << "1. Спектакли\n";
    cout << "2. Время работы театра\n";
    cout << "3. Сотрудники\n" << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Client Visitor;
    Visitor.tname = "Театр им. Горбачёва";
    Visitor.date1 = "26.06.2023";
    Visitor.date2 = "27.06.2023";
    Visitor.date3 = "28.07.2023";
    Visitor.sname1 = "Чайкин дом";
    Visitor.sname2 = "Щелкунчик";
    Visitor.sname3 = "Оперант";
    Visitor.time1 = "7:00 - 21:00";
    Visitor.time2 = "7:00 - 20:00";
    Visitor.time3 = "8:00 - 20:00";
    Visitor.rest = "Выходной день";
    Visitor.cost1 = "40р.";
    Visitor.cost2 = "45р.";
    Visitor.cost3 = "55р.";
    Visitor.vcost1 = "60р.";
    Visitor.vcost2 = "65р.";
    Visitor.vcost3 = "75р.";
    Visitor.typec = "Общие ряды";
    Visitor.typev = "VIP-места";

    Admin Settings;
    
    Settings.tname = "Театр им. Горбачёва";
    Settings.sname1 = "Чайкин дом";
    Settings.sname2 = "Щелкунчик";
    Settings.sname3 = "Оперант";
    Settings.places = "228 мест";
    Settings.placesc = "208 мест";
    Settings.placesv = "20 мест";
    Settings.unsoldb1 = "69 билетов";   //непроданные 1
    Settings.soldb1 = "159 билетов";    //проданные 1
    Settings.csold1 = "135 билетов";
    Settings.vipsold1 = "24 билета";
    Settings.unsoldb2 = "24 билета";   //непроданные 2
    Settings.soldb2 = "204 билета";    //проданные 2
    Settings.csold2 = "194 билета";
    Settings.vipsold2 = "10 билетов";
    Settings.unsoldb3 = "12 билетов";   //непроданные 3 
    Settings.soldb3 = "216 билетов";    //проданные 3
    Settings.csold3 = "214 билетов";
    Settings.vipsold3 = "2 билета";
    Settings.total = "579 билетов";
    Settings.sum1 = "6840р.";
    Settings.sum2 = "9510р.";
    Settings.sum3 = "11920р.";
    Settings.gsum = "28270р.";
    Settings.employee1 = "Стрелецкий Михаил Андреевич";
    Settings.employee2 = "Пижамский Константин Николаевич";
    Settings.employee3 = "Бернард Александр Алексеевич";
    Settings.job1 = "Актер";
    Settings.job2 = "Уборщик";
    Settings.job3 = "Кассир";
    Settings.zp1 = "800р.";
    Settings.zp2 = "550р.";
    Settings.zp3 = "600р.";
    Settings.date1 = "05.05.2016";
    Settings.date2 = "19.07.2021";
    Settings.date3 = "24.11.2014";
    Settings.enddate1 = "Бессрочно";
    Settings.enddate2 = "19.07.2023"; 
    Settings.enddate3 = "Бессрочно";

    int k;
    int c;
    bool yn;
    int type;
    string m;
    string login;
    string pass;
    cout << "Добро пожаловать [ ... ] \n";
    cin >> login;
    cout << "Пожалуйста, введите пароль, " << login << endl;
    cin >> pass;

    if (login == "Vlad" && pass == "156200")
        while (true)
        {          
            system("cls");
                firstmenu();
                cin >> k;

                switch (k)
                {
                case 1:
                    system("cls");
                    cout << "Спектакли: \n" << endl;
                    cout << "-------------------------------------------" << endl << endl;
                    cout << "1 спектакль - " << Visitor.sname1 << "\t" << Visitor.date1 << endl;
                    cout << "Цена билета:\n";
                    cout << Visitor.typec << " - " << Visitor.cost1 << endl;
                    cout << Visitor.typev << " - " << Visitor.vcost1 << endl << endl;
                    cout << "-------------------------------------------" << endl << endl;
                    cout << "2 спектакль - " << Visitor.sname2 << "\t\t" << Visitor.date2 << endl;
                    cout << "Цена билета:\n";
                    cout << Visitor.typec << " - " << Visitor.cost2 << endl;
                    cout << Visitor.typev << " - " << Visitor.vcost2 << endl << endl;
                    cout << "-------------------------------------------" << endl << endl;
                    cout << "3 спектакль - " << Visitor.sname3 << "\t\t" << Visitor.date3 << endl;
                    cout << "Цена билета:\n";
                    cout << Visitor.typec << " - " << Visitor.cost3 << endl;
                    cout << Visitor.typev << " - " << Visitor.vcost3 << endl << endl;
                    cout << "-------------------------------------------" << endl << endl << endl;
                    cout << "Желаете купить билет?" << endl;
                    cout << "1 - да, 0 - нет" << endl << endl;
                    cin >> yn;
                    if (yn == 1)
                    {

                        system("cls");
                        cout << "Введите номер спектакля\n";
                        cin >> c;
                        switch (c)
                        {
                        case 1:
                            system("cls");
                            cout << "1 спектакль - " << Visitor.sname1 << endl << endl;
                            cout << "Выберите тип билета: \n 1. " << Visitor.typec << " - " << Visitor.cost1 << endl << " 2. " << Visitor.typev << " - " << Visitor.vcost1 << endl;
                            cin >> type;
                            if (type == 1)
                            {
                                system("cls");
                                cout << "Производится оплата ..." << endl;
                                Sleep(2565);
                                system("cls");
                                cout << "Оплата успешно произведена!" << endl << endl;
                                cout << "Вы приобрели билет на общие ряды к спектаклю " << Visitor.sname1 << "!" << endl << endl;
                                system("pause");
                            }
                            else
                                if (type == 2)
                                {
                                    system("cls");
                                    cout << "Производится оплата ..." << endl;
                                    Sleep(2565);
                                    system("cls");
                                    cout << "Оплата успешно произведена!" << endl << endl;
                                    cout << "Вы приобрели билет на VIP-место к спектаклю " << Visitor.sname1 << "!" << endl << endl;
                                    system("pause");
                                }

                            break;
                        case 2:
                            cout << "2 спектакль - " << Visitor.sname2 << endl << endl;
                            cout << "Выберите тип билета: \n 1. " << Visitor.typec << " - " << Visitor.cost2 << endl << " 2. " << Visitor.typev << " - " << Visitor.vcost2 << endl;
                            cin >> type;
                            if (type == 1)
                            {
                                system("cls");
                                cout << "Производится оплата ..." << endl;
                                Sleep(2565);
                                system("cls");
                                cout << "Оплата успешно произведена!" << endl << endl;
                                cout << "Вы приобрели билет на общие ряды к спектаклю " << Visitor.sname2 << "!" << endl << endl;
                                system("pause");
                            }
                            else
                                if (type == 2)
                                {
                                    system("cls");
                                    cout << "Производится оплата ..." << endl;
                                    Sleep(2565);
                                    system("cls");
                                    cout << "Оплата успешно произведена!" << endl << endl;
                                    cout << "Вы приобрели билет на VIP-место к спектаклю " << Visitor.sname2 << "!" << endl << endl;
                                    system("pause");
                                }
                        case 3:
                            cout << "3 спектакль - " << Visitor.sname3 << endl << endl;
                            cout << "Выберите тип билета: \n 1. " << Visitor.typec << " - " << Visitor.cost3 << endl << " 2. " << Visitor.typev << " - " << Visitor.vcost3 << endl;
                            cin >> type;
                            if (type == 1)
                            {
                                system("cls");
                                cout << "Производится оплата ..." << endl;
                                Sleep(2565);
                                system("cls");
                                cout << "Оплата успешно произведена!" << endl << endl;
                                cout << "Вы приобрели билет на общие ряды к спектаклю " << Visitor.sname3 << "!" << endl << endl;
                                system("pause");
                            }
                            else
                                if (type == 2)
                                {
                                    system("cls");
                                    cout << "Производится оплата ..." << endl;
                                    Sleep(2565);
                                    system("cls");
                                    cout << "Оплата успешно произведена!" << endl << endl;
                                    cout << "Вы приобрели билет на VIP-место к спектаклю " << Visitor.sname3 << "!" << endl << endl;
                                    system("pause");
                                }
                        }
                    }
                    else 
                        if (yn == 0)
                        {
                            break;
                        }
                    
                   
                    break;
                case 2:
                    system("cls");
                    cout << "Время работы театра: \n" << endl;
                    cout << "Пн - " << Visitor.time1 << endl;
                    cout << "Вт - " << Visitor.time1 << endl;
                    cout << "Ср - " << Visitor.time1 << endl;
                    cout << "Чт - " << Visitor.time2 << endl;
                    cout << "Пт - " << Visitor.time3 << endl;
                    cout << "Сб - " << Visitor.rest << endl;
                    cout << "Вс - " << Visitor.rest << endl << endl;   
                }
                    system("pause");   

                
            
        }
    else
        if (login == "admin" && pass == "123")
            while (true) 
            {           
                firstmenuadm();
                cin >> k;
                switch (k)
                {                  
                    case 1:
                        system("cls");
                        cout << "Спектакли: \n" << endl;
                        cout << "-------------------------------------------" << endl << endl;
                        cout << "1 спектакль - " << Visitor.sname1 << "\t" << Visitor.date1 << endl;
                        cout << "Цена билета:\n";
                        cout << Visitor.typec << " - " << Visitor.cost1 << endl;
                        cout << Visitor.typev << " - " << Visitor.vcost1 << endl << endl;
                        cout << "\tПродано: " << endl;
                        cout << "На общие ряды - " << Settings.csold1 << endl;
                        cout << "VIP-мест - " << Settings.vipsold1 << endl;
                        cout << "Сумма проданных билетов: " << Settings.sum1 << endl << endl;
                        cout << "-------------------------------------------" << endl << endl;

                        cout << "2 спектакль - " << Visitor.sname2 << "\t\t" << Visitor.date2 << endl;
                        cout << "Цена билета:\n";
                        cout << Visitor.typec << " - " << Visitor.cost2 << endl;
                        cout << Visitor.typev << " - " << Visitor.vcost2 << endl << endl;
                        cout << "\tПродано: " << endl;
                        cout << "На общие ряды - " << Settings.csold2 << endl;
                        cout << "VIP-мест - " << Settings.vipsold2 << endl;
                        cout << "Сумма проданных билетов: " << Settings.sum2 << endl << endl;
                        cout << "-------------------------------------------" << endl << endl;

                        cout << "3 спектакль - " << Visitor.sname3 << "\t\t" << Visitor.date3 << endl;
                        cout << "Цена билета:\n";
                        cout << Visitor.typec << " - " << Visitor.cost3 << endl;
                        cout << Visitor.typev << " - " << Visitor.vcost3 << endl << endl;
                        cout << "\tПродано: " << endl;
                        cout << "На общие ряды - " << Settings.csold3 << endl;
                        cout << "VIP-мест - " << Settings.vipsold3 << endl;
                        cout << "Сумма проданных билетов: " << Settings.sum3 << endl << endl;
                        cout << "-------------------------------------------" << endl << endl;
                        cout << "Всего продано: " << Settings.total << endl;
                        break;
                    case 2:
                        system("cls");
                        cout << "Время работы театра: \n" << endl;
                        cout << "Пн - " << Visitor.time1 << endl;
                        cout << "Вт - " << Visitor.time1 << endl;
                        cout << "Ср - " << Visitor.time1 << endl;
                        cout << "Чт - " << Visitor.time2 << endl;
                        cout << "Пт - " << Visitor.time3 << endl;
                        cout << "Сб - " << Visitor.rest << endl;
                        cout << "Вс - " << Visitor.rest << endl << endl;
                        break;
                    case 3:
                        system("cls");
                        cout << "Сотрудники: \n" << endl;
                        cout << "-------------------------------------------" << endl << endl;
                        cout << Settings.employee1 << endl << "Должность - " << Settings.job1 << endl;
                        cout << "Жалование - " << Settings.zp1 << endl << endl;
                        cout << "Дата начала договора - " << Settings.date1 << endl;
                        cout << "Дата окончания договора - " << Settings.enddate1 << endl << endl;
                        cout << "-------------------------------------------" << endl << endl;
                        cout << Settings.employee2 << endl << "Должность - " << Settings.job2 << endl;
                        cout << "Жалование - " << Settings.zp2 << endl << endl;
                        cout << "Дата начала договора - " << Settings.date2 << endl;
                        cout << "Дата окончания договора - " << Settings.enddate2 << endl << endl;
                        cout << "-------------------------------------------" << endl << endl;
                        cout << Settings.employee3 << endl << "Должность - " << Settings.job3 << endl << endl;
                        cout << "Жалование - " << Settings.zp3 << endl << endl;
                        cout << "Дата начала договора - " << Settings.date3 << endl;
                        cout << "Дата окончания договора - " << Settings.enddate3 << endl << endl;
                        cout << "-------------------------------------------" << endl << endl;
                }
                    system("pause");
                
            }
        else
            cout << "Доступ запрещен" << endl;
    return 0;
        }
    
   

  
        
    
    
/*    Main Visitor;
    Visitor.cost = "50$";
    Visitor.type = "Common";
    
    printf("Your ticket - ");
    cout << Visitor.type << endl;
    cout << Visitor.cost << endl;

    return 0;       */


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
