
#include "Cell.h"


void Cell::setValue(float v) {
    QString st=QString::fromStdString(std::to_string(v));
    this->setText(st);
    notify();
}
QString Cell::getValue() {
    return this->text();
}
void Cell::setText(const QString &text) {
    QTableWidgetItem::setText(text);
    notify();
}
void Cell::subscribe(Observer *o) {
    observers.push_back(o);
}
void Cell::unsubscribe(Observer *o) {
    observers.remove(o);
}
void Cell::notify() const {
    for(auto it=observers.begin();it!=observers.end();it++)
        (*it)->update();
}
Cell* Cell::clone() const {
    return new Cell(*this);
}

bool Cell::operator <(const QTableWidgetItem & other) const
{
    return text().toInt() < other.text().toInt();
}

QString Cell::text() const {
    return QTableWidgetItem::text();
}

void Cell::setData(int role, const QVariant &value) {
    QTableWidgetItem::setData(role,value);
    notify();
}