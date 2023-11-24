#pragma once
#include "Pishnyak_1.h"

class Pishnyak_2 :public Pishnyak_1
{
    string* s;
public:
    Pishnyak_2();
    ~Pishnyak_2();
    Pishnyak_2(const Pishnyak_2& obj);
    void Copy(list<Pishnyak*>& db, const list<Pishnyak*>& db1, const list<Pishnyak*>::const_iterator it);
    void Print();
};

