                    cout << "Hello " << name << " your test drive has been confirmed on " << date << endl;
                    cout << "plz take your dirving licence with you";

                    getch();
                }
                else if (costumer_option == 2)
                {
                    int choice;
                    cout << "Car Search Menu:\n";
                    cout << "1. serch of model\n";
                    cout << "2. serch of price\n";
                    cout << "enter the choice: ";
                    cin >> choice;

                    if (choice == 1)
                    {
                        int searchModel;
                        cout << "enter the name of model u want to search: " << endl;
                        cin >> searchModel;

                        // search by model
                        for (int i = 0; i < 3; i++)
                        {
                            if (car_model[i] == searchModel)
                            {
                                cout << "\nmodel of the car is:\n";
                                cout << "Model: " << car_model[i] << endl;

                                cout << "Price: " << car_cost[i] << endl;
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
                            if (car_cost[i] <= maxPrice)
                            {
                                cout << "Model: " << car_model[i] << ", Price: " << car_cost[i] << endl;
                            }
                        }
                    }
                    else
                    {
                        cout << "wrong choice!\n";