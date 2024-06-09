#include <iostream>
using namespace std;

int index = 0;

class Patient
{
private:
    int room_number;
    string name, gender, blood_group, state;
    string city, birth_date, marital, country;

public:
    void add_patient()
    {
        cout << "\nEnter the name of the Patient : ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter the Room number of " << name << " : ";
        cin >> room_number;
        cout << "Enter the gender of " << name << " : ";
        cin.ignore();
        getline(cin, gender);
        cout << "Enter the blood group of " << name << " : ";
        getline(cin, blood_group);
        cout << "Enter the date of birth of " << name << " : ";
        getline(cin, birth_date);
        cout << "Enter the marital status of " << name << " : ";
        getline(cin, marital);
        cout << "Address of " << name << " ↧ " << endl;
        cout << "Country : ";
        getline(cin, country);
        cout << "City : ";
        getline(cin, city);
        cout << "State : ";
        getline(cin, state);

        index++;
        cout << "\n\tPatient added successfully!\n\n";
    }

    void display_patient(Patient mareez[])
    {
        if (index == 0)
        {
            cout << "\n\tPehlay Record tou daal do baad mein dekh bhi lena!\n\n";
            exit(0);
        }

        int what;
        cout << "\n1- Show all Data" << endl;
        cout << "2- Show specific Data" << endl;
        cout << "\nEnter your choice : ";
        cin >> what;

        if (what == 1)
        {
            int passwd, tries = 0;

            while (tries != 3)
            {
                cout << "Enter the password : ";
                cin >> passwd;

                if (passwd == 786)
                {
                    for (int i = 0; i < index; i++)
                    {
                        cout << "\nName : " << mareez[i].name << endl;
                        cout << "Gender : " << mareez[i].gender << endl;
                        cout << "Room number : " << mareez[i].room_number << endl;
                        cout << "Blood Group : " << mareez[i].blood_group << endl;
                        cout << "Date of Birth : " << mareez[i].birth_date << endl;
                        cout << "Marital Status : " << mareez[i].marital << endl;
                        cout << "Address ↧ " << endl;
                        cout << "Country : " << mareez[i].country << endl;
                        cout << "City : " << mareez[i].city << endl;
                        cout << "State : " << mareez[i].state << endl << endl;
                    }
                }
                else
                {
                    tries++;
                    cout << "\nWrong password, Please try again!\n\n";
                    continue;
                }
            }
        }

        else if (what == 2)
        {
            string find;
            cout << "\nEnter the name of the Patient : ";
            cin.ignore();
            getline(cin, find);

            for (int i = 0; i < index; i++)
            {
                if (find == mareez[i].name) // this is case sensitive
                {
                    cout << "\nName : " << mareez[i].name << endl;
                    cout << "Gender : " << mareez[i].gender << endl;
                    cout << "Room number : " << mareez[i].room_number << endl;
                    cout << "Blood Group : " << mareez[i].blood_group << endl;
                    cout << "Date of Birth : " << mareez[i].birth_date << endl;
                    cout << "Marital Status : " << mareez[i].marital << endl;
                    cout << "Address : " << endl;
                    cout << "Country : " << mareez[i].country << endl;
                    cout << "City : " << mareez[i].city << endl;
                    cout << "State : " << mareez[i].state << endl << endl;
                }
                else
                {
                    cout << "\nNo Patient found with this name!\n\n";
                }
            }
        }
    }

    void search_patient(Patient mareez[])
    {
        if (index == 0)
        {
            cout << "\n\tPehlay Record tou daal do baad mein search bhi kar lena!\n\n";
            exit(0);
        }

        int kya;
        cout << "\n1- Search by City" << endl;
        cout << "2- Search by Blood Group" << endl;
        cout << "\nEnter your choice : ";
        cin >> kya;

        if (kya == 1)
        {
            string tmp_city;
            cout << "Enter the City : ";
            cin >> tmp_city;

            for (int i = 0; i < index; i++)
            {
                if (tmp_city == mareez[i].city)
                {
                    cout << "\nName : " << mareez[i].name << endl;
                    cout << "Gender : " << mareez[i].gender << endl;
                    cout << "Room number : " << mareez[i].room_number << endl;
                    cout << "Blood Group : " << mareez[i].blood_group << endl;
                    cout << "Date of Birth : " << mareez[i].birth_date << endl;
                    cout << "Marital Status : " << mareez[i].marital << endl;
                    cout << "Address ↧ " << endl;
                    cout << "Country : " << mareez[i].country << endl;
                    cout << "City : " << mareez[i].city << endl;
                    cout << "State : " << mareez[i].state << endl << endl;
                }
                else
                {
                    cout << "\nNo Patient found!\n\n";
                }
            }
        }
        else if (kya == 2)
        {
            string tmp_blood;
            cout << "Enter the Blood Group : ";
            cin >> tmp_blood;

            for (int i = 0; i < index; i++)
            {
                if (tmp_blood == mareez[i].blood_group)
                {
                    cout << "\nName : " << mareez[i].name << endl;
                    cout << "Gender : " << mareez[i].gender << endl;
                    cout << "Room number : " << mareez[i].room_number << endl;
                    cout << "Blood Group : " << mareez[i].blood_group << endl;
                    cout << "Date of Birth : " << mareez[i].birth_date << endl;
                    cout << "Marital Status : " << mareez[i].marital << endl;
                    cout << "Address ↧ " << endl;
                    cout << "Country : " << mareez[i].country << endl;
                    cout << "City : " << mareez[i].city << endl;
                    cout << "State : " << mareez[i].state << endl << endl;
                }
                else
                {
                    cout << "\nNo Patient found!\n\n";
                }
            }
        }
    }

