
task main()
{
	motor[motorB] = 75;
	motor[motorC] = 75;
		waitUntil(getUSDistance(s4)<75); {
			setLEDColor(ledGreen);
		}
			waitUntil(getUSDistance(s4)< 50); {
			setLEDColor(ledOrange);
		}
			waitUntil(getUSDistance(s4)<25); {
			setLEDColor(ledRed);
			motor[motorB] = 0;
			motor[motorC] = 0;
		}

}
