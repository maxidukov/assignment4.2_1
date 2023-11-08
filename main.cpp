#include <iostream>

long fib_rec(int);
//long fib_cyc(int);


int main(void) {
  int num;
  do{
    std::cout << "Введите число: ";
    std::cin >> num;
    if(num<0){
      std::cout << "Число должно быть неотрицательным!\n";
    }
  }while(num<0);
  std::cout<<"Число Фибоначчи номер "<<num<<" равно "<<fib_rec(num)<<"\n";
  return 0;
}

/*long fib_cyc(int num){
  if(num==0){
    return 0;
  }else if(num==1){
    return 1;
  }else{
    long resmin2 = 0;
    long resmin1 = 1;
    long res = 1;
    for(int i=1;i<num;i++){
      res = resmin2 + resmin1;
      resmin2 = resmin1;
      resmin1 = res;
    }
    return res;
  }
}*/

long fib_rec(int num){
  if(num==0){
    return 0;
  }else if(num==1||num==2){
    return 1;
  }else{
    return fib_rec(num-1)+fib_rec(num-2);
  }
}

