/* *******************************
   Author: Okeke Nnadozie
   File Name: feedInputQueue.h
   ******************************************************************************************************
   Function: feedInputQueue header file
   ****************************************************************************************************** */


	void csvPaktReader(char layer2[], FILE *fptr);
	void l2PayLoadExtractor(char layer2[], char l2payload[]);
	void feedInputQueues();
	void progressReport(int queue);
