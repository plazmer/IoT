# Микроконтроллер

Среди оборудования курса доступен контроллер **STM32L1**51CCU6. Он обладет малым энергопотреблением и не слишком большой частотой.

![img/stm32_family.png](/home/u9122197373/Projects/IoT/stm32l1/img/stm32_family.png)



Три основных документа (на английском языке):

1. [Datasheet - техническое описание](doc/DS8890.pdf), актуальный оригинал на [сайте производителя](https://www.st.com/content/st_com/en/products/microcontrollers-microprocessors/stm32-32-bit-arm-cortex-mcus/stm32-ultra-low-power-mcus/stm32l1-series/stm32l151-152/stm32l151cc.html#resource) - 136 страниц
2. [Reference manual - справочное руководство](doc/RM0038.pdf) - 906 страниц
3. [Programming manual - руководство по программированию](doc/PM0056.pdf) - 156 страниц.
4. Бонус уровень - перечень известных ошибок -errata

Дальше полагается быть мему про красные глаза, но я его не стал искать.

Полностью всю документацию изучать в принципе не требуется, достаточно уметь пользоваться оглавлением и иметь общее представление о происходящем.

# Инструментарий

1. Компилятор. 
   Требуется для создания прошивки.

В особо тяжелом случае достаточно **компилятора** GNU C/С++ для архитектуры [ARM](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm). 

Но лучше воспользоваться готовой средой разработки. На данный момент [STM32 Cube IDE](https://www.st.com/en/development-tools/stm32cubeide.html) закрывает все потребности в работе. Содержит как удобный редактор кода, так и настроенный компилятор и средства отладки, устанавливается бесплатно в несколько кликов.

2. Программатор.
   Используется для заливки прошивки в контроллер.

В случае с STM32 это может быть **программатор** семейства ST-LINK или USB-UART преобразователь. Достаточно часто отладочные платы уже содержат программатор в комплекте.

Преимеществом ST-LINK является возможность полноценной отладки устройства прямо из IDE.

3. Вспомогательные библиотеки для разработки под нужное ядро.

https://www.st.com/en/embedded-software/stm32cube-mcu-mpu-packages.html#products