#include <QApplication>
#include <QDebug>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <stdio.h>
#include <stdlib.h>
#include <QtWidgets/QTextEdit>
#include "Cell.h"


int main(int argv,char **args) {
    QApplication app(argv,args);

    QTableWidget *m_table = new QTableWidget(2,2);
   /* Cell *cella1=new Cell();
    Cell *cella2=new Cell();
    Cell *cella3=new Cell();
    Cell *cella4=new Cell();
    cella1->setValue(3);
    cella2->setValue(4);
    cella3->setValue(8);
    cella4->setValue(9.3);
    m_table->setItem(0,0,cella1);
    m_table->setItem(0,1,cella2);
    m_table->setItem(1,0,cella3);
    m_table->setItem(1,1,cella4);
    */
    for (int row = 0; row < m_table->rowCount(); ++row) {
        for (int column = 0; column < m_table->columnCount(); ++column) {
            QTableWidgetItem *cella=new QTableWidgetItem();
            cella->setText(QString::number(row));
            m_table->setItem(row, column, cella);
        }
    }

    const int lastRow = m_table->rowCount();
    m_table->setRowCount(lastRow + 1);
    for (int column = 0; column < m_table->columnCount(); ++column)
        m_table->setItem(lastRow, column, new QTableWidgetItem);

    QTableWidgetItem *item = new QTableWidgetItem;
    item->setText("Sum");
    m_table->setVerticalHeaderItem(lastRow, item);
    m_table->show();
    return app.exec();
}