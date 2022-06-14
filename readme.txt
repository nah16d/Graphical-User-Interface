To test, I sent the data from arduino to comport since i dont have the data yet from the obc/com

the first string of data sent to com port is
Serial.print("0a2a4a6a8a10a12a14a16a18a20a22a24a");

and this is the second string
Serial.print("1a3a5a7a9a11a13a15a17a19a21a23a25a");

The data is seperated by the letter 'a' 

1. Temp readings 	= 00 01 26 27 52 53
2. presure 		= 02 03 28 29 54 55
3. humidity 		= 04 05 30 31 56 57
4. roll 		= 06 07 32 33 58 59
5. pitch 		= 08 09 34 35 60 61
6. yaw 			= 10 11 36 37 62 63
7. direction		= 12 13 38 39 64 65
8. gyro x 		= 14 15 40 41 66 67
9. gyro y 		= 16 17 42 43 68 69
10.gyro z 		= 18 19 44 45 70 71
11.acc x 		= 20 21 46 47 72 73
12.acc y 		= 22 23 48 49 74 75 
13.acc z 		= 24 25 50 51 76 77