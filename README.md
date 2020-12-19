# Installation Guide
You will need to make a ssh connection to your iPhone using SSH Connect app on cydia. (Pass: alpine)
## Get the SDK
1 - Create a directory in /var called sdks if not exists
2 - Copy one of the iPhoneOsX.X.sdk to the /var/sdks/ folder, then: 
```
cd /var/sdks
ln -s iPhoneOS9.3.sdk Latest.sdk
```

## Install Clang 
1 - Install Clang using: 
```
apt-get install clang
```
If you get some error about trying to overwrite /usr/bin/clang go to /var/cache/apt/archives/ and try this: 
```
dpkg -i --force-overwrite clang_10.0.0~svn-20191106+dcaf932-1_iphoneos-arm.deb
```

## Run and compile 
So now you can create a porgram in c, compile it and run it. Create a simple HelloWorld.c and compile with:
```
clang HelloWorld.c -isysroot /var/sdks/iPhoneOS9.3.sdk/
```
And then just run it:
```
./a.out
```

If you get something like: 
```
Killed: 9
```
Just install ldid using: 
```
apt-get install ldid
```
and:
```
ldid -S a.out
./a.out
```

And you must now compile and run your C programs on your iPhone.
