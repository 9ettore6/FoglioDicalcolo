//
// Created by Luca on 12/08/2016.
//

#ifndef FOGLIODICALCOLO_CELL_H
#define FOGLIODICALCOLO_CELL_H

#include <QTableWidgetItem>
#include <QDataStream>
#include <c++/string>
#include <c++/list>

#include "Subject.h"

class Cell : public QTableWidgetItem, public Subject{
private:
    std::list <Observer *> observers;
public:
    void setValue(float v);
    QString getValue();
    QTableWidgetItem* clone() const;
    QVariant data(int) const;
    void setData(int, const QVariant&);
    void write(QDataStream &out)const;
    void read(QDataStream &in);
    bool operator<(const QTableWidgetItem & other) const;
    virtual ~Cell();
    virtual void subscribe(Observer *o) override;
    virtual void unsubscribe(Observer *o) override;
    virtual void notify() override;
};

#endif //FOGLIODICALCOLO_CELL_H
