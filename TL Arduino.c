 
 
 
 void Aregion(void);
 void Bregion(void);
 void Cregion(void);
 
 void A1(void);
 void A2(void);
 void A3(void);
 void A4(void);
 void A5(void);
 void A6(void);
 void A7(void);
 void A8(void);
 
 void B1(void);
 void B2(void);
 void B3(void);
 void B4(void);
 void B5(void);
 void B6(void);
 void C1(void);
 
 void C2(void);
 
 
 void setup()
{
  // lcd.begin(16, 2);
  Serial.begin(9600);
  
   pinMode(red, OUTPUT);   // redT
    pinMode(yellow, OUTPUT);  //yellowT
    pinMode(green, OUTPUT); // greenT
pinMode(greenL, OUTPUT); // greenL
pinMode(greenR, OUTPUT); // greenR
  
  //Serial.print("setup");
}

void loop()
{}

void A1(void){
 nb();
 NB
A_NGS=0;A_NGL=1;A_NGR=0;
A_NR=0
Serial.print("A_NGS=0  A_NGL=1  A_NGR=0 A_NR=0");
digitalWrite(redLED,HIGH);
 
 sb();
 SB
A_SGS=0;A_SGL=1;A_SGR=0;
A_SR=0;
Serial.print( "SB A_SGS=0 A_SGL=1 A_SGR=0 A_SR=0");

 eb();
 EB
A_EGS=0;A_EGL=0;A_EGR=0;
A_ER=1;

Serial.print( "EB A_EGS=0 A_EGL=0 A_EGR=0 A_ER=1");
 wb();
 WB
A_WGS=0;A_WGL=0;A_WGR=0;
A_WR=1;
Serial.print( " WB A_WGS=0 A_WGL=0 A_WGR=0 A_WR=1");
 } 
 
 
 void A2(void){
 nb();
 NB
A_NGS=1;A_NGL=1;A_NGR=1;
A_NR=0;
Serial.print( "NB A_NGS=1 A_NGL=1 A_NGR=1 A_NR=0 "); 
 sb();
 SB
A_SGS=0;A_SGL=0;A_SGR=0;
A_SR=1;
Serial.print( "SB A_SGS=0 A_SGL=0 A_SGR=0 A_SR=1 "); 
 eb();
 EB
A_EGS=0;A_EGL=0;A_EGR=1;
A_ER=0;
Serial.print( "EB A_EGS=0 A_EGL=0 A_EGR=1 A_ER=0 ");


 wb();
 WB
A_WGS=0;A_WGL=0;A_WGR=0;
A_WR=1;
Serial.print( "WB A_WGS=0 A_WGL=0 A_WGR=0 A_WR=1");
 } 
 void A3(void){
 nb();
 NB
A_NGS=1;A_NGL=0;A_NGR=1;
A_NR=0;
 Serial.print( " NB A_NGS=1 A_NGL=0 A_NGR=1 A_NR=0 ");
 sb();
SB
A_SGS=1;A_SGL=0;A_SGR=1;
A_SR=0
Serial.print( "SB A_SGS=1 A_SGL=0 A_SGR=1 A_SR=0 ");
 eb();
 EB
A_EGS=0;A_EGL=0;A_EGR=0;
A_ER=1;
 Serial.print( "EB A_EGS=0 A_EGL=0 A_EGR=0 A_ER=1 ");
 
 wb();
 WB
A_WGS=0;A_WGL=0;A_WGR=0;
A_WR=1;
 Serial.print( " WB A_WGS=0 A_WGL=0 A_WGR=0 A_WR=1");
 } 
 void A4(void){
 nb();
 NB
A_NGS=0;A_NGL=0;A_NGR=0;
A_NR=1;
Serial.print( "NB A_NGS=0 A_NGL=0 A_NGR=0 A_NR=1 "); 
 sb();
 SB
A_SGS=1;A_SGL=1;A_SGR=1;
A_SR=0;
 Serial.print( "SB A_SGS=1 A_SGL=1 A_SGR=1 A_SR=0 ");
 eb();
 EB
A_EGS=0;A_EGL=0;A_EGR=0;
A_ER=0;
 Serial.print( "EB A_EGS=0 A_EGL=0 A_EGR=0 A_ER=0");
 
 wb();
 WB
A_WGS=0;A_WGL=0;A_WGR=0;
A_WR=0;
 Serial.print( "WB A_WGS=0 A_WGL=0 A_WGR=0 A_WR=0");
 } 
 void A5(void){
 nb();
 NB
A_NGS=0;A_NGL=0;A_NGR=0;
A_NR=1;
 Serial.print( " NB A_NGS=0 A_NGL=0 A_NGR=0 A_NR=1");
 sb();
 SB
A_SGS=0;A_SGL=0;A_SGR=0;
SR=1;
Serial.print( "SB A_SGS=0 A_SGL=0 A_SGR=0 SR=1");
 eb();
 EB
A_EGS=0;A_EGL=1;A_EGR=0;
A_ER=0;

Serial.print( "EB A_EGS=0 A_EGL=1 A_EGR=0 A_ER=0"); 

wb();
 WB
A_WGS=0;A_WGL=1;A_WGR=0;
A_WR=0;
Serial.print( "WB A_WGS=0 A_WGL=1 A_WGR=0 A_WR=0 ");
 } 
