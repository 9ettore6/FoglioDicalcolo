
#ifndef FOGLIODICALCOLO_SUBJECT_H
#define FOGLIODICALCOLO_SUBJECT_H

#include "Observer.h"

class Subject {
public:
    virtual ~Subject(){};

    virtual void subscribe(Observer* o)=0;
    virtual void unsubscribe(Observer* o)=0;
    virtual void notify() const=0;
};

#endif //FOGLIODICALCOLO_SUBJECT_H

