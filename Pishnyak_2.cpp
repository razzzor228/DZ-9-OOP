#include "Pishnyak_2.h"

Pishnyak_2::Pishnyak_2() { s = new string(typeid(Pishnyak_2).name()); }

Pishnyak_2::~Pishnyak_2() { delete s; }

Pishnyak_2::Pishnyak_2(const Pishnyak_2& obj) :Pishnyak_1(obj) { s = new string; *s = *obj.s; }

void Pishnyak_2::Copy(list<Pishnyak*>& db, const list<Pishnyak*>& db1, const list<Pishnyak*>::const_iterator it) { db.push_back(new Pishnyak_2(*this)); }

void Pishnyak_2::Print() { cout << (*s) << endl; }
