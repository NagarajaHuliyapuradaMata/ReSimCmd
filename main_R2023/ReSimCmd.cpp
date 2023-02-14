#include "Std_Types.hpp"
#include <iostream>

#include "ReSimCmd.hpp"

uint8 gu8InitDone = FALSE;
void ReSimCmd_Read(void){
   if(FALSE == gu8InitDone){
      std::cout<<"$cmd:\\>";
      gu8InitDone = TRUE;
   }
   std::string str;
   std::cin>>str;
   std::cout<<"Received cmd is: "<<str<<std::endl<<"$cmd:\\>";
}
