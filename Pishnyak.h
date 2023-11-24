#pragma once
#include <iostream>
#include <list>
#include <string>
using namespace std;
class Pishnyak
{
    string* s;
public:
    Pishnyak();
    virtual ~Pishnyak();
    Pishnyak(const Pishnyak& obj);
    virtual void Copy(list<Pishnyak*>& db, const list<Pishnyak*>& db1, const list<Pishnyak*>::const_iterator it);
    virtual void Print();
};

