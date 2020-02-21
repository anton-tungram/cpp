#include <iostream>
int main(int argc, char* argv[])
{
   int i = 10;
   std::cout<<"Hello World!"<<std::endl;
   // Сколько раз???
   while(i--)
   {
      // Сколько раз будет вызвана эта строка???/
      for(int j=0; j<10; j++)
         std::cout<<"Hello World!"<<std::endl;
   }
   return 0;
}
