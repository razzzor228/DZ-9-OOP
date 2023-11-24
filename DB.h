#pragma once
#include "Pishnyak_2.h"
template <class T>
class DB :public list<Pishnyak*>
{
public:
    DB() {}
    ~DB()
    {
        for (DB<Pishnyak*>::iterator it = this->begin(); it != this->end(); ++it)
        {
            delete* it;
        }
    }
    DB(const DB& obj)
    {
        for (DB<Pishnyak*>::iterator it = obj.begin(); it != obj.end();)
        {
            auto ita = ++it;
            it--;
            (*it)->Copy(*this, obj, it);
            it = ita;
        }
    }
    DB& operator =(const DB& obj)
    {
        if (this == &obj) return *this;
        for (DB<Pishnyak*>::iterator it = this->begin(); it != this->end(); ++it)
        {
            delete(*it);
        }
        this->clear();
        for (DB<Pishnyak*>::const_iterator it = obj.begin(); it != obj.end();)
        {
            auto ita = ++it;
            it--;
            (*it)->Copy(*this, obj, it);
            it = ita;
        }
        return *this;
    }
    void Print()
    {
        for (DB<Pishnyak*>::iterator it = this->begin(); it != this->end(); ++it)
        {
            (*it)->Print();
        }
    }
};

