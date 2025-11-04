#ifndef FIRM_H
#define FIRM_H

#endif // FIRM_H

#include "QString"

class Firm {
    QString type;
    int size;
public:
    Firm();
    Firm(QString type, int size);
    Firm(const Firm&);
    void setType(QString type);
    QString getType();
    void setSize(int size);
    int getSize();
    QString toString();
    ~Firm();
};
