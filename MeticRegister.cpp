#include "MeticRegister.h"

MeticRegister *MeticRegister::p_instance = nullptr; // Инициализация статического указателя на экземпляр класса
MeticRegisterDestroyer MeticRegister::destroyer; // Создание экземпляра класса MeticRegisterDestroyer

MeticRegisterDestroyer::~MeticRegisterDestroyer()
{
    delete p_instance; // Удаление экземпляра класса MeticRegister
}

void MeticRegisterDestroyer::initialize(MeticRegister *p)
{
    p_instance = p; // Инициализация указателя на экземпляр класса MeticRegister
}

MeticRegister::MeticRegister()
{
}

MeticRegister::~MeticRegister()
{
}

MeticRegister *MeticRegister::getInstance()
{
    if (!p_instance)
    {
        p_instance = new MeticRegister(); // Создание экземпляра класса MeticRegister
        destroyer.initialize(p_instance); // Инициализация экземпляра класса MeticRegisterDestroyer
    }
    return p_instance; // Возвращение указателя на экземпляр класса MeticRegister
}

bool MeticRegister::add_metr(int resp_t, int wait_t)
{
    int k1 = m1.size(); // Изначальный размер массива
    int temp_time = std::time(nullptr); // Получение текущего времени
    m1[temp_time] = std::make_pair(resp_t, wait_t); // Добавление метрики в ассоциативный массив
    int k2 = m1.size(); // Текущий размер массива
    if (k2 > k1)
    {
        return true; // Метрика успешно добавлена
    }
    else
    {
        return false; // Метрика не добавлена (уже существует метрика с таким ключом)
    }
}

bool MeticRegister::show_mert()
{
    for (auto it = m1.begin(); it != m1.end(); ++it)
    {
        std::cout << "Key: " << it->first << ", Response time: " << it->second.first << ", Wait time: " << it->second.second << std::endl;
    }
    return true; // Вывод метрик выполнен успешно
}

int MeticRegister::count_cometr(int key)
{
    auto it = m1.find(key); // Поиск метрики по ключу
    int result = 0; // Результат вычисления вспомогательной метрики
    if (it != m1.end())
    {
        result = it->second.first + it->second.second; // Вычисление суммы времени ожидания и времени отклика
    }
    return result; // Возвращение результата
}
