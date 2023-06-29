/*
#include <QtTest>
#include "MeticRegister.h"

class UnitTest : public QObject
{
    Q_OBJECT

public:
    UnitTest();
    ~UnitTest();

private slots:
    void testCase1();
    void testCase2();
    void testCase3();
    void testCase4();
    void testCase5();
    void testCase6();
    void testCase7();
    void testCase8();
    void testCase9();
    void testCase10();
};

UnitTest::UnitTest()
{

}

UnitTest::~UnitTest()
{

}

void UnitTest::testCase1()
{
    int temp_time = std::time(nullptr);
    MeticRegister::getInstance()->add_metr(13, 14);
    QCOMPARE(MeticRegister::getInstance()->count_cometr(temp_time), 27);
}

void UnitTest::testCase2()
{
    int temp_time = std::time(nullptr);
    MeticRegister::getInstance()->add_metr(7, 13);
    QCOMPARE(MeticRegister::getInstance()->count_cometr(temp_time), 20);
}

void UnitTest::testCase3()
{
    int temp_time = std::time(nullptr);
    MeticRegister::getInstance()->add_metr(2, 14);
    QCOMPARE(MeticRegister::getInstance()->count_cometr(temp_time), 16);
}

void UnitTest::testCase4()
{
    int temp_time = std::time(nullptr);
    MeticRegister::getInstance()->add_metr(15, 21);
    QCOMPARE(MeticRegister::getInstance()->count_cometr(temp_time), 36);
}

void UnitTest::testCase5()
{
    int temp_time = std::time(nullptr);
    MeticRegister::getInstance()->add_metr(17, 24);
    QCOMPARE(MeticRegister::getInstance()->count_cometr(temp_time), 41);
}

void UnitTest::testCase6()
{
    int temp_time = std::time(nullptr);
    MeticRegister::getInstance()->add_metr(34, 24);
    QCOMPARE(MeticRegister::getInstance()->count_cometr(temp_time), 58);
}

void UnitTest::testCase7()
{
    int temp_time = std::time(nullptr);
    MeticRegister::getInstance()->add_metr(41, 24);
    QCOMPARE(MeticRegister::getInstance()->count_cometr(temp_time), 65);
}

void UnitTest::testCase8()
{
    int temp_time = std::time(nullptr);
    MeticRegister::getInstance()->add_metr(65, 31);
    QCOMPARE(MeticRegister::getInstance()->count_cometr(temp_time), 96);
}

void UnitTest::testCase9()
{
    int temp_time = std::time(nullptr);
    MeticRegister::getInstance()->add_metr(72, 91);
    QCOMPARE(MeticRegister::getInstance()->count_cometr(temp_time), 163);
}

void UnitTest::testCase10()
{
    int temp_time = std::time(nullptr);
    MeticRegister::getInstance()->add_metr(72, 95);
    QCOMPARE(MeticRegister::getInstance()->count_cometr(temp_time), 167);
}

QTEST_APPLESS_MAIN(UnitTest)

#include "tst_unit_test.moc"
*/

