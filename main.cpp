#include <iostream>
#include <QCoreApplication>
#include "IntList.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    IntList list;
    list.AddLast(2);
    list.AddFirst(1);


    cout << list.GetAllItemsInfo();
    return a.exec();
}
