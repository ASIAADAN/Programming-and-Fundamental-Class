#include <iostream>
#include <conio.h>
using namespace std;
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

    // main header od UMS
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
        cout << "you choose " << useroption << endl;
        if (useroption == 1)
        {
            // add admin information
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

                        // add car
                        if (admin_option == 1)
                        { // Logic for Adding a Vehicle
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
                        else if (admin_option == 2)
                        {

                            cout << "===== TOTAL SALES REPORT =====" << endl;
                            cout << "Total Vehicles Sold: " << total_sales_count << endl;
                            cout << "\nPress any key to go back...";

                        } // Case 5: Total Revenue

                        else if (admin_option == 5)
                        {

                            cout << "===== TOTAL REVENUE REPORT =====" << endl;
                            cout << "Total Revenue Earned: Rs. " << total_revenue << endl;
                            cout << "\nPress any key to go back...";
                        }

                        else if (admin_option == 3)
                        {

                            // view all cars

                            cout << "Name    Model    Status    Colour    Number    cost" << endl;

                            for (int i = 0; i < SIZE; i++)
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
                        else if (admin_option == 4)
                        {

                            cout << "===== REMOVE VEHICLE =====" << endl;

                            // to view list

                            for (int i = 0; i < car_count; i++)
                            {
                                cout << i + 1 << ". " << car_name[i] << " (" << car_model[i] << ")" << endl;
                            }

                            int del_index;
                            cout << "\nEnter the number of the vehicle to remove: ";
                            cin >> del_index;

                            int pos = del_index - 1;
                            getch();
                            if (pos >= 0 && pos < car_count)
                            {

                                // Shifting Logic:

                                for (int i = pos; i < car_count - 1; i++)

                                {
                                    car_name[i] = car_name[i + 1];
                                    car_model[i] = car_model[i + 1];
                                    car_status[i] = car_status[i + 1];
                                    car_colour[i] = car_colour[i + 1];
                                    car_num[i] = car_num[i + 1];
                                }

                                car_count--;
                            }

                            // Vehicle removed succes
                        }

                        else if (admin_option == 6)
                        {
                            system("cls");
                            // Logout
                            break;
                        }
                        getch();
                    }
                }
            }
        } //..............................................
        else if (useroption == 2)
        {
            while (true)
            {
                system("cls");
                cout << "**********************************************************" << endl;
                cout << "*              WELCOME TO SHOWROOM                       *" << endl;
                cout << "**********************************************************" << endl;
                cout << "1.view cars" << endl;
                cout << "2.book a test drive" << endl;
                cout << "enter the option" << endl;
                cout << "3.search car:" << endl;
                cout << "4.exit the system:" << endl;
                cout << "enter the option" << endl;

                int costumer_option;
                cin >> costumer_option;
                if (costumer_option == 0)
                {
                    cout << "no car avalaible in the showroom right now";
                }
                else if (costumer_option == 1)

                {
                    cout << "Name    Model    Status    Colour    Number    cost" << endl;

                    for (int i = 0; i < SIZE; i++)
                    {
                        cout << car_name[i] << "    "

                             << car_model[i] << "    "

                             << car_status[i] << "    "

                             << car_colour[i] << "    "

                             << car_num[i] << "    "

                             << car_price[i] << endl;

                        cout << "------------------------" << endl;
                    }
                    getch();
                }
                else if (costumer_option == 2)
                {
                    cout << "enter your name" << endl;
                    string name;
                    cin >> name;
                    cout << "enter your phone number";
                    int num;
                    cin >> num;
                    cout << "enter the car u selected";
                    string carname;
                    cin >> carname;
                    cout << "enter the date on which u want to visit";
                    int date;
                    cin >> date;
                    cout << "Hello " << name << " your test drive has been confirmed on " << date << endl;
                    cout << "plz take your dirving licence with you";

                    getch();
                }
                else if (costumer_option == 3)
                {
                    int choice;
                    cout << "Car Search Menu:\n";
                    cout << "1. serch by model\n";
                    cout << "2. serch by price\n";
                    cout << "enter the choice: ";
                    cin >> choice;

                    if (choice == 1)
                    {
                        int searchModel;
                        cout << "enter the name of model u want to search: " << endl;
                        cin >> searchModel;

                        // search by model
                        for (int i = 0; i <SIZE; i++)
                        {
                            if (car_model[i] == searchModel)
                            {
                                cout << "\nmodel of the car is:\n";
                                cout << "Model: " << car_model[i] << endl;

                                cout << "Price: " << car_price[i] << endl;
                            }
                        }
                    }
                    else if (choice == 2)
                    {
                        int maxPrice;
                        cout << "Maximum price enter karein: ";
                        cin >> maxPrice;

                        // search for price
                        cout << "\nAvailable cars:\n";
                        for (int i = 0; i < 3; i++)
                        {
                            if (car_price[i] <= maxPrice)
                            {
                                cout << "Model: " << car_model[i] << ", Price: " << car_price[i] << endl;
                            }
                        }
                    }
                    else
                    {
                        cout << "wrong choice!\n";
                    }
                }
                else if (costumer_option == 4)
                {
                    cout << "*******************************" << endl;
                    cout << "thnx 4 choosing our software" << endl;
                    cout << "*******************************" << endl;
                    getch();
                    break;
                }
            }

            return 0;
        }
    }
}