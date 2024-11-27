#include <iostream>
using namespace std;
struct User
{
    int id = 0;
    string name = "";
    string email = "";
};

class UserManager
{
private:
    User users[5];
    int nextId = 1;

    User *findUserById(int id)
    {
        for (int i = 0; i < 5; i++)
        {
            if (users[i].id == id)
            {
                return &users[i];
            }
        }
        return nullptr;
    }

public:
    void addUser()
    {
        User user;
        user.id = nextId++;
        cout << "Enter user name: ";
        cin.ignore();
        getline(cin, user.name);
        cout << "Enter user email: ";
        getline(cin, user.email);
        users[nextId - 2] = user;
        cout << "User added successfully!\n";
    }

    void viewUsers() const
    {
        int check = 0;
        cout << "ID\tName\tEmail\n";
        for (int i = 0; i < 5; i++)
        {
            if (users[i].id == i + 1)
            {
                check = 1;
                cout << users[i].id << "\t" << users[i].name << "\t" << users[i].email << "\n";
            }
        }
        if (!check)
        {
            cout << "No users available.\n";
            return;
        }
    }

    void updateUser()
    {
        int id;
        cout << "Enter user ID to update: ";
        cin >> id;

        User *user = findUserById(id);
        if (user)
        {
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, user->name);
            cout << "Enter new email: ";
            getline(cin, user->email);
            cout << "User updated successfully!\n";
        }
        else
        {
            cout << "User not found!\n";
        }
    }

    void deleteUser()
    {
        int id;
        cout << "Enter user ID to delete: ";
        cin >> id;
        int check = 0;
        for (int i = 0; i < 5; i++)
        {
            if (users[i].id == id)
            {
                check++;
            }
        }
        if (check)
        {
            users[id - 1].id = 0;
            users[id - 1].name = "";
            users[id - 1].email = "";
            cout << "User deleted successfully!\n";
        }
        else
        {
            cout << "User not found!\n";
        }
    }
};

void displayMenu()
{
    cout << "\nUser Management System\n";
    cout << "1. Add User\n";
    cout << "2. View All Users\n";
    cout << "3. Update User\n";
    cout << "4. Delete User\n";
    cout << "5. Exit\n";
    cout << "Choose an option: ";
}

int main()
{
    UserManager userManager;
    int choice;

    do
    {
        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            userManager.addUser();
            break;
        case 2:
            userManager.viewUsers();
            break;
        case 3:
            userManager.updateUser();
            break;
        case 4:
            userManager.deleteUser();
            break;
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}