    void modify_patient(Patient mareez[])
    {
        if (index == 0)
        {
            cout << "\n\tPehlay Record tou daal do baad mein modify bhi kar lena!\n\n";
            exit(0);
        }

        string find;
        cout << "\nEnter the name of the Patient to modify data : ";
        cin.ignore();
        getline(cin, find);

        for (int i = 0; i < index; i++)
        {
            if (find == mareez[i].name) // this is case sensitive
            {
                cout << "\nPrevious Data\n";
                cout << "\nName : " << mareez[i].name << endl;
                cout << "Gender : " << mareez[i].gender << endl;
                cout << "Room number : " << mareez[i].room_number << endl;
                cout << "Blood Group : " << mareez[i].blood_group << endl;
                cout << "Date of Birth : " << mareez[i].birth_date << endl;
                cout << "Marital Status : " << mareez[i].marital << endl;
                cout << "Address ↧ " << endl;
                cout << "Country : " << mareez[i].country << endl;
                cout << "City : " << mareez[i].city << endl;
                cout << "State : " << mareez[i].state << endl << endl;

                cout << "\nEnter the new name of the Patient : ";
                cin.ignore();
                getline(cin, mareez[i].name);
                cout << "Enter the new  Room number of " << mareez[i].name << " : ";
                cin >> mareez[i].room_number;
                cout << "Enter the new  gender of " << mareez[i].name << " : ";
                cin.ignore();
                getline(cin, mareez[i].gender);
                cout << "Enter the new  blood group of " << mareez[i].name << " : ";
                getline(cin, mareez[i].blood_group);
                cout << "Enter the new  date of birth of " << mareez[i].name << " : ";
                getline(cin, mareez[i].birth_date);
                cout << "Enter the new  marital status of " << mareez[i].name << " : ";
                getline(cin, mareez[i].marital);
                cout << "Address of " << mareez[i].name << " ↧ " << endl;
                cout << "Country : ";
                getline(cin, mareez[i].country);
                cout << "City : ";
                getline(cin, mareez[i].city);
                cout << "State : ";
                getline(cin, mareez[i].state);
                cout << "\nPatient Record updated successfully!\n" << endl;
            }
            else
            {
                cout << "\nNo Patient found with this name!\n";
            }
        }
    }

    void count_patient()
    {
        cout << "\nTotal " << index << " Patients have been added to your records!\n\n";
    }

    void delete_patient(Patient mareez[])
    {
        if (index == 0)
        {
            cout << "\n\tPehlay Record tou daal do baad mein delete bhi kar lena!\n\n";
            exit(0);
        }

        int del;
        cout <<"\n1- Delete all Data"<<endl;
        cout <<"2- Delete specific Data"<<endl;
        cout <<"\nEnter your choice : ";
        cin >>del;

        if (del == 1)
        {
            int pass, tryy = 0;

            while (tryy != 3)
            {
                cout <<"\nEnter the password : ";
                cin >> pass;

                if (pass == 786)
                {
                    index = 0;
                    cout <<"\nEverything deleted!\n"<<endl;
                }
                else
                {
                    tryy++;
                    cout <<"\nWrong password, Please enter again!\n"<<endl;
                    continue;
                }
            }
        }
        else if (del == 2)
        {
            string naam;
            cout <<"\nEnter the name of the patient to delete data : ";
            cin.ignore();
            getline (cin, naam);

            for (int i = 0 ; i < index ; i++)
            {
                if (naam == mareez[i].name)
                {
                    mareez[i].name = mareez[i+1].name;
                    mareez[i].gender = mareez[i+1].gender;
                    mareez[i].room_number = mareez[i+1].room_number;
                    mareez[i].blood_group = mareez[i+1].blood_group;
                    mareez[i].birth_date  = mareez[i+1].birth_date;
                    mareez[i].marital = mareez[i+1].marital;
                    mareez[i].country = mareez[i+1].country;
                    mareez[i].city = mareez[i+1].city;
                    mareez[i].state = mareez[i+1].state;
                    
                    index--;
                    cout <<"\nPatient record deleted successfully!\n"<<endl;
                }
                else  
                {
                    cout <<"\nNo patient found with this name!\n"<<endl;
                }
            }
        }
    }
};

int main()
{
    Patient mareez[3];
    int choice;
    while (1)
    {
        cout << "\t\t\t\t||||| PATIENT INFORMATION SYSTEM |||||" << endl;
        cout << "\n1- Enter new Patient" << endl;
        cout << "2- Display Patient Info" << endl;
        cout << "3- Search by City/Blood Group" << endl;
        cout << "4- Modify Patient Info" << endl;
        cout << "5- Delete Patient Info" << endl;
        cout << "6- Total Patients" << endl;
        cout << "7- Exit" << endl;

        cout << "\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            mareez[index].add_patient();
            break;
        case 2:
            mareez[index].display_patient(mareez);
            break;
        case 3:
            mareez[index].search_patient(mareez);
            break;
        case 4:
            mareez[index].modify_patient(mareez);
            break;
        case 5:
            mareez[index].delete_patient(mareez);
            break;
        case 6:
            mareez[index].count_patient();
            break;
        case 7:
            exit(0);
            break;
        default:
            cout << "\nPlease enter the correct choice!\n\n";
            continue;
        }
    }
    return 0;
}