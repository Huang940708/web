const int potPin = A0; // 可變電阻接到模擬輸入 A0

void setup() {
  Serial.begin(9600); // 初始化序列通訊，波特率為 9600
}

void loop() {
  int potValue = analogRead(potPin); // 讀取可變電阻的值 (0 到 1023)
  Serial.println(potValue);         // 將值傳送到序列埠
  delay(10);                        // 短暫延遲以穩定輸出
}