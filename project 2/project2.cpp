#include <iostream>
#include <conio.h>
using namespace std;

// -------- FUNCTIONS --------

void viewCars(string car_name[], int car_model[], string car_status[],
              string car_colour[], string car_num[], double car_price[], int size)
{
    cout << "Name    Model    Status    Colour    Number    cost" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << car_name[i] << "    "
             << car_model[i] << "    "
             << car_status[i] << "    "
             << car_colour[i] << "    "
             << car_num[i] << "    "
             << car_price[i] << endl;

        cout << "------------------------" << endl;
    }
}

void addCar(string car_name[], int car_model[], string car_status[],
            string car_colour[], string car_num[], double car_price[], int &car_count)
{
    cout << "Enter Vehicle Name: ";
    cin >> car_name[car_count];

    cout << "Enter Model: ";
    cin >> car_model[car_count];

    cout << "enter car number";
    cin >> car_num[car_count];

    cout << "enter car status";
    cin >> car_status[car_count];

    cout << "enetr colour of car";
    cin >> car_colour[car_count];

    cout << "enter the cost of car";
    cin >> car_price[car_count];

    car_count++;
    cout << "\nVehicle added successfully!";
}

void searchByModel(int car_model[], double car_price[], int size)
{
    int searchModel;
    cout << "enter the name of model u want to search: " << endl;
    cin >> searchModel;

    for (int i = 0; i < size; i++)
    {
        if (car_model[i] == searchModel)
        {
            cout << "\nmodel of the car is:\n";
            cout << "Model: " << car_model[i] << endl;
            cout << "Price: " << car_price[i] << endl;
        }
    }
}

// -------- MAIN --------

int main()
{
    int car_count = 0;
    int total_scales = 0;
    double total_revenue = 0.0;
    int total_sales_count = 0;

    const int SIZE = 6;
    int car_model[SIZE] = {2022, 2021, 2018, 2020, 2023, 2022};
    string car_name[SIZE] = {"Civic", "audi", "Mehran", "City", "Alto", "jeep"};
    string car_colour[SIZE] = {"Black", "White", "Silver", "brown", "green", "olive"};
    int model[SIZE] = {2022, 2021, 2018, 2020, 2023, 2022};
    string car_num[SIZE] = {"ABC123", "XYZ456", "LMN789", "DEF321", "GHI654", "JKL987"};
    string car_status[SIZE] = {"Available", "Booked...", "Available", "Booked...", "Available", "Available"};
    double car_price[SIZE] = {5000000, 4500000, 1500000, 4000000, 3000000, 8000000};

    system("cls");

    while (true)
    {
        cout << "            ##############################################          " << endl;
        cout << "            #____________________________________________#          " << endl;
        cout << "            #               WELCOME TO                   #          " << endl;
        cout << "            #        PREMIUN CAR BOOKING SYSTEM          #          " << endl;
        cout << "            #____________________________________________#          " << endl;
        cout << "            #   .....THE ART OF PREMIUM MOBILITY.....    #          " << endl;
        cout << "            #____________________________________________#          " << endl;
        cout << "            #____________________________________________#          " << endl;
        cout << "            ##############################################          " << endl;

        cout << "-------------------USER MENUE----------------" << endl;
        cout << "1..Admin" << endl;
        cout << "2..coustumer" << endl;
        cout << "3..Exit" << endl;
        cout << "choose option:";
        int useroption;
        cin >> useroption;

        if (useroption == 1)
        {
            system("cls");
            for (int i = 0; i < 3; i++)
            {
                cout << "Admin Menu:login attempt " << i + 1 << endl;

                cout << "enter user name:" << endl;
                string user_name;
                cin >> user_name;

                cout << "enter passward:" << endl;
                string passward;
                cin >> passward;

                if (user_name == "admin" && passward == "1234")
                {
                    cout << "loged in sucessfully" << endl;
                    while (true)
                    {
                        system("cls");
                        cout << "1.Add new vahicle" << endl;
                        cout << "2.Totals sales" << endl;
                        cout << "3.View all cars" << endl;
                        cout << "4.Remove Vehicle" << endl;
                        cout << "5.Total Revenue" << endl;
                        cout << "6.logout" << endl;
                        cout << "choose the option: ";
                        int admin_option;
                        cin >> admin_option;

                        if (admin_option == 1)
                        {
                            addCar(car_name, car_model, car_status, car_colour, car_num, car_price, car_count);
                        }
                        else if (admin_option == 2)
                        {
                            cout << "===== TOTAL SALES REPORT =====" << endl;
                            cout << "Total Vehicles Sold: " << total_sales_count << endl;
                        }
                        else if (admin_option == 5)
                        {
                            cout << "===== TOTAL REVENUE REPORT =====" << endl;
                            cout << "Total Revenue Earned: Rs. " << total_revenue << endl;
                        }
                        else if (admin_option == 3)
                        {
                            viewCars(car_name, car_model, car_status, car_colour, car_num, car_price, SIZE);
                        }
                        else if (admin_option == 6)
                        {
                            break;
                        }
                        getch();
                    }
                }
            }
        }
        else if (useroption == 2)
        {
            while (true)
            {
                system("cls");
                cout << "1.view cars" << endl;
                cout << "2.book a test drive" << endl;
                cout << "3.search car:" << endl;
                cout << "4.exit the system:" << endl;

                int costumer_option;
                cin >> costumer_option;

                if (costumer_option == 1)
                {
                    viewCars(car_name, car_model, car_status, car_colour, car_num, car_price, SIZE);
                    getch();
                }
                else if (costumer_option == 2)
                {
                    string name;
                    int num, date;
                    string carname;

                    cout << "enter your name" << endl;
                    cin >> name;

                    cout << "enter your phone number";
                    cin >> num;

                    cout << "enter the car u selected";
                    cin >> carname;

                    cout << "enter the date";
                    cin >> date;

                    cout << "Hello " << name << " your test drive confirmed on " << date << endl;
                    getch();
                }
                else if (costumer_option == 3)
                {
                    searchByModel(car_model, car_price, SIZE);
                }
                else if (costumer_option == 4)
                {
                    break;
                }
            }
        }
        else if (useroption == 3)
        {
            break;
        }
    }
}