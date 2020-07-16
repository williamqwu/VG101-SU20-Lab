/*
 * Sample code for Lab 6 Train Station with applying Stack
 * Created by grid
 * Modified by William Wu
 */

#include <stdio.h>
#define EMPTY_VALUE -1

// NOTE: the original code (with outCount) mainly consists of two errors:
// 1. Index of arrays track trackTrainCount and record (major)
// 2. initialization of track and record (minor)
// A revised version is provided below:

int main()
{
	int trackCount, eventCount;
	scanf("%d %d", &trackCount, &eventCount);
	int track[trackCount][eventCount]; 
	int trackTrainCount[trackCount];
	for(int i=0; i<trackCount; i++) trackTrainCount[i]=0;
	for(int i=0;i<trackCount;i++) for(int j=0;j<eventCount;j++) track[i][j]=EMPTY_VALUE;
	// int REcord[eventCount];
	// for(int i=0;i<eventCount;i++)REcord[i]=EMPTY_VALUE;
	// int outCount = 0;
	int currEventTrack, currEventTrainID, currEventType;
	for(int i=0; i<eventCount; i++)
	{
		scanf("%d %d", &currEventType, &currEventTrack);
		if(currEventType==1) 
		{
			currEventTrainID = currEventTrack;
			scanf("%d", &currEventTrack);
			track[currEventTrack-1][trackTrainCount[currEventTrack-1]] = currEventTrainID;
			trackTrainCount[currEventTrack-1]++;
		} else if(currEventType==2)
		{
			// REcord[outCount] = track[currEventTrack-1][trackTrainCount[currEventTrack-1]-1];
			// outCount++;
			track[currEventTrack-1][trackTrainCount[currEventTrack-1]-1] = EMPTY_VALUE;
			trackTrainCount[currEventTrack-1]--;
		}
	}
	// for(int i=0; i<outCount; i++) printf("%d ", REcord[i]);
	for(int i=0;i<trackCount;i++) trackTrainCount[i]>0?printf("%d ",track[i][trackTrainCount[i]-1]):printf("-1 ");
	return 0;
}
