#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;   //姓名
    int working_years;   //工龄
public:
    Employee(string nm = "unnamed", int wy = 0) {
        name = nm;
        working_years = wy;
    }
    string Getname() {
        return name;
    }
    double ComputePay() {   //计算工龄工资
        return working_years * 35;
    }
    void SetWorkyears(int wy) {
        working_years = wy;
    }
};

class Worker : public Employee {
private:
    double pay_per_hour;  //每小时工资额
    int work_time;        //当月工作时数
public:
    Worker(string nm, int wy, int wt) : Employee(nm, wy) {
        work_time = wt;
    }
    double count_pay() {   //计算工资
        return pay_per_hour * work_time + ComputePay();
    }
    void SetWorktime(int wt) {
        work_time = wt;
    }
    void Setpay_per_hour(double x) {
        pay_per_hour = x;
    }
};

class SalesPerson : public Employee {
private:
    double pay_per_hour;   //每小时工资额
    double saleroom;       //当月售出商品金额
    int work_time;         //当月工作时数
public:
    SalesPerson(string nm, int wy, double sr, double pph) : Employee(nm, wy) {
        saleroom = sr;
        pay_per_hour = pph;
    }
    double count_pay() {   //计算工资
        return pay_per_hour * work_time + saleroom * 0.01 + ComputePay();
    }
    void SetWorktime(int wt) {
        work_time = wt;
    }
    void Setpay_per_hour(double x) {
        pay_per_hour = x;
    }
    void Setsalesroom(double sr) {
        saleroom = sr;
    }
};

class Manager : public Employee {
public:
    Manager(string nm, int wy) : Employee(nm, wy) {}
    double count_pay() {   //计算工资
        return 1000 + ComputePay();
    }
};

int main() {
    Worker work("zhangqiang", 3, 200);
    work.Setpay_per_hour(50);
    cout << "工资=" << work.count_pay() << endl;
    work.SetWorktime(180);
    work.SetWorkyears(10);
    work.Setpay_per_hour(30);
    cout << work.Getname() << "  " << work.count_pay() << endl;

    SalesPerson sales("wangjun", 5, 300000, 25);
    sales.SetWorktime(40);
    sales.Setpay_per_hour(80);
    sales.Setsalesroom(450000);
    cout << sales.Getname() << "  " << sales.count_pay() << endl;

    Manager mana("sunchao", 20);
    cout << mana.Getname() << "  " << mana.count_pay() << endl;
    return 0;
}