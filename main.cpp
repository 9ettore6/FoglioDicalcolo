#include <QApplication>
#include <QDebug>
#include <QTableWidget>
#include <QTableWidgetItem>

int main() {
    QTableWidget *m_table = new QTableWidget(10, 10);

    for (int row = 0; row < m_table->rowCount(); ++row) {
        for (int column = 0; column < m_table->columnCount(); ++column) {
            QTableWidgetItem *tableItem = new QTableWidgetItem;
            tableItem->setText(QString::number(row));
            m_table->setItem(row, column, tableItem);
        }
    }

    const int lastRow = m_table->rowCount();
    m_table->setRowCount(lastRow + 1);
    for (int column = 0; column < m_table->columnCount(); ++column)
        m_table->setItem(lastRow, column, new QTableWidgetItem);

    QTableWidgetItem *item = new QTableWidgetItem;
    item->setText("Sum");
    m_table->setVerticalHeaderItem(lastRow, item);

    return 0;
}