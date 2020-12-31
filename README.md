# Self Balancing Robot (SBR) - Kendi Kendini Dengeleyen Robot Projesinde uzaktan kumanda ile robot kontrolü
<p> İlk önce 1. Arduino'muz olan transmitter (yani verici) Arduino'muza transmitter.ino kodunu yükleyelim. Unutmayın Arduino'nun A0 ve A1 analog giriş pinlerini joystick'in kanal 1 (yukarı-aşağı yani robotu ileri-geri hareket ettirmek) ve kanal 2 (sağa-sola yani robotu kendi ekseni etrafında döndürme, i.e., spin hareketi) çıkış bacaklarına bağlamalısınız. NRF24L01'i adaptörüne takın ve NRF24L01'ün adaptörünün CE çıkışını Arduino'nun Digital 7 (D7), CSN çıkışını Arduino'nun D8, SCK çıkışını Arduino'nun D13, MO çıkışını D11 ve de MI çıkışını Arduino'nun D12 girişine bağlayın. Ayrıca NRF24L01 adaptörünün üzerindeki Vcc çıkışını Arduino'nun 5V, GND çıkışını Arduino'nun GND pinine bağlayın. NRF24L01 ADAPTÖRÜNÜN Vcc ÇIKIŞINI 3.3V'a bağlamayın. Zaten adaptör 5V'dan 3.3V'a voltajı regüle ediyor ve ayrıca stabil (yani kararlı ve güvenilir) bir voltaj sağlıyor. Eğer NRF24L01 adaptörünüz yoksa bağlantıları yine bahsedilen konfigürasyonda yapabilirsiniz ama Vcc ile GND arasına 10uF'lık elektrolitik kapasitör bağlamanız tavsiye ediliyor. SAKIN sadece NRF24L01 kullanıyorsanız (adaptörünüz yoksa) Vcc'ye 5V bağlamayın, NRF24L01'e zarar verirsiniz.
  
  NRF24L01 kablosuz modül
https://www.direnc.net/nrf24l01-wireless-modul
  NRF24L01kablosuz modül adaptörü
https://www.direnc.net/8-pin-nrf24l01-wireless-modul-adaptoru
  NRF24L01 + PA kablosuz modülü (daha kuvvetli bir iletişim - anten var)
https://www.direnc.net/nrf24l01-plus-pa-wireless-modul
  
  Verici kodunu yükledikten sonra 2. Arduino'ya receiver.ino kodunu yükleyin ve Arduino IDE ayarlar --> port --> COMX burada X 2. Arduino'nun numarası, sakın transmitter olan 1. Arduino'nun COM adresini seçmeyim. Seçtikten sonra sağ üstte seri port penceresini açıp 57600 SEÇİN VE JOYSTİCK İLE OYNAYARAK KANAL DEĞERLERİNİN DEĞİŞİMİNİ GÖZLEMLEYİN.
<br> 
Ardından MATLAB kodumuz olan SERİAL_PORT_RECEİVER.m dosyasını doğru port ismini girerek çalıştırın.<br> 
Doğru portu bulmak için MATLAB'ı açınca serialportlist komutunu kullanabilirsiniz veya Windows'da Aygıt Yöneticisi'ne gidip orada Bağlantı Noktaları (COM ve LPT) üzerine tıklayabilirsiniz. 
Yukarıda Code yazan yeşil bağlantıya tıklarsanız bu sayfadaki kodları zip dosyası halinde bilgisayarınıza indirebilirsiniz. </p> </br></br>
![](Arduino-and-MPU6050-Circuit-Diagram.png) </br></br>
# Videoyu aşağıdaki bağlantıdan izleyebilirsiniz 
[![IMAGE ALT TEXT HERE](https://i9.ytimg.com/vi/B2S7VlqK_-Q/mq3.jpg?sqp=CIzOuv4F&rs=AOn4CLA5Amqeqg8xPotfP-gUu3MajMFGtg)](https://www.youtube.com/watch?v=B2S7VlqK_-Q)</br></br>
