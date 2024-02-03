#include <iostream>

/*
Task 3.
*/

void fillArray(int* arr, int size) {

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 50 + 1;
    }
}

void printArray(int* arr, int size) {

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

void findPairsWithSum(int* arr, int size, int sum) {

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {

            if (arr[i] + arr[j] == sum) {
                std::cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << std::endl;
            }
        }
    }
}

/*
Task 4.
*/

struct Contact {

    std::string name;
    std::string phoneNumber;
};

void addContact(Contact* contacts, int& numContacts) {

    std::cout << "Enter name: ";
    std::cin >> contacts[numContacts].name;

    std::cout << "Enter phone number: ";
    std::cin >> contacts[numContacts].phoneNumber;

    numContacts++;
    std::cout << "Contact added successfully." << std::endl;
}

void deleteContact(Contact* contacts, int& numContacts) {
    if (numContacts == 0) {
        std::cout << "No contacts to delete." << std::endl;
        return;
    }

    std::string nameToDelete;
    std::cout << "Enter the name of the contact to delete: ";
    std::cin >> nameToDelete;

    
    /*
    for (int i = 0; i < numContacts; ++i) {

        Тут я не смог удалить элемент

            std::cout << "Contact deleted successfully." << std::endl;
            return;
        }
    }

    std::cout << "Contact not found." << std::endl;
    */
}


void updateContact(Contact* contacts, int numContacts) {

    if (numContacts == 0) {
        std::cout << "No contacts to update." << std::endl;

        return;
    }

    std::string nameToUpdate;
    std::cout << "Enter the name of the contact to update: ";
    std::cin >> nameToUpdate;

    for (int i = 0; i < numContacts; ++i) {

        if (contacts[i].name == nameToUpdate) {

            std::cout << "Enter new phone number: ";
            std::cin >> contacts[i].phoneNumber;

            std::cout << "Enter new name or old one";
            std::cin >> contacts[i].name;

            std::cout << "Contact updated successfully." << std::endl;

            return;
        }
    }

    std::cout << "Contact not found." << std::endl;
}

void showContacts(Contact* contacts, int numContacts) {

    if (numContacts == 0) {
        std::cout << "No contacts to update." << std::endl;

        return;
    }

    for (int i = 0; i < numContacts; ++i) {
        std::cout << "Name: " << contacts[i].name << ", Phone Number: " << contacts[i].phoneNumber << std::endl;
    }

}



int main()
{

    /*
    Task3
    Обьявить и заполнить одномерный динамический массив случайными числами от 1 до 50.
    Показать его  на экран.
    Написать функцию которая находит и выводит на экран все пары элементов массива,
    сумма которых равна заданному числу(задаётся пользователем).
    Функция должна принимать три параметра - указатель на динамический массив,
    количество элементов в массиве и заданное число.
    Написать отдельную функцию для вывода массива на экран.
    */

    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* arr = new int[size];
    fillArray(arr, size);

    std::cout << "Generated array: ";
    printArray(arr, size);

    int sum;
    std::cout << "Enter the sum: ";
    std::cin >> sum;

    findPairsWithSum(arr, size, sum);

    delete[] arr;

    /*
    Task 4.
    Напишите программу для работы с телефонным справочником.
    Используя один указатель на функцию,
    реализуйте функции для добавления нового контакта,
    удаленияя существующего контакта,
    обновление информации о контакте
    и выводе информации обо всех контактах.
    В основной программе предложите пользователю выбрать необходимое действие
    и выполните операцию в соответсвии с выбором пользователя.
    */



   

    
}

