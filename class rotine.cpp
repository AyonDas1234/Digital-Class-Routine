//WAP IN C TO FIND ALL CLASSES IN ROUTINE//
#include<stdio.h>
#include<stdlib.h>

 int mon();
 int tue();
  int wed();
   int thu(); 
   int fri();
   int sat();
   int sun();
int main()
{ int ch;


 while(1)
 
 
  { printf("\n\n\npress 1 for -> Monday:");
   printf("\npress 2 for ->Tuesday:");
  printf("\npress 3 for -> Wednesday:");
  printf("\npress 4 for -> Thursday:");
  printf("\npress 5 for -> Friday:");
  printf("\npress 6 for -> Saturday:");
  printf("\npress 7 for -> Sunday:");
  printf("\npress 8 for-> (EXIT)");
   printf("\nplease enter your chice:");
   scanf("%d",&ch);
   
   switch(ch)
   {  case 1:mon();
   	 break;
   	 
   	 case 2:tue();
   	 	break;
   	 		
   	 		case 3:wed();
   	 			break;
   	 			
   	 			case 4:thu();
   	 				break;
   	 				
   	 				case 5:fri();
   	 					break;
   	 					
   	 					case 6:sat();
   	 						break;
   	 						
   	 						case 7:sun();
   	 							break;
   	 							
   	 							case 8:exit (0);
   	 								break;
   	 								
   	 								default:
   	 									printf("\nplease enter valid choice!!!1!");
   	 									break;
   }
   
  
  }
   
}


int mon()
{ printf("\n NAME OF THE DAY IS [MONDAY]");
printf("\n Today you have no class.\n\t\t Thank You.");
}

int tue()
{ printf("\n NAME OF THE DAY IS [TUESDAY]");
printf("\n Today you have total (6) classes");
printf("\n\n10.00 AM -11.00AM => comunication(Rajlekha sil)\n11.00 AM-11.50 AM => Discrete Math(Debojoyti sir)\n11.50 AM-12.40 PM+12.40 PM-1.30 PM => Design & Algorithm Lab(saikat Pahari)\n1.30 PM-2.00 PM => Tiffin Time\n2.00 PM-2.50 PM => Biology(kousik Sir)\n2.50 PM -3.40 PM => Formal Lnguage & Automata Theory(DIPANKAR HAZRA)\n3.40 PM-4.30 PM => Computer Architecture(Sontosh Das)");

}


int wed()
{printf("\n NAME OF THE DAY IS [WEDNESDAY]");
printf("\n Today you have total (5) classes");
printf("\n\n10.00 AM -11.00AM => Discrete Math(Debojoyti sir)\n11.00 AM-11.50 AM =>Design & Algorithm (saikat Pahari)\n11.50 AM-12.40 PM => No class\n12.40 PM-1.30 PM => Biology(kousik Sir)\n1.30 PM-2.00 PM => Tiffin Time\n2.00 PM-2.50 PM =>Environmental Science( Dr.Suknaya Chandra)\n2.50 PM -3.40 PM => No class\n3.40 PM-4.30 PM => Computer Architecture(Sontosh Das)");

}
int thu()
{printf("\n NAME OF THE DAY IS [THURSDAY]");
printf("\n Today you have total (5) classes");
printf("\n\n10.00 AM -11.00AM =>Formal Lnguage & Automata Theory(DIPANKAR HAZRA)\n11.00 AM-11.50 AM => No class\n11.50 AM-12.40 PM =>Computer Architecture(Sontosh Das)\n12.40 PM-1.30 PM => Biology(kousik Sir)\n1.30 PM-2.00 PM => Tiffin Time\n2.00 PM-2.50 PM => Mini project2\n2.50 PM -3.40 PM => Environmental Science( Dr.Suknaya Chandra)\n3.40 PM-4.30 PM => Apititude2(Dr.Dhrubojoyoti Ghosh)");} 
int fri()
{printf("\n NAME OF THE DAY IS [FRIDAY]");
printf("\n Today you have total (5) classes");
printf("\n\n10.00 AM -11.00AM => Discrete Math(Debojoyti sir)\n11.00 AM-11.50 AM => Design & Algorithm (saikat Pahari)\n11.50 AM-12.40 PM+12.40 PM-1.30 PM=>Design & Algorithm Lab(saikat Pahari)\n1.30 PM-2.00 PM => Tiffin Time\n2.00 PM-2.50 PM => Environmental Science( Dr.Suknaya Chandra)\n2.50 PM -3.40 PM+3.40 PM-4.30 PM => Computer Architecture Lab(Sontosh Das)");

}
int sat()
{printf("\n NAME OF THE DAY IS [SATURDAY]");
printf("\n Today you have total (4) classes");
printf("\n\n10.00 AM -11.00AM => Formal Lnguage & Automata Theory(DIPANKAR HAZRA)\n11.00 AM-11.50 AM => Design & Algorithm (saikat Pahari)\n11.50 AM-12.40 PM+12.40 PM-1.30 PM => Computer Architecture Lab(Sontosh Das)\n1.30 PM-2.00 PM => Tiffin Time\n2.00 PM-2.50 PM+2.50 PM -3.40 PM+3.40 PM-4.30 PM => Coding 2 (Avijit Bera & indrani Mukherjee)");

}

int sun()
{ printf("\n NAME OF THE DAY IS [SUNDAY]");
 printf(" Today is sunday .Sunday is holiday");
}















