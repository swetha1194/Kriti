// A2DD.h
#ifndef bank_h
#define bank_h

class bank
{
  float balance;

public:
  bank();
  void deposit(float amount);
  void withdraw(float amount);
  void check_balance();
};

#endif
