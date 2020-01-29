# 代码示例
```c++
class Cash : public Table{
    PrimaryField *_id = new PrimaryField;
    IntegerField *_date = new IntegerField("Date", 8);
    IntegerField *_investment = new IntegerField("Investment");
    RealField *_worth = new RealField("Worth");
    RealField *_share = new RealField("Share");
    RealField *_fee = new RealField("Fee");

public:
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
```

## 输出结果
> CREATE TABLE cash(ID INTEGER PRIMARY KEY AUTOINCREMENT,Date INTEGER(8) NOT NULL,Investment INTEGER NOT NULL,Worth REAL NOT NULL,Share REAL NOT NULL,Fee REAL NOT NULL);