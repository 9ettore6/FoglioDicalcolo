//
// Created by Luca on 12/08/2016.
//

#include "Cell.h"

void Cell::setValue(float v) {
    QString st=QString::fromStdString(std::to_string(v));
    this->setText(st);
}
std::string Cell::getValue() {
    QString st=this->text();
    return st.toStdString();
}
void Cell::subscribe(Observer *o) {
    observers.push_back(o);
}
void Cell::unsubscribe(Observer *o) {
    observers.remove(o);
}
void Cell::notify() {
    for(auto it=observers.begin();it!=observers.end();it++)
        (*it)->update();
}