void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  }

void loop() {
  // put your main code here, to run repeatedly:
 
 Serial.print("00a02a04a06a08a10a12a14a16a18a20a22a24a");
 Serial.print("01a03a05a07a09a11a13a15a17a19a21a23a25a");

 Serial.print("26a28a30a32a34a36a38a40a42a44a46a48a50a");
 Serial.print("27a29a31a33a35a37a39a41a43a45a47a49a51a");

 Serial.print("52a54a56a58a60a62a64a66a68a70a72a74a76a");
 Serial.print("53a55a57a59a61a63a65a67a69a71a73a75a77a");
}
