## WeChat_tweak

iOS版功能最全的微信插件，支持最新版微信，具备自动抢红包，屏蔽消息和群消息，过滤特定的群聊，防止撤回消息，伪定位 (朋友圈和附近的人)，修改微信运动步数和实时取景做信息内容页的聊天背景等功能。

[![License MIT](https://img.shields.io/badge/license-MIT-green.svg?style=flat)](LICENSE)&nbsp;

## 插件特点

i. 原生体验

插件 UI 完美嵌入微信设置中，开启各功能后，所有执行的任务都会静默进行，不干扰微信的正常使用。

ii. 自由设置延迟抢红包时间

有效防止抢红包速度太快而被拉黑或踢出群聊。

iii. 设置防止同时抢多个红包

最大程度避免被系统检测出使用插件，红包抢得更安心。

iv. 设置过滤特定的群聊

防止落入家人好友群、点餐群或者公司群抢红包的尴尬境地。

v. 伪定位 

自由修改手机定位，偶尔出个国，发个朋友圈，装个逼。

vi. 屏蔽消息和群消息，防止撤回消息

屏蔽讨厌的人和群的消息，让他们不再打扰你，需要时可关闭，重新接收他们的消息，防止撤回消息，让你不再错过任何信息。

## 免责声明

- 本文所有纯属个人娱乐学习用，相关技术仅用于学习交流，请勿用于非法目的，不得有其他任何商业用途！！！
- 外挂有风险，使用需谨慎。
- 当使用本插件时，请使用者自行承担各种状况，包括但不限于“禁用红包功能”以及“微信封号”。

## Group (ID:614799921)

<div align=left>
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/g614799921.jpg" width="30%" />
</div>

## Preview

- 插件设置

<div align=left>
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/wcplugin_settings.png" width="30%" />&nbsp; 
<img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/wcplugin_xwtx1.png" width="30%" />&nbsp; 
<img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/wcplugin_xwtx2.png" width="30%" />
</div>

- 自动抢红包

<div align=left>
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/wcplugin_redenv.gif" width="30%" />
</div>

- 屏蔽消息

<div align=left>
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/wcplugin_pbqxx.png" width="30%" />&nbsp; 
<img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/wcplugin_pbxx.png" width="30%" />
</div>

- 伪定位

<div align=left>
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/fake_location.png" width="30%" />
</div>

- 防止撤回消息

<div align=left>
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/prevent_msg_revoc.png" width="30%" />
</div>

## 基本原理

在 App 启动时，通过 dyld (the dynamic link editor) 加载我们注入的动态库，从而进行 hook ，而之所以能够执行注入的动态库，是因为使用了 mobilesubstrate 库，这个库能在程序运行的时候动态加载注入的动态库，而非越狱手机里面是没有的，所以我们需要直接将这个库打包进 ipa 中，使用它的 API 实现注入。mobilesubstrate 库在我的 [GitHub](Dynamic%20library/dylib ) 中有提供，即是 libsubstrate.dylib 。

## 打开终端

Terminal 一般 Mac 电脑自带，打开 Terminal 执行后续操作。

<div align=left>
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/terminal.png" width="20%" />
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

PS:  也可以使用 [iOSOpenDev](http://iosopendev.com)

iOSOpenDev 集成在 Xcode 中，提供了一些模板，可直接使用 Xcode 进行开发。只是这个工具停止更新，对高版本的 Xcode 不能很好地支持。本人安装遇到了许多问题，通过查阅许多的资料，最后在 Xcode 中显示了该工具。若安装失败，则参考 [iOSOpenDev Wiki](https://github.com/kokoabim/iOSOpenDev/wiki) 或者其它资料。

## tweak

### 何谓 tweak ?

tweak 定义是：对复杂的系统—通常是电子设备—进行微调或修改来增强其功能。而在 iOS 当中，tweak  是指那些能够增强其它进程功能的 dylib 。可以将 tweak 理解为一个外挂，只不过这个外挂是以动态链接库的方式注入到目标应用当中。我们已经很了解外挂其实就是用来做一些原本的应用无法做到的事情。

### 创建 tweak

使用 nic.pl 创建 tweak ，若提示无此命令，请根据上述步骤配置环境变量，或者不嫌麻烦使用 /opt/theos/bin/nic.pl ，根据提示选择 iphone/tweak ，接着分别输入：

- 项目名
- 该 deb 包的名字（类似 bundle identifier，此 bundle identifier 与要 hook 的 app 的 bundle identifier 不是同一个）
- 作者/维护者
- tweak 作用对象的 bundle identifier（比如微信为com.tencent.xin）
- tweak 安装完成后需要重启的应用名（比如微信为WeChat）

如下图所示：

<div align=left>
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/nic_create_tweak.png" width="60%" />
</div>

完成后会看到四个文件( make 后将生成 .theos 、obj 文件夹)：**Makefile &nbsp; wcodtplugin.plist &nbsp; control &nbsp; Tweak.xm**。

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
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/tweak_plist.png" width="60%" />
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

## 目录介绍

- [Dynamic library](Dynamic%20library) - dylib 目录 (Raw Dynamic Library) 和 modify 目录 (Modified Dynamic Library) ，可直接拿来注入。
- [Hook-Tools](Hook-Tools) - Hook 使用的工具。
    - dumpdecrypted - 用于解密 iOS 的可执行文件，砸壳时可不需要。
    - otool - 一般 Mac 自带，用于查看解密后文件的依赖项检查。
    - install_name_tool - 一般 Mac 自带，更改动态库的依赖。
    - yoyolib - 用于向 iOS 的可执行文件中注入 dylib 。
    - optool - 将动态库注入目标二进制文件中。
    - class-dump - 导出app所有头文件 (`class-dump -s -S -H ~/Desktop/xx.app -o ~/Desktop/xx-headers`)。
    - ldid - 用于对 iOS 可执行文件进行签名的工具，在越狱 iOS 中替换 Xcode 自带的签名工具。
    - PackageApplication -  主要用来通过脚本打包 ipa 文件。
    - 010Editor701 - 一款全新概念的十六进制编辑器，其最强大的功能在于支持模板和脚本操作。
        - [010Editor 最新版 8.0.1 逆向分析](https://www.52pojie.cn/forum.php?mod=viewthread&tid=684119&page=)
    - MachOView - 用于对 mach-o 文件分析的工具。
    - DYFCodesign - 用于对 iOS app 进行脚本重签名。
    - [ios-app-signer](https://github.com/dgynfi/OpenSource#Mac) - 打包 ipa 与重签名图形化工具。
    - iOSOpenDev - Xcode 增强工具，通过它生成用于注入的 dylib 库。建议用 theos 编译 tweak 项目生成注入的 dylib 库。
- [Resources](Resources) - Icon 目录 (带抢红包的Icon) 和 wav 目录 (音频文件) 等。
- [WeChatPluginDev](WeChatPluginDev/wapleodtcorexpc) - 微信插件 tweak 源码开发。

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

## 注入动态库和重签名打包应用

本文的重点内容，动态库可以到我的[GitHub仓库](Dynamic%20library)里下载。接下来请按照以下步骤操作执行：

### 解压 ipa (Unzip ipa)

```
# cd <微信ipa下载目录>
cd ~/Downloads/

# 以 微信-7.0.5 版本为例，注意：下载的版本必须为破解版，如何查看？请阅读查看 app 是否被加密 (Check app)
unzip -o 微信-7.0.5\(越狱应用\).ipa -d ./

# 静默解压
# unzip -q -o 微信-7.0.5\(越狱应用\).ipa -d ./

# 将 Payload 移至桌面
mv ./Payload/ ~/Desktop/
```

### 查看 app 是否被加密 (Check app)

otool 可以输出 app 的 load commands，然后通过查看 cryptid 这个标志位来判断 app 是否被加密，1代表加密，0代表被解密。

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

### 克隆仓库 (Clone Repository)

```
# 进入桌面
cd ~/Desktop/

# 克隆
git clone https://github.com/dgynfi/WeChat_tweak.git
```

### 编译 tweak 项目 (Compile Tweak Project)

```
cd WeChat_tweak/WeChatPluginDev/wapleodtcorexpc/
# compile
make
```

<div align=left>
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/tweak_make.png" width="60%" />
</div>

编译时出现的问题或错误，请查看上述[问题描述和解决方法](#编译)。

将动态库拷贝至桌面：

```
# 将 wapleodtcorexpc.dylib 库拷贝至桌面
cp .theos/obj/debug/wapleodtcorexpc.dylib ~/Desktop/

# 直接打开目录，将 wapleodtcorexpc.dylib 库拷贝或拖拽至桌面
# open .theos/obj/debug/
```

### 更改动态库的依赖 (Change Dynamic Library Dependencies)

将 libsubstrate.dylib 库拷贝至桌面：

```
# 进入桌面
cd ~/Desktop/

# 将 libsubstrate.dylib 库拷贝至桌面
cp WeChat_tweak/Dynamic\ library/dylib/libsubstrate.dylib ~/Desktop/
```

右键 wapleodtcorexpc.dylib ，选择显示简介，在名称与扩展名处将 wapleodtcorexpc.dylib 修改成 wapleodtcorexpc ，回车并移除。

<div align=left>
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/rm_ext.png" width="60%" />
</div>

同理，右键 libsubstrate.dylib ，选择显示简介，在名称与扩展名处将 libsubstrate.dylib 修改成 waplesubstrate ，回车并移除。

执行更改动态库的依赖命令：

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

### 移除架构 (Remove Architectures) 

对于没有强迫证的同学来说，这步可略过。目前 `WeChat` 可执行文件只有 `arm64` 架构，在以前版本中，若移除 `armv7` 架构，则可以大大减少包的大小，以节省手机空间。

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

### 注入动态库 (Install Dynamic Libraries)

```
# 进入桌面，确保当前在桌面上操作
# cd ~/Desktop/

# @executable_path 是一个环境变量，指的是二进制文件所在的路径
./WeChat_tweak/Hook-Tools/optool install -c load -p "@executable_path/wapleodtcorexpc" -t Payload/WeChat.app/WeChat
```

注入过程显示如下：

```
Found thin header...
Inserting a LC_LOAD_DYLIB command for architecture: arm64
Successfully inserted a LC_LOAD_DYLIB command for arm64
Writing executable to Payload/WeChat.app/WeChat...
```

将动态库拷贝至二进制文件所在的目录，操作如下：

```
# 进入桌面，确保当前在桌面上操作
# cd ~/Desktop/

# 将动态库拷贝至二进制文件所在的目录
cp waplesubstrate wapleodtcorexpc Payload/WeChat.app/
```

### 打开 WeChat.app 目录 (Open WeChat.app)

- 进入 WeChat.app 目录

<div align=left>
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/show_wechatapp_dir.png" width="60%" />
</div>

- 找出 Info.plist 文件

<div align=left>
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/found_Info.plist.png" width="60%" />
</div>

双击，默认 Xcode 打开，修改 Info.plist 中的 Bundle display name 和 Bundle identifier，将 WeChatBundleVersion 的 Value 修改成 Bundle version 的 Value，将 URL types -> URL identifier 修改成新的 Bundle identifier，删除 build_time, by, path, rev, tag, uuid, ver 等 Key。

- 删除 PlugIns 和 Watch 目录中的文件

<div align=left>
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/del_files.png" width="60%" />
</div>

- 删除 _CFBundleDisplayName

删除  zh_CN.lproj  InfoPlist.strings  _CFBundleDisplayName  <br />
删除  zh_HK.lproj  InfoPlist.strings  _CFBundleDisplayName  <br />
删除  zh_TW.lproj  InfoPlist.strings  _CFBundleDisplayName  <br />
删除  en.lproj         InfoPlist.strings  _CFBundleDisplayName  <br />

- 删除 Entitlements

删除  Entitlements_for_appstore.plist  <br />
删除  Entitlements_for_ext.plist  <br />
删除  Entitlements_for_jailbreak.plist  <br />
删除  Entitlements_wc_for_ext.plist  <br />
删除  Entitlements_wc.plist  <br />
删除  Entitlements_wx_for_ext.plist  <br />
删除  Entitlements_wx.plist  <br />

 ### 重签名动态库 (Resign Dynamic Libraries)

打开钥匙串访问

<div align=left>
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/keychain_access.png" width="20%" />
</div>

点击登录 -> 我的证书，找出要签名的证书，右击显示简介，找到常用名称，然后拷贝后面的字符串。

执行重签名：

```
codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/waplesubstrate 
# Payload/WeChat.app/waplesubstrate: replacing existing signature

codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/wapleodtcorexpc
# Payload/WeChat.app/wapleodtcorexpc: replacing existing signature

codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/Frameworks/andromeda.framework
# Payload/WeChat.app/Frameworks/andromeda.framework: replacing existing signature

codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/Frameworks/mars.framework
# Payload/WeChat.app/Frameworks/mars.framework: replacing existing signature

codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/Frameworks/marsbridgenetwork.framework
# Payload/WeChat.app/Frameworks/marsbridgenetwork.framework: replacing existing signature

codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/Frameworks/matrixreport.framework
# Payload/WeChat.app/Frameworks/matrixreport.framework: replacing existing signature

codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/Frameworks/OpenSSL.framework
# Payload/WeChat.app/Frameworks/OpenSSL.framework: replacing existing signature

codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/Frameworks/ProtobufLite.framework
# Payload/WeChat.app/Frameworks/ProtobufLite.framework: replacing existing signature
```

### 重签名应用 (Resign app)

打开 Provisioning Profiles 目录

```
# 打开 Provisioning Profiles 目录
open ~/Library/MobileDevice/Provisioning\ Profiles/ 
```

在 Finder 工具栏选择以分栏或画廊方式显示，然后逐一点击 xxx.mobileprovision 文件，找出相匹配的 Bundle identifier 的配置文件 。也可以直接从苹果开发者后台下载证书和  xxx.mobileprovision 配置文件，导入证书或 p12 文件和 xxx.mobileprovision 配置文件 (可直接使用) 。

或者用 cat 命令逐一查看 xxx.mobileprovision 文件

```
cat ~/Library/MobileDevice/Provisioning\ Profiles/ece5c913-5c15-45fd-82e3-90f23739521f.mobileprovision
...
cat ~/Library/MobileDevice/Provisioning\ Profiles/269bffd1-3743-4014-bf07-4eb94c048460.mobileprovision
```

将 xxx.mobileprovision 文件拷贝至桌面

```
cp ~/Library/MobileDevice/Provisioning\ Profiles/269bffd1-3743-4014-bf07-4eb94c048460.mobileprovision ~/Desktop/wcpl_adhoc.mobileprovision
```

执行重签名应用：

```
# 进入桌面，确保当前在桌面上操作
cd ~/Desktop/

./WeChat_tweak/Hook-Tools/DYFCodesign Payload/ "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" wcpl_adhoc.mobileprovision 
# /Users/xxx/Desktop/Payload/WeChat.app: replacing existing signature
```

### 打包应用 (Package app)

- 方法一

```
# 进入桌面，确保当前在桌面上操作
# cd ~/Desktop/

zip -r WeChat_705_New.ipa Payload/

# 静默压缩
# zip -qr WeChat_705_New.ipa Payload/
```

- 方法二

**PackageApplication** 主要用来通过脚本打包 ipa 文件，然而从 **Xcode 8.2.1** 版本之后，就不建议使用了。所以每次更新 Xcode 版本，都要手动添加 **PackageApplication** 。

**PackageApplication** 下载地址：

1. 百度网盘下载：

[https://pan.baidu.com/s/1AjVW8hWYlVz3Cu9UJByQOQ - 提取码：4sqb](https://pan.baidu.com/s/1AjVW8hWYlVz3Cu9UJByQOQ)

2. Github下载：

[https://github.com/dgynfi/WeChat_tweak/tree/master/Hook-Tools/](https://github.com/dgynfi/WeChat_tweak/tree/master/Hook-Tools/)

将下载的 **PackageApplication** 执行以下命令，并设置可执行权限：

```
chmod 777 ~/Downloads/PackageApplication
```

Applications -> 右键 Xcode.app -> 显示包内容 -> Contents -> Developer -> platforms -> iPhoneOS.platform -> Developer -> usr -> bin，进入这个目录之后，将设置了可执行权限的 **PackageApplication** 复制到这个目录。

或者使用命令如下：

```
cp ~/Downloads/PackageApplication /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/usr/bin
```

执行打包：

```
xcrun -sdk iphoneos PackageApplication -v Payload/WeChat.app -o ~/Desktop/WeChat_705_New.ipa
```

### 安装 ipa 

1. 最后使用 **爱思助手/ifunbox** 安装 WeChat_705_New.ipa 。

2. 使用 Xcode -> Window -> Devices and Simulators ，右击自己的设备，选择 Connect via IP Adress...，输入设备的IP，然后点击 Connect ，最后在 INSTALLED APPS 处点击 “+” 号，然后选择 WeChat_705_New.ipa ，点击 Open ，然后漫长地等待安装，大约1 ~ 3分钟。

## 💰支持作者

如果觉得这个插件对你有帮助 (帮你抢到了比之前更多的红包，帮你发在国外高大尚的朋友圈，帮你屏蔽了厌烦并叨扰的人和群，帮你不再错过任何消息，...) ，那么不妨请我喝杯咖啡☕。

<div align=left>
&emsp; <img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/alipay_paymentcode.jpg" width="30%" />&nbsp; 
<img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/wechat_apprcode.jpg" width="30%" />
</div>

## Hook 版本下载

Hook 的版本只需要按照解压 ipa (Unzip ipa)，重签名应用 (Resign app) ，打包应用 (Package app) ，安装 ipa 等步骤执行即可。

- 百度网盘下载：

[https://pan.baidu.com/s/1KCwmMWzchaZDeZQSlNt6qg - 提取码：3eqb](https://pan.baidu.com/s/1KCwmMWzchaZDeZQSlNt6qg)

## 坐标拾取

- [百度地图-拾取坐标系统](http://api.map.baidu.com/lbsapi/getpoint/index.html)
- [高德地图-坐标拾取器](https://lbs.amap.com/console/show/picker)
- [腾讯地图-坐标拾取器](https://lbs.qq.com/tool/getpoint/index.html)

清华大学：116.333446,40.009557

## 免费证书

- [iOS个人证书真机调试及报错](https://www.jianshu.com/p/f31116a76ea9)
- [iOS Xcode8免证书真机调试（不越狱）](https://www.jianshu.com/p/5c1fb2cb293c)
- [IOS开发之免费证书+不越狱真机调试](https://www.cnblogs.com/iOS-mt/p/5454287.html)

免费证书能进行真机调试程序。新建一个模板工程，通过 Xcode 登入自己的 Apple ID (菜单 Xcode -> Preferences... -> Accounts -> 点击 + -> 选择 Apple ID -> 输入账号密码 -> 登入)，进入 TARGETS -> General -> Identify -> 设置 Bundle Identifier ，新 Xcode 版本进入 Signing & Capabilities -> 勾选自动管理签名 (Automatically manage signing)，旧版本直接勾选自动管理签名 (Automatically manage signing) 即可，等待自动生成 Provisioning Profile 和 Signing Certificate 后，可查看 App ID, Team 等信息，但免费证书有个缺点 ，其中 Provisioning Profile (xxx.mobileprovision) 文件有效期仅只有 **7** 天，过期后需要打开 Xcode 模板工程重新生成。我们在学习时可以利用免费证书真机调试程序和重签名应用 (Resign app) ，但是长期使用，不建议使用免费证书，推荐可以去苹果开发者后台申请 Apple ID 账号或者去某宝找商家代签名 (风险需要自己承担)。

## 建议

如果您要将动态库 **wapleodtcorexpc** 和 **waplesubstrate** 修改成自定义的名字，那么只要将 **wapleodtcorexpc** 工程名和 **Makefile、control、xxx.plist** 文件内的部分信息一并修改，然后从步骤 **编译 tweak 项目 (Compile Tweak Project)** 重新开始操作。

## 简书

- [iOS逆向 - 实现微信自动抢红包-伪定位-防撤回消息 (非越狱)](https://www.jianshu.com/p/8fa5f61af3e4)

## 参考文章

- [移动App入侵与逆向破解技术－iOS篇](https://mp.weixin.qq.com/s?__biz=MzA3NTYzODYzMg==&mid=2653577384&idx=1&sn=b44a9c9651bf09c5bea7e0337031c53c&scene=0#wechat_redirect)

- [蒸米的文章 - iOS冰与火之歌系列](https://github.com/zhengmin1989/MyArticles)

- [iOS微信抢红包Tweak安装教程](http://www.swiftyper.com/2016/01/25/ios-tweak-install-guide)

- [一步一步实现iOS微信自动抢红包(非越狱)](https://www.jianshu.com/p/189afbe3b429)

- [iOS应用逆向工程(第2版)](https://www.amazon.cn/gp/product/B00VFDVY7E/ref=as_li_tf_tl?ie=UTF8&camp=536&creative=3200&creativeASIN=B00VFDVY7E&linkCode=as2&tag=buginux-23)

## iOS逆向交流

- [iOS逆向交流社区 -  iOSRE](http://bbs.iosre.com)

## 欢迎反馈

如果你注意到任何问题，被卡住或只是想聊天，请随意创建一个问题。我很乐意帮助你。
