#include<stdio.h>
int main(){
   int n,i,j,slice,max = 0, temp=0;
   printf("Enter No. Of Processes : ");
   scanf("%d", &n);
   int bt[n],wt[n],tat[n],ttat=0,twt=0,Bt[n];
   printf("Enter BT Of %d Processes : ",n);
   for(i=0;i<n;i++){
	   scanf("%d",&bt[i]);
	}
   for(i=0;i<n;i++){
      Bt[i] = bt[i];
      tat[i] = 0;
      if(max < bt[i]){
         max = bt[i];
      }
   }
   printf("Enter Time Slice : ");
   scanf("%d", &slice);
   for(i = 0;i <= (max/slice)+1; i++){
	   for(j=0;j<n;j++){
		   if(bt[j] > 0){
			   if(bt[j] > slice){
				   temp += slice;
				   bt[j] -= slice;
				   tat[j] = temp;
			   } else {
				   temp += bt[j];
				   tat[j] = temp;
				   bt[j] = 0;
			   }
		   }
	   }
   }
   for(i=0;i<n;i++){
      wt[i] = tat[i] - Bt[i];
      ttat += tat[i];
      twt += wt[i];
   }
   float atat = (float) ttat / n;
   float awt = (float) twt / n;
   printf("Average WT = %.2f \nAverage TAT = %.2f\n",awt,atat);
   return 0;
}
