
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
    Cell* clone() const override;
    bool operator<(const QTableWidgetItem & other) const override;
    void setText(const QString & text);
    QString text() const;
    void setData(int role, const QVariant & value);
    virtual void subscribe(Observer *o) override;
    virtual void unsubscribe(Observer *o) override;
    virtual void notify() const override;
};

#endif //FOGLIODICALCOLO_CELL_H
