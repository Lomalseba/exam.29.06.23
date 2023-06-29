#ifndef METICREGISTER_H
#define METICREGISTER_H

#include <map>
#include <ctime>
#include <iostream>

class MeticRegister;

class MeticRegisterDestroyer
{
private:
    MeticRegister *p_instance;
public:
    ~MeticRegisterDestroyer();
    void initialize(MeticRegister *p);
};

class MeticRegister
{
private:
    std::map<int, std::pair<int, int>> m1; // Ассоциативный массив для хранения метрик
    static MeticRegister *p_instance; // Статический указатель на экземпляр класса MeticRegister
    static MeticRegisterDestroyer destroyer; // Экземпляр класса MeticRegisterDestroyer для удаления экземпляра MeticRegister

protected:
    MeticRegister(); // Конструктор по умолчанию (закрытый)
    MeticRegister(const MeticRegister &); // Конструктор копирования (закрытый)
    MeticRegister &operator=(MeticRegister &); // Оператор присваивания (закрытый)
    ~MeticRegister(); // Деструктор (закрытый)

    friend class MeticRegisterDestroyer; // Дружественный класс для доступа к закрытым членам

public:
    static MeticRegister *getInstance(); // Метод для получения экземпляра класса MeticRegister (реализация Singleton)
    bool add_metr(int resp_t, int wait_t); // Метод для добавления метрики
    bool show_mert(); // Метод для вывода всех метрик
    int count_cometr(int key); // Метод для вычисления вспомогательной метрики: суммы времени ожидания и времени отклика
};

#endif // METICREGISTER_H
