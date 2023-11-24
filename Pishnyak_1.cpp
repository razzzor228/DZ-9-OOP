#include "Pishnyak_1.h"

Pishnyak_1::Pishnyak_1() { s = new string(typeid(Pishnyak_1).name()); }

Pishnyak_1::~Pishnyak_1() { delete s; }

Pishnyak_1::Pishnyak_1(const Pishnyak_1& obj) :Pishnyak(obj) { s = new string; *s = *obj.s; }

void Pishnyak_1::Copy(list<Pishnyak*>& db, const list<Pishnyak*>& db1, const list<Pishnyak*>::const_iterator it) {
    delete* it;
    list<Pishnyak*>* db11 = const_cast<list<Pishnyak*>*>(&db1);
    db11->erase(it);
}

void Pishnyak_1::Print() { cout << (*s) << endl; }
