#include "DB.h"

struct Leaks {
    ~Leaks() {
        _CrtDumpMemoryLeaks();
    }
};

Leaks _l;
DB<Pishnyak*> db1;
DB<Pishnyak*> db2;

int main()
{
    db1.push_back(new Pishnyak());
    db1.push_back(new Pishnyak_1());
    db1.push_back(new Pishnyak_2());
    cout << "------------db1-------------" << endl;
    db1.Print();
    db2 = db1;
    cout << "------------db2-------------" << endl;
    db2.Print();
    cout << "------------db1-------------" << endl;
    db1.Print();
}
