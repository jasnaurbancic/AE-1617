//#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <boost/multiprecision/gmp.hpp>


int main(int argc, char* argv[])
{
   using namespace boost::multiprecision;
      int num_iters = std::atoi(argv[1]);
      number<gmp_int> a=1;
      number<gmp_int> b=1;
      number<gmp_int> c=1;
      number<gmp_int> d=1;

      //scanf("%d",&num_iters);
      printf("Calculating %dth fibbonaci number\n",num_iters);
      num_iters = num_iters +1;
      for (int i = 0; i<num_iters;i++){
         c=a+b;
         //a=b;
         //b=c;
         swap(b,d);
         swap(d,a);
         swap(d,d);
         swap(c,b);

      }

      d=d%10000;
      printf("Done\n");
      std::cout << d << '\n';
      
   return 0;
}





