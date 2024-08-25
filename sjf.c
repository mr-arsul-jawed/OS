#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter No. Of Processes : ");
	scanf("%d", &n);
	int bt[n],wt[n],tat[n],ttat=0,twt=0;
	printf("Enter BT Of %d Processes : ",n);
	for(i=0;i<n;i++){
		scanf("%d",&bt[i]);
	}
	for(i = 0;i < n; i++){
		for(j = 0; j < n; j++){
			if(bt[i] < bt[j]){
				int temp = bt[i];
				bt[i] = bt[j];
				bt[j] = temp;
			}
		}
	}
	printf("Entered Burst Time : ");
	for(i=0;i<n;i++){
		printf("%d ", bt[i]);
	}
	printf("\n");
	wt[0] = 0;
	tat[0] = bt[0];
	ttat = tat[0];
	twt = wt[0];
	for(i=1;i<n;i++){
		wt[i]=wt[i-1] + bt[i-1];
		tat[i]=wt[i] + bt[i];
		ttat += tat[i];
		twt += wt[i];
	}

/*	int ct[n];
	wt[0] = 0;
	ct[0] = bt[0];
	ttat = ct[0];
	twt = wt[0];
	for(i=1;i<n;i++){
		ct[i]=ct[i-1] + bt[i];
		wt[i]=ct[i] - bt[i];
		ttat += ct[i];
		twt += wt[i];
	}	
*/
	float atat = (float) ttat / n;
	float awt = (float) twt / n;
	printf("Average WT = %.2f \nAverage TAT = %.2f\n",awt,atat);
	return 0;
}
