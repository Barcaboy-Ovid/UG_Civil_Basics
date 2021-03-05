/******************************************************************************
                This code is written to calculate Cantilever and Simply supported beams
                          Maximum Bending moment, Deflection and Slope 
Author: Anto Ovid
*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int main()

{
	char choice;
	float moment,overall_length, end_slope, max_defelection, max_blending_moment;
	float point_load;
	float load_per_unit_length;
	float end_slope_B, end_slope_A, distance_a, distance_b, distance_c;
	char Y,y, option;

Start:

system("cls");
printf ("\n Mini Project Programming Club -> G.C.T, Coimbatore-2017 by Anto Ovid G S");
printf ("\n This program calculate the end slope, max deflection and max bending moment of several type of beasm, \n");
printf ("CANTILEVER BEAM = Select the Loading type \n");
printf ("Choice 1 = Moment (M) \n");
printf ("Choice 2 = Point or concentrated load (P) \n ");
printf ("Choice 3 = Uniform distributed load (UDL) \n\n");
printf ("SIMPLY SUPPORTED BEAM =  Select the Loading type \n");
printf ("Choice 4 = Point load at centre (P) \n");
printf ("Choice 5 = Uniform distributed load (UDL) \n");
printf ("Choice 6 = Point load at any point (Px) \n\n");
printf ("Enter your choice :");
scanf ("%c", &choice);

switch(choice)
{
case '1' :
printf (".....................................................................\n");
printf("You choose Cantilever Beam = Moment Load  \n ");
printf("What is the moment of the beam (N.m)?", moment);
scanf("%f", &moment);

printf("What is the overall length of the beam (m)?", overall_length);
scanf("%f", &overall_length);

end_slope = ((moment)*(overall_length));
printf ("The end slope of the beam is :%.2f = \n ",end_slope);

max_defelection = (moment*overall_length*overall_length)/(2);
max_blending_moment = moment;
printf("The maximum deflection of the beam is : %.2f \n", max_defelection);


break;

case '2' :
printf (".....................................................................\n");

printf("You choose Cantilever Beam = Point Load  \n ");

printf("What is the point load of the beam ?");
scanf("%f", &point_load);

printf("What is the overall length of the beam ?");
scanf("%f", &overall_length);

end_slope = (point_load*overall_length)/(2);
max_defelection = (point_load*overall_length*overall_length*overall_length)/(2);
max_blending_moment = point_load*overall_length;

printf("The end slope of the beam is :%.2f \n",end_slope);
printf("The maximum deflection of the beam is : %.2f \n", max_defelection);


break;

case '3' :


printf (".....................................................................\n");

printf("You choose Cantilever Beam = Distributed Load  \n ");

printf("What is load per unit length of the beam (N) ?");
scanf("%f", &load_per_unit_length);

printf("What is the overall length of the beam (m) ?");
scanf("%f", &overall_length);

end_slope = (load_per_unit_length*overall_length*overall_length*overall_length)/(6);
max_defelection = (load_per_unit_length*overall_length*overall_length*overall_length*overall_length)/(8);
max_blending_moment = (load_per_unit_length*overall_length*overall_length)/(2);

printf("The end slope of the beam is :%.2f \n",end_slope);
printf("The maximum deflection of the beam is : %.2f \n", max_defelection);
printf("The maximum bending moment of the beam is : %.2f \n", max_blending_moment);

break;

case '4' :

printf (".....................................................................\n");

printf("You choose Simply Supported Beam = Point Load at centre  \n ");

printf("What is point load of the beam (m) ?");
scanf("%f", &point_load);

printf("What is the overall length of the beam (m) ?");
scanf("%f", &overall_length);

end_slope = (point_load*overall_length*overall_length)/(16);
max_defelection = (point_load*overall_length*overall_length*overall_length)/(48);
max_blending_moment = (point_load*overall_length)/(4);

printf("The end slope of the beam is :%.2f \n" ,end_slope);
printf("The maximum deflection of the beam is : %.2f \n ", max_defelection);
printf("The maximum bending moment of the beam is : %.2f \n ", max_blending_moment);

break;

case '5' :


printf (".....................................................................\n");

printf("You choose Simply Supported Beam = Distributed Load  \n ");

printf("What is load per unit length of the beam (N) ?");
scanf("%f", &load_per_unit_length);

printf("What is the overall length of the beam (m) ?");
scanf("%f", &overall_length);

end_slope = (load_per_unit_length*overall_length*overall_length*overall_length)/(24);
max_defelection = (5*load_per_unit_length*overall_length*overall_length*overall_length*overall_length)/(384);
max_blending_moment = (load_per_unit_length*overall_length*overall_length)/(8);

printf("The end slope of the beam is :%.2f \n",end_slope);
printf("The maximum deflection of the beam is : %.2f \n", max_defelection);
printf("The maximum bending moment of the beam is : %.2f \n ", max_blending_moment);

break;

case '6' :


printf (".....................................................................\n");

printf("You choose simply supported Beam = Point Load at any point  \n ");

printf("What is the point load of the beam (m) ?");
scanf("%f", &point_load);

printf("What is the overall length of the beam (m) ?");
scanf("%f", &overall_length);

printf("What is the distance 'A' (small distance) (m) ?");
scanf("%f", &distance_a);

printf("What is the distance 'B' (small distance) (m) ?");
scanf("%f", &distance_b);

distance_c = sqrt((distance_b/3)*(overall_length + distance_a));
end_slope_B = ((point_load*distance_a*distance_c*distance_c)/(2*overall_length));
end_slope_A = (((overall_length+distance_b)*(end_slope_B))/(overall_length+distance_a));
max_defelection = ((point_load*distance_a*distance_c*distance_c)/(3*overall_length));
max_blending_moment = ((point_load*distance_a*distance_b)/(overall_length));

printf("The end slope of the beam at A is :%.2f",end_slope_A);
printf("The end slope of the beam at B is :%.2f",end_slope_B);
printf("/n The maximum deflection of the beam is : %.2f", max_defelection);
printf("/n The maximum bending moment of the beam is : %.2f", max_blending_moment);

break;

default:

printf ("Sorry, you have entered wrong choice!");

break;
}



printf("\n Do you wish to continue? (Y/N) \n\n");
scanf("%c", &option);

if (option == 'y' ||option == 'Y')
{
 goto Start ;
}
else
{
 printf("BYE!!!");
}

return 0;
