#include "Model.h"


class Cash : public Table{
public:
    PrimaryField *_id = new PrimaryField;
    IntegerField *_date = new IntegerField("Date", 8);
    IntegerField *_investment = new IntegerField("Investment");
    RealField *_worth = new RealField("Worth");
    RealField *_share = new RealField("Share");
    RealField *_fee = new RealField("Fee");

    Cash(){
        _name.assign("cash");

        insertField(_id);
        insertField(_date);
        insertField(_investment);
        insertField(_worth);
        insertField(_share);
        insertField(_fee);

        setSql();
    }
};

int main(int argc, const char * argv[]) {
    Cash c;
    c.show();
    return 0;
}