## 基本原理

在 app 启动时，通过 dyld (the dynamic link editor) 加载我们注入的动态库，从而进行 hook ，而之所以能够执行注入的动态库，是因为使用了 mobilesubstrate 库，这个库能在程序运行的时候动态加载注入的动态库，而非越狱手机里面是没有的，所以我们需要直接将这个库打包进 ipa 中，使用它的 API 实现注入。mobilesubstrate 库在我的 [GitHub](Dynamic%20library/dylib) 中有提供，即是 libsubstrate.dylib 。


## 打开终端

Terminal 一般 Mac 电脑自带，打开 Terminal 执行后续操作。

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/terminal.png" width="20%" />
</div>


## 安装 theos

theos 是一个越狱开发工具包，它可以生成 iOS app 以及 tweak 等程序的框架，并提供 makefile 来编译、打包和安装。

- 从 Github 下载 theos ，进行如下操作：

```
export THEOS=/opt/theos
rm -rf $THEOS # 如果之前已经安装过 theos，请先删除，然后下载最新版
sudo git clone --recursive https://github.com/theos/theos.git $THEOS
```

执行命令后，显示如下：

```
Cloning into '/opt/theos'...
remote: Enumerating objects: 18, done.
remote: Counting objects: 100% (18/18), done.
remote: Compressing objects: 100% (14/14), done.
remote: Total 8802 (delta 4), reused 9 (delta 4), pack-reused 8784
Receiving objects: 100% (8802/8802), 2.20 MiB | 9.00 KiB/s, done.
Resolving deltas: 100% (5467/5467), done.
Submodule 'vendor/dm.pl' (https://github.com/theos/dm.pl.git) registered for path 'vendor/dm.pl'
Submodule 'vendor/include' (https://github.com/theos/headers.git) registered for path 'vendor/include'
Submodule 'vendor/lib' (https://github.com/theos/lib.git) registered for path 'vendor/lib'
Submodule 'vendor/logos' (https://github.com/theos/logos.git) registered for path 'vendor/logos'
Submodule 'vendor/nic' (https://github.com/theos/nic.git) registered for path 'vendor/nic'
Cloning into '/opt/theos/vendor/dm.pl'...
remote: Enumerating objects: 142, done.        
remote: Total 142 (delta 0), reused 0 (delta 0), pack-reused 142        
Receiving objects: 100% (142/142), 54.20 KiB | 9.00 KiB/s, done.
Resolving deltas: 100% (72/72), done.
...
...
...
Submodule path 'vendor/include/rocketbootstrap/LightMessaging': checked out '496257b11c3e906333797639355db9a43015eb50'
Submodule path 'vendor/lib': checked out 'b1d502cc632ec349f8e2b3df9d7630bad64fd25e'
Submodule path 'vendor/logos': checked out 'a54760ea60acf45fa48267b9fb344c0317d9351c'
Submodule path 'vendor/nic': checked out '794d210f81198c6aef4f0ab8d04bd74ffe149f51'
```

- 配置 ldid

ldid 是用于对 iOS 可执行文件进行签名的工具，可以在越狱 iOS 中替换 Xcode 自带的签名工具。

