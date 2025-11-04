#include "Firm.h"

Firm::Firm() {
    type = "none";
    size = 0;
}

Firm::Firm(QString type, int size) {
    this->size = size;
    this->type = type;
}

Firm::Firm(const Firm& obj1) {
    this->size = obj1.size;
    this->type = obj1.type;
}

void Firm::setType(QString type) {
    this->type = type;
}

QString Firm::getType() {
    return this->type;
}

void Firm::setSize(int size) {
    this->size = size;
}

int Firm::getSize() {
    return this->size;
}

// QString Firm::toString() {
//     return ("\nType of firm: " + type + "\nSize of firm: " + QString::number(size));
// }

Firm::~Firm() {};
