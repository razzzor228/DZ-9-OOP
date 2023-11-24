#include "Pishnyak.h"

Pishnyak::Pishnyak() { s = new string(typeid(Pishnyak).name()); }

Pishnyak::~Pishnyak() { delete s; }

Pishnyak::Pishnyak(const Pishnyak& obj) { s = new string; *s = *obj.s; }

void Pishnyak::Copy(list<Pishnyak*>& db, const list<Pishnyak*>& db1,const list<Pishnyak*>::const_iterator it) {
    delete* it;
    list<Pishnyak*> *db11 = const_cast<list<Pishnyak*>*>(&db1);
    db11->erase(it);
}

void Pishnyak::Print() { cout << (*s) << endl; }