从 [http://joedj.net/ldid](http://joedj.net/ldid) 下载，将其移动到 /opt/theos/bin 目录下，然后设置可执行权限。

```
# cd <下载ldid的目录>
cd ~/Downloads/
sudo mv ldid /opt/theos/bin
sudo chmod 777 /opt/theos/bin/ldid
```

- 配置环境变量

使用命令 `vi ~/.bash_profile` 或者 `open -e ~/.bash_profile` ，在 .bash_profile 文件的最后加入 (否则每次重启 Terminal 都要重新 export)

```
export PATH=/opt/theos/bin:$PATH
export THEOS=/opt/theos
```

保存并退出，使用命令 `source ~/.bash_profile` ，立即生效。

*PS:  也可以使用 [iOSOpenDev](http://iosopendev.com)*

iOSOpenDev 集成在 Xcode 中，提供了一些模板，可直接使用 Xcode 进行开发。只是这个工具停止更新，对高版本的 Xcode 不能很好地支持。本人安装遇到了许多问题，通过查阅许多的资料，最后在 Xcode 中显示了该工具。若安装失败，则参考 [iOSOpenDev Wiki](https://github.com/kokoabim/iOSOpenDev/wiki) 或者其它资料。


## Tweak

### 何谓 tweak ?

tweak 定义是：对复杂的系统—通常是电子设备—进行微调或修改来增强其功能。而在 iOS 当中，tweak 是指那些能够增强其它进程功能的 dylib 。可以将 tweak 理解为一个外挂，只不过这个外挂是以动态链接库的方式注入到目标应用当中。我们已经很了解外挂其实就是用来做一些原本的应用无法做到的事情。

### 创建 tweak

使用 nic.pl 创建 tweak ，若提示无此命令，请根据上述步骤配置环境变量，或者不嫌麻烦使用 /opt/theos/bin/nic.pl ，根据提示选择 iphone/tweak ，接着分别输入：

- 项目名
- 该 deb 包的名字（类似 bundle identifier，此 bundle identifier 与要 hook 的 app 的 bundle identifier 不是同一个）
- 作者/维护者
- tweak 作用对象的 bundle identifier（比如微信为com.tencent.xin）
- tweak 安装完成后需要重启的应用名（比如微信为WeChat）

如下图所示：

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/nic_create_tweak.png" width="60%" />
</div>

完成后会看到四个文件( make 后将生成 .theos 、obj 文件夹)：**Makefile,&nbsp; wcodtplugin.plist,&nbsp; control,&nbsp; Tweak.xm**。

- Makefile

工程用到的文件、框架、库等信息。该文件过于简单，还需要添加一些信息，如：<br />

指定处理器架构 `ARCHS = armv7 arm64` <br />
指定 SDK 版本 `TARGET = iphone:latest:8.0` <br />
导入所需的 framework 等。<br />

修改后的 Makefile 文件如下所示：

```
ARCHS = armv7 arm64
TARGET = iphone:latest:8.0
THEOS_MAKE_PATH = /opt/theos/makefiles

include $(THEOS_MAKE_PATH)/common.mk

TWEAK_NAME = wcodtplugin
$(TWEAK_NAME)_FILES = $(wildcard src/*.m) src/Tweak.xm
$(TWEAK_NAME)_FRAMEWORKS = UIKit AVFoundation CoreLocation

src/xxa.m_CFLAGS = -fobjc-arc
...
src/xxz.m_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
    install.exec "killall -9 WeChat"
```

- wcodtplugin.plist

该文件中的 Bundles : 指定 bundle 为 tweak 的作用对象，也可添加多个 bundle ，指定多个为 tweak 作用对象。

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/tweak_plist.png" width="60%" />
</div>

- control

该 tweak 所需的基本信息 (其实大部分都是创建 tweak 所填写的信息) 

```
Package: com.aple.wcodtplugin
Name: wcodtplugin
Depends: mobilesubstrate
Version: 0.0.1 # 版本号
Architecture: iphoneos-arm
Description: An awesome MobileSubstrate tweak! # 填写项目描述
Maintainer: dyf # 维护者
Author: dyf # 作者
Section: Tweaks
```

- Tweak.xm

重点文件，用来编写 hook 代码，因为支持 Logos 和 C/C++ 语法，可以让我们不用去写一些 runtime 方法 (必要时候还是要写) ，从而进行 hook 。

PS:  .x 文件支持 Logos 语法，.xm 文件支持 Logos 和 C/C++ 语法。

### Logos 常用语法

- %hook

指定需要 hook 的类，以%end结尾。

- %orig

在 %hook 内部使用，执行 hook 住的方法原代码。

- %new

在 %hook 内部使用，给 class 添加新方法，与 class_addMethod 相同。<br />
与 Category 中添加方法的区别：Category 为编译时添加，class_addMethod 为动态添加。<br />
warning ：添加的方法需要在 @interface 中进行声明。 <br />

- %c

获取一个类，等同于 objc_getClass 、NSClassFromString 。

- MSHookIvar<id>(self, "m_tableViewMgr")

在 %hook 内部使用，获取一个类的私有成员变量。

> %hook、%log、%orig 等都是 mobilesubstrate 的 MobileHooker 模块提供的宏，除此之外还有 %group  %init  %ctor 等，其实也就是把 method swizzling 相关的方法封装成了各种宏标记，若想深入了解，请左转 [Google](https://www.google.com) 或者 [Baidu](https://www.baidu.com) 。

### 编写 Tweak.xm

在熟悉各种语法之后，可以进行编写代码了，其中 MMUIViewController 为微信的基础的 ViewController 。我们通过 hook viewDidApper: 来进行 Hello World! 弹窗。 

编写一个 hook 接口声明头文件 `HookInterfaceStatment.h`，代码如下：

```
@interface MMUIViewController : UIViewController

- (void)startLoadingBlocked;
- (void)startLoadingNonBlock;
- (void)startLoadingWithText:(NSString *)text;
- (void)stopLoading;
- (void)stopLoadingWithFailText:(NSString *)text;
- (void)stopLoadingWithOKText:(NSString *)text;

// Added method.
- (void)helloWorld;

@end
```

编写 Tweak.xm ，代码如下：

```
#import "HookInterfaceStatment.h"

%hook MMUIViewController

- (void)viewWillAppear:(_Bool)arg1 {
    %orig;
    [self helloWorld];
}

%new
- (void)helloWorld {
    UIAlertController *alertController = ({
        UIAlertController *_alertController = [UIAlertController alertControllerWithTitle:@"Hello World!" message:nil preferredStyle:UIAlertControllerStyleAlert];
        [_alertController addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {}]];
        [_alertController addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction * _Nonnull action) {}]];
        _alertController;
    });
    [self presentViewController:alertController animated:YES completion:NULL];
}

%end
```

### 编译

使用 `make` 进行编译，若想重新编译，则先 `make clean` 。make 编译完成后，在当前文件夹下面将生成两个文件夹: .theos 与 obj ，其中编译完成的动态库就在 .thoes/obj/debug 的下面，与工程名相同。

#### 问题描述和解决方法

- 问题1

```
Makefile:6: theos/makefiles/common.mk: Not a directory
Makefile:25: /tweak.mk: No such file or directory
make: *** No rule to make target `/tweak.mk'.  Stop.
```

解决办法：首先确保安装并配置了 theos ，其次修改 Makefile 文件，在 `$(THEOS)/makefiles` 代码行上方定义 `THEOS_MAKE_PATH = /opt/theos/makefiles` ，将 `$(THEOS)/makefiles` 替换成 `$(THEOS_MAKE_PATH)` 。

- 问题2

```
bash: ldid: command not found
make[2]: *** [/Users/xxx/Desktop/wcodtplugin/.theos/obj/debug/wcodtplugin.dylib] Error 6
rm /Users/xxx/Desktop/wcodtplugin/.theos/obj/debug/wcodtplugin.dylib.47ba6b93.unsigned
make[1]: *** [internal-library-all_] Error 2
make: *** [wcodtplugin.all.tweak.variables] Error 2
```

解决办法：按照配置 ldid 步骤执行，重新编译。

- 问题3

```
xcrun: error: SDK "iphoneos" cannot be located
xcrun: error: SDK "iphoneos" cannot be located
==> Error: You do not have any SDKs in /Library/Developer/CommandLineTools/Platforms/iPhoneOS.platform/Developer/SDKs or /opt/theos/sdks.
make: *** [before-all] Error 1
```

解决办法：在终端执行命令 `sudo xcode-select --switch /Applications/Xcode.app` 即可。


- 问题4 (代码报错)

```
> Making all for tweak wcodtplugin…
==> Preprocessing Tweak.xm…
==> Compiling Tweak.xm (armv7)…
Tweak.xm:5:26: error: expected ';' after expression
... UIAlertController *_alertController = [UIAlertController alertControllerWithTitle...
                            ^
                            ;
1 error generated.
make[3]: *** [/Users/xxx/Desktop/wcodtplugin/.theos/obj/debug/armv7/Tweak.xm.8aee9f68.o] Error 1
rm /Users/xxx/Desktop/wcodtplugin/.theos/obj/debug/armv7/Tweak.xm.mm
make[2]: *** [/Users/xxx/Desktop/wcodtplugin/.theos/obj/debug/armv7/wcodtplugin.dylib] Error 2
make[1]: *** [internal-library-all_] Error 2
make: *** [wcodtplugin.tweak.variables] Error 2
```

解决办法：根据错误提示，找到报错的代码进行修改，重新编译。

- 问题5 (打包出错)

```
> Making all for tweak wcodtplugin…
make[2]: Nothing to be done for `internal-library-compile'.
> Making stage for tweak wcodtplugin…
Can't locate IO/Compress/Lzma.pm in @INC (you may need to install the IO::Compress::Lzma module) (@INC contains: /usr/local/Cellar/perl/5.26.2/lib/perl5/site_perl/5.26.2/darwin-thread-multi-2level /usr/local/Cellar/perl/5.26.2/lib/perl5/site_perl/5.26.2 /usr/local/Cellar/perl/5.26.2/lib/perl5/5.26.2/darwin-thread-multi-2level /usr/local/Cellar/perl/5.26.2/lib/perl5/5.26.2 /usr/local/lib/perl5/site_perl/5.26.2/darwin-thread-multi-2level /usr/local/lib/perl5/site_perl/5.26.2) at /opt/theos/bin/dm.pl line 12.
BEGIN failed--compilation aborted at /opt/theos/bin/dm.pl line 12.
make: *** [internal-package] Error 2
```

解决办法：

```
1. /opt/theos/vendor/dm.pl/dm.pl
# 注释掉第12、13行
# use IO::Compress::Lzma;
# use IO::Compress::Xz;

2. /opt/theos/makefiles/package/deb.mk
# 第6行 lzma 改为 gzip
_THEOS_PLATFORM_DPKG_DEB_COMPRESSION ?= gzip
```

最后重新 make package ，成功了。


## 获取砸壳版本的微信

1. 百度网盘下载

[https://pan.baidu.com/s/1eT3tgfQRjIHUu3PL77YY9Q - 提取码：o8sa](https://pan.baidu.com/s/1eT3tgfQRjIHUu3PL77YY9Q)

2. SSH 服务

实现在越狱手机上远程进行 ssh 服务，在 Cydia 中安装 OpenSSH 。

- ssh : 远程登录

```
# 指令 ssh user@ip
ssh mobile@192.168.6.6
```

- scp : 远程拷贝

本地文件拷贝到 iOS 上 (若从 iOS 上拷贝到本地，则相反) 。

```
# 指令 scp /path/to/localFile user@ip:/path/to/remoteFile
scp ~/Desktop/icon.png root@192.168.6.6:/var/tmp/
```

> 注意，OpenSSH 默认登录密码为 alpine ，iOS 上的用户只有 root 和 mobile，修改密码使用 passwd root (mobile) 。

3. 使用 Clutch 对越狱手机上的应用进行砸壳

- 将 Cluth 仓库 clone 到本地：

```
git clone https://github.com/KJCracks/Clutch
cd Clutch
```

- 使用 Xcode 进行构建，得到可执行文件：

```
xcodebuild -project Clutch.xcodeproj -configuration Release ARCHS="armv7 arm64" build
```

- 将可执行文件 clutch 拷贝到手机上：

```
scp Clutch/clutch root@<your.device.ip>:/usr/bin/
```

- 先 ssh 到越狱手机上，然后查看当前安装的应用：

```
ssh root@<your.device.ip>

# 列出当前安装的应用
clutch -i

# Installed apps:
# 1: WeChat <com.tencent.xin>
# ...
```

- 开始砸壳

```
# clutch -d <bundle identifier>
clutch -d com.tencent.xin

# Zipping WeChat.app
# Swapping architectures..
# ASLR slide: 0xb3000
# ...
# writing new checksum
# DONE: /private/var/mobile/Documents/Dumped/com.tencent.xin-iOS9.2-(Clutch-2.0.4).ipa
# Finished dumping com.tencent.xin in 76.9 seconds
```

- 将砸完壳的 ipa 包拷回 Mac 电脑上

```
mv /private/var/mobile/Documents/Dumped/com.tencent.xin-iOS9.2-\(Clutch-2.0.4\).ipa /private/var/mobile/Documents/Dumped/WeChat.ipa

scp root@<your.device.ip>:/private/var/mobile/Documents/Dumped/WeChat.ipa ~/Desktop/
```


## 解压 ipa 

```
# cd <微信ipa下载目录>
cd ~/Downloads/

# 以 微信-7.0.5 版本为例，注意：下载的版本必须为破解版，如何查看？请阅读查看 app 是否被加密 (Check app)
unzip -o 微信-7.0.5\(越狱应用\).ipa -d ./

# 静默解压 (Unzip ipa)
# unzip -q -o 微信-7.0.5\(越狱应用\).ipa -d ./

# 将 Payload 移至桌面
mv ./Payload/ ~/Desktop/
```


## 查看 app 是否被加密

otool 可以输出 app 的 load commands，然后通过查看 cryptid 这个标志位来判断 app 是否被加密，1：代表加密，0：代表被解密。

```
# 进入桌面
cd ~/Desktop/

# 查看 app 是否被加密
otool -l Payload/WeChat.app/WeChat | grep -B 2 crypt
```

结果显示如下：

```
otool -l Payload/WeChat.app/WeChat | grep -B 2 crypt
          cmd LC_ENCRYPTION_INFO_64
      cmdsize 24
     cryptoff 16384
    cryptsize 100237312
      cryptid 0
```


## 导出动态库

### 克隆仓库

```
# 进入桌面
cd ~/Desktop/

# 克隆 (Clone Repository)
git clone https://github.com/itenfay/WeChat_tweak.git
```

### 编译 tweak 项目

```
cd WeChat_tweak/WeChatPluginDev/wapleodtcorexpc/
# compile tweak project
make
```

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/tweak_make.png" width="60%" />
</div>

编译时出现的问题或错误，请查看上述 **Tweak** 小节中 **编译** 提及的 [问题描述和解决方法](#问题描述和解决方法)。

### 导出

将动态库拷贝至桌面：

```
# 将 wapleodtcorexpc.dylib 库拷贝至桌面
cp .theos/obj/debug/wapleodtcorexpc.dylib ~/Desktop/

# 直接打开目录，将 wapleodtcorexpc.dylib 库拷贝或拖拽至桌面
# open .theos/obj/debug/
```


## 更改动态库的依赖

将 libsubstrate.dylib 库拷贝至桌面：

```
# 进入桌面
cd ~/Desktop/

# 将 libsubstrate.dylib 库拷贝至桌面
cp WeChat_tweak/Dynamic\ library/dylib/libsubstrate.dylib ~/Desktop/
```

右键 wapleodtcorexpc.dylib ，选择显示简介，在名称与扩展名处将 wapleodtcorexpc.dylib 修改成 wapleodtcorexpc ，回车并移除。

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/rm_ext.png" width="60%" />
</div>

同理，右键 libsubstrate.dylib ，选择显示简介，在名称与扩展名处将 libsubstrate.dylib 修改成 waplesubstrate ，回车并移除。

执行更改动态库的依赖 (Change Dynamic Library Dependencies) 命令：

```
install_name_tool -change /Library/Frameworks/CydiaSubstrate.framework/CydiaSubstrate @loader_path/waplesubstrate wapleodtcorexpc
```

查看依赖项，检查是否更改成功，使用以下命令：

```
otool -L wapleodtcorexpc
```

显示如下：

```
wapleodtcorexpc (architecture armv7):
    /Library/MobileSubstrate/DynamicLibraries/wapleodtcorexpc.dylib (compatibility version 0.0.0, current version 0.0.0)
    /usr/lib/libobjc.A.dylib (compatibility version 1.0.0, current version 228.0.0)
    /System/Library/Frameworks/Foundation.framework/Foundation (compatibility version 300.0.0, current version 1570.15.0)
    /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation (compatibility version 150.0.0, current version 1570.15.0)
    /System/Library/Frameworks/UIKit.framework/UIKit (compatibility version 1.0.0, current version 61000.0.0)
    /System/Library/Frameworks/AVFoundation.framework/AVFoundation (compatibility version 1.0.0, current version 2.0.0)
    /System/Library/Frameworks/CoreLocation.framework/CoreLocation (compatibility version 1.0.0, current version 2245.12.30)
    @loader_path/waplesubstrate (compatibility version 0.0.0, current version 0.0.0)
    /usr/lib/libc++.1.dylib (compatibility version 1.0.0, current version 400.9.4)
    /usr/lib/libSystem.B.dylib (compatibility version 1.0.0, current version 1252.250.1)
    /System/Library/Frameworks/CoreVideo.framework/CoreVideo (compatibility version 1.2.0, current version 1.5.0)
wapleodtcorexpc (architecture arm64):
    /Library/MobileSubstrate/DynamicLibraries/wapleodtcorexpc.dylib (compatibility version 0.0.0, current version 0.0.0)
    /usr/lib/libobjc.A.dylib (compatibility version 1.0.0, current version 228.0.0)
    /System/Library/Frameworks/Foundation.framework/Foundation (compatibility version 300.0.0, current version 1570.15.0)
    /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation (compatibility version 150.0.0, current version 1570.15.0)
    /System/Library/Frameworks/UIKit.framework/UIKit (compatibility version 1.0.0, current version 61000.0.0)
    /System/Library/Frameworks/AVFoundation.framework/AVFoundation (compatibility version 1.0.0, current version 2.0.0)
    /System/Library/Frameworks/CoreLocation.framework/CoreLocation (compatibility version 1.0.0, current version 2245.12.30)
    @loader_path/waplesubstrate (compatibility version 0.0.0, current version 0.0.0)
    /usr/lib/libc++.1.dylib (compatibility version 1.0.0, current version 400.9.4)
    /usr/lib/libSystem.B.dylib (compatibility version 1.0.0, current version 1252.250.1)
    /System/Library/Frameworks/CoreVideo.framework/CoreVideo (compatibility version 1.2.0, current version 1.5.0)
```

CydiaSubstrate 只有越狱的手机上才有，因此我们需要手动更改并导入。从上可见，`/Library/Frameworks/CydiaSubstrate.framework/CydiaSubstrate` 更改成了 `@loader_path/waplesubstrate` ，这表明动态库的依赖更改成功。


## 移除架构

对于没有强迫证的同学来说，可略过这步 (Remove Architectures) 。目前 `WeChat` 可执行文件只有 `arm64` 架构，在以前版本中，若移除 `armv7` 架构，则可以大大减少包的大小，以节省手机空间。

```
# 进入桌面，确保当前在桌面上操作
cd ~/Desktop/

lipo -info waplesubstrate 
# Architectures in the fat file: waplesubstrate are: armv7 arm64 

lipo waplesubstrate -remove armv7 -output ./waplesubstrate 

lipo -info waplesubstrate 
# Architectures in the fat file: waplesubstrate are: arm64 

lipo -info wapleodtcorexpc 
# Architectures in the fat file: wapleodtcorexpc are: armv7 arm64

lipo wapleodtcorexpc -remove armv7 -output ./wapleodtcorexpc

lipo -info wapleodtcorexpc 
# Architectures in the fat file: wapleodtcorexpc are: arm64
```


## 建议

如果您要将动态库 **wapleodtcorexpc** 和 **waplesubstrate** 修改成自定义的名字，那么只要将 **wapleodtcorexpc** 工程名和 **Makefile、control、xxx.plist** 文件内的部分信息一并修改，然后从步骤 **[编译 tweak 项目](#编译-tweak-项目)** 重新开始操作。
