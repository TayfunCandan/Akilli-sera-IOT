# Akilli-sera-IOT
Akıllı sera sistemi

PROJE BİLGİSİ: Projenin asıl amacı sera içindeki hava kontrol edip yönetmek olarak başlanmıştı. Fakat sera için yapılan araştırmalar sonucunda seranın sadece hava kontrolü olmadığını ve bize göre önemli faktörleri değerlendirildi.. Proje serayı uzaktan takip edebilme isteği içerisindeki değerleri takip edilebilir olması ve değerleri düzenlemeye yardımcı olabilmeyi amaçlamıştır.

PROJE İŞLEVİ: Projede kullanan ögeler;
2 adet fan (sistematik olarak biri ısıtıcı biri soğutucu mantıkta düşünülmüş.)
1 adet dht11 sensör ( Havanın ısı ve nemini ölçen bir sensör )
1 adet soil moisture sensör (Topragın nemini ölçen bir sensör )
1 adet led ( Işık ihtiyacını karşılamak için kullanılmıştır. )
1adet nodemcu ( haberleşme için kullanılan bir kart )
VE son olarak sera tamamlamak için maket yapılması burada tahta ve branda kullanarak yapılmıştır.
1 adet role 
2 adet pil kullanılmıştır.

  Projenin iki adet fanı ile hem havalandırma hem içerdeki sıcaklığı değiştirmek için kullanılabilir. Mobil uygulama üzerinde yazılı olan soğutucu ve ısıtıcı fan şeklinde iki buton vardır. AÇIK ve KAPALI durumda olup iki seçenek vardır. Isıtıcı fan butonunu AÇIK hale getirmeniz durumunda içerisinin derecesi ısınması, KAPALI durumunda ise içerisinde herhangi bir değerin değişmemesini amaçlanmıştır. Soğutucu fan için ise AÇIK durumunda içerisinin derecesi düşürülmek için ayarlanmıştır, KAPALI durumunda ise içerideki değerler değişmemektedir.
  Her iki fanın AÇIK olması durumunda ise havalandırma mantığı oluşturmaktadır.
*(Burada ısıtıcı ve soğutucu fan için yüksek fiyat vermektense sistematik olarak aynı mantıkta olan bilgisayar fanı ile bu yapılmıştır.)
Bir adet dht11 sensörü ile havanın sıcaklığını ölçüp mobil uygulama üzerindeki göstergede yer verilmektedir. Aynı zamanda dht11 sensörü ile havadaki nemi ölçüp bunu yine mobil uygulama üzerindeki gösterge ile sizlere bildirilmektedir.
Soil moisture (toprak nem sensörü) ile toprağın içerisindeki su miktarını ölçmeye yarayan bir sistem olup toprağın su ihtiyacını görmeyi de denedik. Bu sensörün çalışma mantığı iki iletken çubuk v şeklinde uçlarında birbirine elektrik gitme durumunda toprağın su ihtiyacı olup olmadığını bildiriyor. Bunu mobil uygulama üzerindeki gösterge ile sizlere bildirilmektedir.
Led bizim için ışık görevinde görülmesi amaçlı kullanılmıştır. Bitkilerin ışık ihtiyacını karşılamak için kullanılmıştır. Mobil uygulama üzerinde buton ile açılıp kapanabilir. Butonun AÇIK halde olması durumunda ışık yanacaktır. Butonun KAPALI olması durumunda da ışık kapanacaktır.

![Model](https://user-images.githubusercontent.com/45576892/143576627-9d7b1207-1236-4b9c-bc38-991b13abdfec.jpg)
