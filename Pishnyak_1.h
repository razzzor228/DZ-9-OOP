#pragma once
#include "Pishnyak.h"
class Pishnyak_1 :public Pishnyak
{
    string* s;
public:
    Pishnyak_1();
    ~Pishnyak_1();
    Pishnyak_1(const Pishnyak_1& obj);
    void Copy(list<Pishnyak*>& db, const list<Pishnyak*>& db1, const list<Pishnyak*>::const_iterator it);
    void Print();
};

