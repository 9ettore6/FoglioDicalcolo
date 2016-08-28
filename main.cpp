#include <QApplication>
#include <QDebug>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <stdio.h>
#include <stdlib.h>
#include <QtWidgets/QTextEdit>
#include "Cell.h"
#include "SumFormula.h"
#include "MeanFormula.h"
#include "MinFormula.h"
#include "MaxFormula.h"


int main(int argv,char **args) {
    QApplication app(argv,args);

    QTableWidget *m_table = new QTableWidget(2,2);
    Cell *cella1=new Cell();
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

    //Aggiungo la cella somma e sumformula
    int lastRow = m_table->rowCount();
    Cell *sum = new Cell;
    m_table->setRowCount(lastRow + 1);
    sum->setText("Sum");
    m_table->setVerticalHeaderItem(lastRow, sum);
    Cell *sumCell=new Cell();
    m_table->setItem(lastRow,0,sumCell);
    SumFormula *sumFormula=new SumFormula(sumCell);

    sumFormula->addCell(cella1);
    sumFormula->addCell(cella2);
    sumFormula->addCell(cella3);
    sumFormula->addCell(cella4);

    //Aggiungo la cella mean e MeanFormula
    lastRow+=1;
    Cell *mean = new Cell;
    m_table->setRowCount(lastRow + 1);
    mean->setText("Mean");
    m_table->setVerticalHeaderItem(lastRow, mean);
    Cell *meanCell=new Cell();
    m_table->setItem(lastRow,0,meanCell);
    MeanFormula *meanFormula=new MeanFormula(meanCell);

    meanFormula->addCell(cella1);
    meanFormula->addCell(cella2);
    meanFormula->addCell(cella3);
    meanFormula->addCell(cella4);

    //Aggiungo la cella max e MaxFormula
    lastRow+=1;
    Cell *max = new Cell;
    m_table->setRowCount(lastRow + 1);
    max->setText("Max");
    m_table->setVerticalHeaderItem(lastRow, max);
    Cell *maxCell=new Cell();
    m_table->setItem(lastRow,0,maxCell);
    MaxFormula *maxFormula=new MaxFormula(maxCell);

    maxFormula->addCell(cella1);
    maxFormula->addCell(cella2);
    maxFormula->addCell(cella3);
    maxFormula->addCell(cella4);

    //Aggiungo la cella min e MinFormula
    lastRow+=1;
    Cell *min = new Cell;
    m_table->setRowCount(lastRow + 1);
    min->setText("Min");
    m_table->setVerticalHeaderItem(lastRow, min);
    Cell *minCell=new Cell();
    m_table->setItem(lastRow,0,minCell);
    MinFormula *minFormula=new MinFormula(minCell);

    minFormula->addCell(cella1);
    minFormula->addCell(cella2);
    minFormula->addCell(cella3);
    minFormula->addCell(cella4);
    /*
    for (int row = 0; row < m_table->rowCount(); ++row) {
        for (int column = 0; column < m_table->columnCount(); ++column) {
            QTableWidgetItem *cella=new QTableWidgetItem();
            cella->setText(QString::number(row));
            m_table->setItem(row, column, cella);
        }
    }
    m_table->setRowCount(lastRow + 1);
    for (int column = 0; column < m_table->columnCount(); ++column)
        m_table->setItem(lastRow, column, new QTableWidgetItem);
    */

    m_table->show();
    return app.exec();
}