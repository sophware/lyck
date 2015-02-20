lyck
===
Fork of lyc (https://github.com/panticz/lyc)

With a USB-Serial adapter connected to a Yamaha reciver RS-232 interface, a computer or router, and lyck, you can control the reciver. In addition, a web interface can be created with wlyc to provide a web access to all network devices like PC, smartphone or tablet.

###Linux Yamaha receiver control
wlyc (Optional, webinterface for lyc: https://github.com/panticz/wlyc)  
* |  
* lyc https://github.com/panticz/lyc OR lyck https://github.com/sophware/lyck  
  * |  
  * PC / Raspberry Pi / BeagleBone Black / Router (e.g. http://panticz.de/OpenWrt-on-TP-Link-TL-WR1043ND)  
    * |  
      * USB serial adapter (e.g. Digitus DA-70156: http://panticz.de/USB-Serial-adapter)  
        * |  
        * Serial cable (null modem) 
        * |  
        * Yamaha AV-Receiver (Yamaha RX-V3800 and HTR-5990 tested)


###Download binary
###TODO - upload new binaries, including ARM/BBB and replace the following 2 lines
http://dl.panticz.de/lyc/i386/lyc - i386 compiled  
http://dl.panticz.de/lyc/ar9132/lyc - Atheros AR9132 (TP-LINK TL-WR1043ND / TL-WDR4300 router)

### Compile (Linux)
1. Download source files  
`wget -q https://github.com/sophware/lyck/archive/master.zip -O /tmp/master.zip`  
`unzip -q /tmp/master.zip -d /tmp/`  
`cd /tmp/lyck-master`  

2. Compile  
  `make`

3. Set up USB Serial adapter  
http://www.panticz.de/USB-Serial-adapter

4. Run command  
`./lyck input dvd`  
`./lyck volume up`


