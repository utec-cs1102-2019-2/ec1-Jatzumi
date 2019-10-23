#ifndef SESSION10A_CMOUSE_H
#define SESSION10A_CMOUSE_H

#include <vector>

using namespace std;

class CMouse {
private:
    vector<int> color{10, 20, 30};
    double precision=0.54;
public:
    void printDescription();
};


#endif //SESSION10A_CMOUSE_H