void A6(void){
 nb();
 NB
A_NGS=0;A_NGL=0;A_NGR=1;
A_NR=0;
 Serial.print( "NB A_NGS=0 A_NGL=0 A_NGR=1 A_NR=0");
 sb();
 SB
A_SGS=0;A_SGL=0;A_SGR=0;
A_SR=1;
Serial.print( "SB A_SGS=0 A_SGL=0 A_SGR=0 A_SR=1");

 eb();
 EB
A_EGS=0;A_EGL=0;A_EGR=0;
A_ER=1;
Serial.print( "EB A_EGS=0 A_EGL=0 A_EGR=0 A_ER=1 ");

 wb();
 WB
A_WGS=1;A_WGL=1;A_WGR=0;
A_WR=0;
Serial.print( "WB A_WGS=1 A_WGL=1 A_WGR=0 A_WR=0 ");
 } 
 void A7(void){
 nb();
 NB
A_NGS=0;A_NGL=0;A_NGR=0;
A_NR=1;
Serial.print( " NB A_NGS=0 A_NGL=0 A_NGR=0 A_NR=1"); 
 sb();
 SB
A_SGS=0;A_SGL=0;A_SGR=0;
A_SR=0
Serial.print( "SB A_SGS=0 A_SGL=0 A_SGR=0 A_SR=0 ");
 
 eb();
 EB
A_EGS=1 A_EGL=0;A_EGR=1;
A_ER=0;
Serial.print( " EB A_EGS=0 A_EGL=0 A_EGR=1 A_ER=0 ");
 wb();
 WB
A_WGS=1;A_WGL=0;A_WGR=1;
A_WR=0;
 Serial.print( "EB A_EGS=1 A_EGL=0 A_EGR=1 A_ER=0 ");
 } 
 void A8(void){
nb();
NB
A_NGS=0;A_NGL=0;A_NGR=0;
A_NR=1; 
 Serial.print( "NB A_NGS=0 A_NGL=0 A_NGR=0 A_NR=1 ");
 sb();
 SB
A_SGS=0;A_SGL=0;A_SGR=1;
A_SR=0;
Serial.print( "SB A_SGS=0 A_SGL=0 A_SGR=1 A_SR=0");
 eb();
 EB
A_EGS=1;A_EGL=1;A_EGR=1;
A_ER=0;
Serial.print( "EB A_EGS=1 A_EGL=1 A_EGR=1 A_ER=0");
 wb();
 WB
A_WGS=0;A_WGL=0;A_WGR=0;
A_WR=0;
Serial.print( "WB A_WGS=0 A_WGL=0 A_WGR=0 A_WR=0");
 } 
//-----------------------------
 void B1(void){
nb();
 NB
B_NGS=1;B_NGL=1;B_NGR=1;
B_NR=0;
 Serial.print( "NB B_NGS=1 B_NGL=1 B_NGR=1 B_NR=0");
 sb();
 SB
B_SGS=0;B_SGL=0;B_SGR=0;
B_SR=1;	
Serial.print( " SB B_SGS=0 B_SGL=0 B_SGR=0 B_SR=1");
 eb();
 EB
B_EGS=0;B_EGL=0;B_EGR=0;
B_ER=1;
 Serial.print( " EB B_EGS=0 B_EGL=0 B_EGR=0 B_ER=1 ");
 
 wb();
 WB
B_WGS=0;B_WGL=0;B_WGR=0;
B_WR=1;
 Serial.print( " WB B_WGS=0 B_WGL=0 B_WGR=0 B_WR=1 ");
 } 
