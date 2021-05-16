#include <stdio.h>
#include <stdlib.h>
#include <time.h>




struct DataFrame{
	long long timeStamp;
	int Pressure;
	char SystemState;
	char AlarmState;
	};
	

int main()
{
	FILE *fin = fopen("pressureSpike.bin", "rb");
	FILE *fout = fopen("LastData.csv", "r+");
	
	
	if (fin == NULL) {
	printf("Error by opening Input File.\n");
	}
	else if (fout == NULL){
	printf("Error by opening Output File.\n");
	}
	
	
	else
	{
		const int BYTES_IN_LINE = 14;
		unsigned char lineBuffer[BYTES_IN_LINE];
		
		
			while ( fread(lineBuffer, BYTES_IN_LINE, 1, fin) )
			{
			
			
			//TimeStamp auf Sekunden Runden:
			((struct DataFrame *)lineBuffer)->timeStamp = ((struct DataFrame *)lineBuffer)->timeStamp / 1000;
			
			
			//Daten auf Konsole schreiben zur Übersicht:
			printf("time: %lld, ", ((struct DataFrame *)lineBuffer)->timeStamp);
			printf("pressure: %d, ", ((struct DataFrame *)lineBuffer)->Pressure);
			printf("System State: %d, ", ((struct DataFrame *)lineBuffer)->SystemState);
			printf("Alarm State: %d\n", ((struct DataFrame *)lineBuffer)->AlarmState);

				// Versuch den TimeStamp in TT.MM.JJJJ hh:mm:ss umzuformen:
				/*
				char TimeBuffer [80];
				struct tm * timeinfo;
				timeinfo = (struct tm *) (((struct DataFrame *)lineBuffer)->timeStamp );
			
				strftime (TimeBuffer, 80, "%c,", timeinfo);
				fprintf(fout, "%s,", TimeBuffer);
				*/
			
				
				//Timestamp in csv schreiben:
				fprintf(fout, " %lld, ", ((struct DataFrame *)lineBuffer)->timeStamp);
				
				//Pressure in csv schreiben:
				fprintf(fout, " %d, ", ((struct DataFrame *)lineBuffer)->Pressure);
			
			
				//Systemstate in einzelne Signale aufteilen:
				int Systemstate = ((struct DataFrame *)lineBuffer)->SystemState;
				int Pump_2 = 0;
				int Pump_1 = 0;
				int OutletValve = 0;
				int InletValve = 0;
				
				int calculatebyte = 1;
				
				
				if (Systemstate == (Systemstate | calculatebyte))
				{
				InletValve = 1;
				}
				
				if (Systemstate == (Systemstate | (calculatebyte<<1)))
				{
				OutletValve = 1;
				}
				
				
				if (Systemstate == (Systemstate | (calculatebyte<<2)))
				{
				Pump_1 = 1;
				}
				
				
				if (Systemstate == (Systemstate | (calculatebyte<<3)))
				{
				Pump_2 = 1;
				}
				
				
				//Einzelne SystemState in csv schreiben:
				fprintf(fout, "%d, ", Pump_2);
				fprintf(fout, "%d, ", Pump_1);
				fprintf(fout, "%d, ", OutletValve);
				fprintf(fout, "%d, ", InletValve);
				
			
			
			
				
				//AlarmState in csv schreiben:
				fprintf(fout, " %d\n", ((struct DataFrame *)lineBuffer)->AlarmState);
			
						
		}
	
	fclose(fin);
	fclose(fout);


	}
	return 0;
}





