#include "Firm.h"

Firm::Firm() {
    type = "none";
    size = 0;
}

Firm::Firm(QString type, int size) {
    this->type = type;
    this->size = size;
}

QString Firm::toString() {
    return ("Type of firm: " + type + "\nSize of firm: " + QString::number(size));
}

Firm::~Firm() {};
