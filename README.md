# PROJECT SAKLAR OTOMATIS MENGGUNAKAN APLIKASI BLYNK MENGGUNAKAN RELAY 4CH DAN ESP8266V3 (WEMOS D1 MINI PRO)
project ini adalah project sekolah saya, dan project ini bisa diaplikasikan di mana saja bukan hanya sekedar lampu.

ini adalah versi yang 4 relay, ada versi yang 2 relay juga cek repository aku yaa~

big thanks to:
- Allah SWT
- pak fandy mahesa (guru mapel IOT)
- Sekolah Multistudi High School
- dan kawan kawan IOT sekelompok 3

Script ini dibuat oleh [Ardi](https://wa.me/6285117732330). Jika terjadi error bahkan setelah compile/verify, silakan hubungi saya untuk mendapatkan bantuan. ~ By Ardii
---
#### datastream blynk hingga ke pin esp8266
| datastream | pin esp8266 |
|--------|--------|
| v0 | d1 |
| v1 | d2 |
| v2 | d5 |
| v3 | d6 |
---
alat dan bahan:
- nodemcu esp8266 v3 (wemos d1 mini pro)
- relay 4ch
- jumper cable ftf 6 buah
- kabel micro/type-c (sesuaikan dengan nodemcu)
---
## cara menggunakan script ini ke nodemcu:
* pastikan nodemcu sudah terhubung ke pc/laptop
* buka folder CH34x_Install_Windows_v3_4 disitu ada file installer klik 2x lalu klik install
* lalu buka folder nodemcu-flasher-master>win64>release lalu klik 2x file esp8266flasher.exe
* sesuaikan port COM dengan port COM nodemcu (cara mengecek buka device manager)
* masih di aplikasi esp8266flasher buka tab config, klik logo kaya logo pengaturan di paling atas, lalu locate ke file ai-thinker-0.9.5.2-115200.bin
* setelah itu balilk lagi di tab operation lalu click flash
* setelah selesai flash, buka code yang terletak di folder CODE_ARDUINO_NodeMCU
* setelah terbuka masuk ke file>preferences, isi link additional boards manager URLs dengan link yang ada di file link arduino address
* setelah itu, install boards manager blynk dan esp8266
* sesuaikan template_id template_name dan auth_token
* tes file dengan klik logo centang di atas kiri, jika bisa langsung saja flash ke esp8266
---
#### skema wiring dari relay ke esp8266
| relay | esp8266 |
|--------|--------|
| gnd | g |
| vcc | vin |
| in1 | d1 |
| in2 | d2 |
| in3 | d5 |
| in4 | d6 |
---
### terima kasih sudah membaca hingga akhir~