void B2(void){
 nb();
 NB
B_NGS=1;B_NGL=0;B_NGR=1;
B_NR=0;
 Serial.print( " NB B_NGS=1 B_NGL=0 B_NGR=1 B_NR=0 ");
 sb();
 SB
B_SGS=1;B_SGL=0;B_SGR=1;
B_SR=0;
Serial.print( "SB B_SGS=1 B_SGL=0 B_SGR=1 B_SR=0");
 eb();
 EB
B_EGS=0;B_EGL=0;B_EGR=0;
B_ER=1;
Serial.print( "EB B_EGS=0 B_EGL=0 B_EGR=0 B_ER=1 ");
 wb();
 WB
B_WGS=0;B_WGL=0;B_WGR=0;
B_WR=1;
Serial.print( "WB B_WGS=0 B_WGL=0 B_WGR=0 B_WR=1");
 } 
 void B3(void){
 nb();
 NB
B_NGS=0;B_NGL=0;B_NGR=0;
B_NR=1;
Serial.print( " NB B_NGS=0 B_NGL=0 B_NGR=0 B_NR=1 ");
 
 sb();
 SB
B_SGS=1;B_SGL=1;B_SGR=1;
B_SR=0;
Serial.print( " SB B_SGS=1 B_SGL=1 B_SGR=1 B_SR=0 ");
 eb();
 EB
B_EGS=0;B_EGL=0;B_EGR=0;
B_ER=1;
Serial.print( "EB B_EGS=0 B_EGL=0 B_EGR=0 B_ER=1");
 wb();
 WB
B_WGS=0;B_WGL=0;B_WGR=0;
B_WR=1;
 Serial.print( "WB B_WGS=0 B_WGL=0 B_WGR=0 B_WR=1 ");
 }
 
 void B4(void){
	 
 nb();
 NB
B_NGS=0;B_NGL=0;B_NGR=0;
B_NR=1;
 Serial.print( "NB B_NGS=0 B_NGL=0 B_NGR=0 B_NR=1");
 sb();
 SB
B_SGS=0;B_SGL=0;B_SGR=0;
B_SR=1;
Serial.print( "SB B_SGS=0 B_SGL=0 B_SGR=0 B_SR=1");
 eb();
 EB
B_EGS=0;B_EGL=0;B_EGR=0;
B_ER=1;
Serial.print( " EB B_EGS=0 B_EGL=0 B_EGR=0 B_ER=1 ");
 wb();
 WB
B_WGS=1;B_WGL=1;B_WGR=1;
B_WR=0;
Serial.print( "WB B_WGS=1 B_WGL=1 B_WGR=1 B_WR=0");
 } 
void B5(void){
 nb();
 NB
B_NGS=0;B_NGL=0;B_NGR=0;
B_NR=1;
Serial.print( "  NB B_NGS=0 B_NGL=0B_NGR=0 B_NR=1 ");
 
 sb();
 SB
B_SGS=0;B_SGL=0;B_SGR=0;
B_SR=1;
Serial.print( "SB B_SGS=0 B_SGL=0 B_SGR=0 B_SR=1 ");
 eb();
 EB
B_EGS=1;B_EGL=0;B_EGR=1;
B_ER=0;
Serial.print( "EB B_EGS=1 B_EGL=0 B_EGR=1 B_ER=0");
 wb();
 WB
B_WGS=1;B_WGL=0;B_WGR=1;
B_WR=0;
Serial.print( "WB B_WGS=1 B_WGL=0 B_WGR=1 B_WR=0");
 } 
void B6(void){
 nb();
 NB
B_NGS=0;B_NGL=0;B_NGR=0;
B_NR=1;
 Serial.print( "NB B_NGS=0 B_NGL=0 B_NGR=0 B_NR=1");
 sb();
 SB
B_SGS=0;B_SGL=0;B_SGR=0;
B_SR=1;
Serial.print( " SB B_SGS=0 B_SGL=0 B_SGR=0 B_SR=1");
 eb();
 EB
B_EGS=1;B_EGL=1;B_EGR=1;
B_ER=0;
Serial.print( " EB B_EGS=1 B_EGL=1 B_EGR=1 B_ER=0 ");
 wb();
 WB
B_WGS=0;B_WGL=0;B_WGR=0;
B_WR=1;
 Serial.print( " WB B_WGS=0 B_WGL=0 B_WGR=0 B_WR=1");
 } 
//-----------------------------

void C1(void){
 nb();
 NB
NG=1;
NR=0;
Serial.print( "NB NG=1 NR=0  "); 
 sb();
 SB
SG=1;
SR=0;
Serial.print( " SB SG=1 SR=0 ");
 eb();
 EB
EG=0;
ER=1;
Serial.print( " EB EG=0 ER=1 ");
 wb();
 WB
WG=0;
WR=1;
 Serial.print( "WB WG=0 WR=1");
 } 
 void C2(void){
 nb();
 
 NB
NG=0;
NR=1;
Serial.print( " NB NG=0 NR=1");
 sb();
 SB
SG=0;
SR=1;
Serial.print( "SB SG=0 SR=1  ");
 eb();
 EB
EG=1;
ER=0;
Serial.print( " EB EG=1 ER=0  ");
 wb();
 WB
WG=1;
WR=0;
 Serial.print( "WB WG=1 WR=0 ");
 }

//-----------------------------

void Aregion(void)
{
 A1();
 delay( 45,000); 
  A2();
 delay( 45,000);
 A3();
 delay( 45,000);
  A4();
 delay( 45,000);
  A5();
 delay( 45,000);
  A6();
  delay( 45,000);
  A7();
 delay( 45,000);
  A8();
delay( 45,000);
}
void Bregion(void)
{
 B1();delay( 45,000);
 B2();delay( 45,000);
 B3();delay( 45,000);
 B4();delay( 45,000);
 B5();delay( 45,000);
 B6();delay( 45,000);		
}
void Cregion(void)
{
 C1();delay( 45,000);
 C2();delay( 45,000);		
}


