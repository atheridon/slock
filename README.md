# lesflol's fork of st
The [suckless slock](http://tools.suckless.org/slock/) screen locker to simply lock your xorg session.

## Configuration

Simply modify the `config.h` file. 
Default configuration is stored in `config.def.h`.

## Installation

```
sudo make clean install
```

## Patches applied
+ unlock screen: slock now only locks the xorg session with no color overlay
