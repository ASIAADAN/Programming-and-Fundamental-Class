#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int total_student = 1000;
    int index = 5;
    // data structure
    string namearray[total_student] = {"zainab", "ali", "faiz", "iqbal", "rabia"};
    int matricarray[total_student] = {980, 890, 760, 1039, 1040};
    int interarray[total_student] = {1039, 998, 1021, 1027, 1100};
    string p1array[total_student] = {"CS", "CE", "CS", "IT", "IT"};
    string p2array[total_student] = {"CE", "CS", "IT", "IT", "CS"};
    string p3array[total_student] = {"CS", "CE", "CS", "IT", "CE"};
    int agearray[total_student] = {19, 20, 21, 24, 21};
    float aggrearray[total_student];
    int ecatarray[total_student] = {290, 230, 330, 390, 180};

    // main header od UMS
    system("cls");
    while (true)
    {
        cout << "             _____________________________________________         " << endl;
        cout << "             |              WELCOME TO                   |         " << endl;
        cout << "             |       UNIVERSTY MENEGMENT SYSTEM          |         " << endl;
        cout << "             |___________________________________________|         " << endl;

        cout << "user menu" << endl;
        cout << "1..Admin" << endl;
        cout << "2..Student" << endl;
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
                        cout << "1.show all student" << endl;
                        cout << "2.search student" << endl;
                        cout << "3.update student" << endl;
                        cout << "4.generate merti list" << endl;
                        cout << "5.delete student" << endl;
                        cout << "6.logout" << endl;
                        cout << "choose the option: ";
                        int admin_option;
                        cin >> admin_option;
                        if (admin_option == 1)
                        {

                            // show student record
                            cout << "Name\tage\tmatric\tinter\tecat\tp1\tp2\tp3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (namearray[i] != " ")
                                {
                                    cout << namearray[i] << "\t" << agearray[i] << "\t" << matricarray[i] << "\t" << interarray[i] << "\t" << ecatarray[i] << "\t" << p1array[i] << "\t" << p2array[i] << "\t" << p3array[i] << endl;
                                }
                            }
                        }
                        else if (admin_option == 2)
                        {
                            // search the student
                            cout << "enter the name you want to serch:";
                            string name;
                            cin >> name;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (namearray[i] == name)
                                {
                                    found = true;
                                    cout << "Name\tage\tmatric\tinter\tecat\tp1\tp2\tp3" << endl;
                                    cout << namearray[i] << "\t" << agearray[i] << "\t" << matricarray[i] << "\t" << interarray[i] << "\t" << ecatarray[i] << "\t" << p1array[i] << "\t" << p2array[i] << "\t" << p3array[i] << endl;
                                }
                                if (found == false)
                                {
                                    cout << "record not found:" << name << endl;
                                }
                            }
                        }
                        else if (admin_option == 3)
                        {
                            // update student
                            cout << "enter the name you want to update:";
                            string name;
                            cin >> name;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (namearray[i] == name)
                                {
                                    found = true;
                                    cout << "--------------------old record--------------------" << endl;
                                    cout << "Name\tage\tmatric\tinter\tecat\tp1\tp2\tp3" << endl;
                                    cout << namearray[i] << "\t" << agearray[i] << "\t" << matricarray[i] << "\t" << interarray[i] << "\t" << ecatarray[i] << "\t" << p1array[i] << "\t" << p2array[i] << "\t" << p3array[i] << endl;

                                    cout << "enter new record for update:" << endl;

                                    cout << "enter user name:" << endl;
                                    string name;
                                    cin >> name;
                                    cout << "enter inter marks:" << endl;
                                    int inter;
                                    cin >> inter;
                                    cout << "enter matric marks:" << endl;
                                    int matric;
                                    cin >> matric;
                                    cout << "enter age :" << endl;
                                    int age;
                                    cin >> age;
                                    cout << "enter ecat marks:" << endl;
                                    int ecat;
                                    cin >> ecat;
                                    cout << "enter CS,CE,IT as your prefrence";

                                    cout << "enter prefrence 1:" << endl;
                                    string p1;
                                    cin >> p1;

                                    cout << "enter preference 2:" << endl;
                                    string p2;
                                    cin >> p2;

                                    cout << "enter prefrence 3:" << endl;
                                    string p3;
                                    cin >> p3;

                                    namearray[index] = name;
                                    agearray[index] = age;
                                    matricarray[index] = matric;
                                    interarray[index] = inter;
                                    ecatarray[index] = ecat;
                                    p1array[index] = p1;
                                    p2array[index] = p2;
                                    p3array[index] = p3;
                                    index++;
                                }
                                if (found == false)
                                {
                                    cout << "record not found:" << name << endl;
                                }
                            }
                        }
                        else if (admin_option == 4)
                        {
                            // generate merit list

                            for (int i = 0; i < index; i++)
                            {
                                float agri = matricarray[i] / 1050.0 * 100.0 * 0.30 + interarray[i] / 1100.0 * 100.0 * 0.40 + ecatarray[i] / 400.0 * 100.0 * 0.30;
                                aggrearray[i] = agri;
                            }
                            // code to display all data with aggrigate
                            cout << "Name\tage\taggrigate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (namearray[i] != " ")
                                {
                                    cout << namearray[i] << "\t" << agearray[i] << "\t" << aggrearray[i] << endl;
                                }
                            }

                            // code to display sorted data

                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i; j < index; j++)
                                {
                                    if (aggrearray[i] < aggrearray[j])
                                    {
                                        // swapping of names
                                        string temp= namearray[i];
                                        namearray[i]=namearray[j];
                                        namearray[j]=temp;
                                        // swapping of age
                                        int tempage= agearray[i];
                                        agearray[i]=agearray[j];
                                        agearray[j]=tempage;
                                        // swapping of ecat
                                        int tempecat= ecatarray[i];
                                        ecatarray[i]=ecatarray[j];
                                        ecatarray[j]=tempecat;
                                        
                                        // swapping of matric
                                        int tempmatric= matricarray[i];
                                        matricarray[i]=matricarray[j];
                                       matricarray[j]=tempmatric;
                                        // swapping of inter
                                        int tempinter= interarray[i];
                                        interarray[i]=interarray[j];
                                        interarray[j]=tempinter;
                                        // swapping of p1
                                        string tempp1= p1array[i];
                                        p1array[i]=p1array[j];
                                        p1array[j]=tempp1;
                                        // swapping of p2
                                        string tempp2= p2array[i];
                                        p2array[i]=p2array[j];
                                        p2array[j]=tempp2;
                                        // swapping of p3
                                        string tempp3= p3array[i];
                                        p3array[i]=p3array[j];
                                        p3array[j]=tempp3;
                                        // swapping of aggregate
                                        float tempaggregate= aggrearray[i];
                                        aggrearray[i]=aggrearray[j];
                                        aggrearray[j]=tempaggregate;
                                    }
                                }
                            }
                        }
                        else if (admin_option == 5)
                        {
                            // delete the student history
                            cout << "enter the name you want to delete:";
                            string name;
                            cin >> name;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (namearray[i] == name)
                                {
                                    found == true;
                                }
                            }
                            if (found == true)
                            {
                                namearray[i] = " ";
                                agearray[i] = 0;
                                matricarray[i] = 0;
                                interarray[i] = 0;
                                ecatarray[i] = 0;
                                p1array[i] = " ";
                                p2array[i] = " ";
                                p3array[i] = " ";
                                cout << "record deleted";
                            }
                            else
                            {
                                cout << "record not found";
                            }
                        }

                        else if (admin_option == 6)
                        {
                            cout << "loged out:" << endl;
                            break;
                        }
                        else
                        {
                            cout << "wrong option selected" << endl;
                        }
                        getch();
                    }
                    getch();
                    break;
                    
                }

                else
                {

                    cout << "username and passward is wrong" << endl;
                }

                getch();
            }
        }
        else if (useroption == 2)
        {
            // take information of student
            cout << "welcome to student menue:" << endl;
            cout << "enter user name:" << endl;
            string name;
            cin >> name;
            cout << "enter inter marks:" << endl;
            int inter;
            cin >> inter;
            cout << "enter matric marks:" << endl;
            int matric;
            cin >> matric;
            cout << "enter age :" << endl;
            int age;
            cin >> age;
            cout << "enter ecat marks:" << endl;
            int ecat;
            cin >> ecat;
            cout << "enter CS,CE,IT as your prefrence";

            cout << "enter prefrence 1:" << endl;
            string p1;
            cin >> p1;

            cout << "enter preference 2:" << endl;
            string p2;
            cin >> p2;

            cout << "enter prefrence 3:" << endl;
            string p3;
            cin >> p3;

            namearray[index] = name;
            agearray[index] = age;
            matricarray[index] = matric;
            interarray[index] = inter;
            ecatarray[index] = ecat;
            p1array[index] = p1;
            p2array[index] = p2;
            p3array[index] = p3;
            index++;
            cout << "data saved sucessfully" << endl;
            getch();
        }
        else if (useroption == 3)
        {
            // exiting the system
            cout << "you exit";
            break;
        }
        else
        {
            cout << "you enter wrong option";
        }
    }
    cout << endl
         << "thanks for choosing this software";
} // end of our main while loop
