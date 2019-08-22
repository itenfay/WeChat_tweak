[如果你觉得能帮助到你，请给一颗小星星。谢谢！(If you think it can help you, please give it a star. Thanks!)](https://github.com/dgynfi/WeChat_tweak)

[![License MIT](https://img.shields.io/badge/license-MIT-green.svg?style=flat)](LICENSE)&nbsp;

## 技术交流群(群号:155353383) 

欢迎加入技术交流群，一起探讨技术问题。<br />
![](https://github.com/dgynfi/WeChat_tweak/raw/master/images/qq155353383.jpg)

## WeChat_tweak

 iOS 版功能较全的微信插件，具备抢红包，修改微信运动步数，伪定位（朋友圈和附近的人），屏蔽消息和群消息，过滤群，防撤回消息和信息内容页的背景实时取景等功能。

## 免责声明

- 本文所有纯属个人娱乐学习用，相关技术仅用于学习交流，请勿用于非法目的，不得有其他任何商业用途！！！
- 外挂有风险，使用需谨慎。
- 当使用本插件时，请使用者自行承担各种状况，包括但不限于“禁用红包功能”以及“微信封号”。

## tweak

- 何谓 tweak ?

tweak 定义是：对复杂的系统—通常是电子设备—进行微调或修改来增强其功能。而在 iOS 当中，tweak 是指那些能够增强其它进程功能的 dylib。可以将 tweak 理解为一个外挂，只不过这个外挂是以动态链接库的方式注入到目标应用当中。我们已经很了解外挂其实就是用来做一些原本的应用无法做到的事情。

## 安装 theos

theos 是一个越狱开发工具包，它可以生成 iOS 越狱APP以及tweak等程序的框架，并提供makefile来编译、打包和安装。

打开 Terminal（Mac电脑自带的终端）

<div align=center>
<img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/Terminal.png" width="30%" />
</div>

- 从 Github 下载 theos ，进行如下操作：

```
export THEOS=/opt/theos
# 如果之前已经安装过 theos，请先删除，然后下载最新版
rm -rf $THEOS
sudo git clone --recursive https://github.com/theos/theos.git $THEOS
```

- 配置ldid

ldid是用于对 iOS 可执行文具进行签名的工具，可以在越狱 iOS 中替换 Xcode 自带的签名工具。

从 [http://joedj.net/ldid](http://joedj.net/ldid) 下载，将其移动到 /opt/theos/bin 目录下，然后设置可执行权限。

```
cd <下载ldid的目录>
sudo mv ldid /opt/theos/bin
sudo chmod 777 /opt/theos/bin/ldid
```

## 目录介绍

- [Dynamic library](Dynamic%20library) - dylib 目录 (Raw Library) 和 modify 目录 (Modified Library)，可直接拿来注入。
- [Hook-Tools](Hook-Tools) - Hook常用工具。
    - iOSOpenDev - Xcode增强工具，需要通过它生成用于注入的dylib。也可用theos编译tweak项目生成注入的dylib库。
    - dumpdecrypted - 用于解密iOS的可执行文件，砸壳时可不需要。
    - otool - 一般Mac自带，用于查看解密后文件的依赖项检查。
    - install_name_tool - 一般Mac自带，修改动态库的路径。
    - yoyolib - 用于向iOS的可执行文件中注入dylib。
    - optool - 将动态链接库注入二进制文件中。
    - class-dump - 导出app所有头文件 (`class-dump -s -S -H ~/Desktop/xx.app -o ~/Desktop/xx-headers`)。
    - [ios-app-signer](https://github.com/dgynfi/OpenSource#Mac) - 打包 ipa 与重签名图形化工具。
- [Resources](Resources) - Icon 目录 (带抢红包的Icon) 和 wav 目录 (音频文件)。
- [WeChatPluginDev](WeChatPluginDev) - 微信插件tweak源码开发。

## 获取砸壳版本的微信

- 直接在 PP 助手下载

- 百度网盘提供部分下载：
[https://pan.baidu.com/s/1eT3tgfQRjIHUu3PL77YY9Q - 提取码：o8sa](https://pan.baidu.com/s/1eT3tgfQRjIHUu3PL77YY9Q)

- 使用 Clutch 越狱手机上的应用进行砸壳

将 Cluth 仓库 clone 到本地：

```
git clone https://github.com/KJCracks/Clutch
cd Clutch
```

使用 Xcode 进行构建，得到可执行文件：

```
xcodebuild -project Clutch.xcodeproj -configuration Release ARCHS="armv7s arm64" build
```

将可执行文件 clutch 拷贝到手机上：

```
scp Clutch/clutch root@<your.device.ip>:/usr/bin/
```

先 ssh 到越狱手机上，然后查看当前安装的应用：

```
ssh root@<your.device.ip>
clutch -i

# Installed apps:
# 1: WeChat <com.tencent.xin>
# 2: DingTalk <com.laiwang.DingTalk>
# .......
```

开始砸壳

```
clutch -d com.tencent.xin

# com.tencent.xin contains watchOS 2 compatible application. It's not possible to dump watchOS 2 apps with Clutch 2.0.4 at this moment.
# Zipping WeChat.app
# Swapping architectures..
# ASLR slide: 0xb3000
# ...
# writing new checksum
# DONE: /private/var/mobile/Documents/Dumped/com.tencent.xin-iOS9.0-(Clutch-2.0.4).ipa
# Finished dumping com.tencent.xin in 76.9 seconds

```

将砸完壳的ipa包拷回电脑上

```
$ mv /private/var/mobile/Documents/Dumped/com.tencent.xin-iOS9.0-\(Clutch-2.0.4\).ipa /private/var/mobile/Documents/Dumped/wechat.ipa

$ scp root@<your.device.ip>:/private/var/mobile/Documents/Dumped/wechat.ipa ~/Desktop

```

## 注入库和重签名打包

- 编译 (Compiling)

```
cd /Users/dyf/Desktop//WeChat_tweak/WeChatPluginDev/XApleSysCalcService
make
cp .theos/obj/debug/XApleSysCalcService.dylib ~/Desktop 

# 直接打开目录，拷贝或拖动dylib库至桌面
# open .theos/obj/debug/
```

- 移除架构 (Remove Architecture) 

```
lipo libsubstrate.dylib -remove armv7 -output ./libsubstrate.dylib
lipo -info libsubstrate.dylib

lipo XApleSysCalcService -remove armv7 -output ./XApleSysCalcService
lipo -info XApleSysCalcService
```

将 libsubstrate.dylib 改名为 XApleSysSubstr，并设置可执行权限：

```
chmod 777 XApleSysSubstr
```

- 改变动态库的路径 (Change Library Path)

```
install_name_tool -change /Library/Frameworks/CydiaSubstrate.framework/CydiaSubstrate @loader_path/XApleSysSubstr XApleSysCalcService

```

查看依赖项，检查路径是否修改成功，使用以下命令：

```
otool -L XApleSysCalcService
```

显示如下：

```
XApleSysCalcService (architecture armv7):
    /Library/MobileSubstrate/DynamicLibraries/XApleSysCalcService.dylib (compatibility version 0.0.0, current version 0.0.0)
    /usr/lib/libobjc.A.dylib (compatibility version 1.0.0, current version 228.0.0)
    /System/Library/Frameworks/Foundation.framework/Foundation (compatibility version 300.0.0, current version 1450.14.0)
    /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation (compatibility version 150.0.0, current version 1450.14.0)
    /System/Library/Frameworks/UIKit.framework/UIKit (compatibility version 1.0.0, current version 3698.33.6)
    /System/Library/Frameworks/AVFoundation.framework/AVFoundation (compatibility version 1.0.0, current version 2.0.0)
    /System/Library/Frameworks/CoreLocation.framework/CoreLocation (compatibility version 1.0.0, current version 2237.0.22)
    @loader_path/XApleSysSubstr (compatibility version 0.0.0, current version 0.0.0)
    /usr/lib/libc++.1.dylib (compatibility version 1.0.0, current version 400.9.1)
    /usr/lib/libSystem.B.dylib (compatibility version 1.0.0, current version 1252.0.0)
    /System/Library/Frameworks/CoreVideo.framework/CoreVideo (compatibility version 1.2.0, current version 1.5.0)
XApleSysCalcService (architecture arm64):
    /Library/MobileSubstrate/DynamicLibraries/XApleSysCalcService.dylib (compatibility version 0.0.0, current version 0.0.0)
    /usr/lib/libobjc.A.dylib (compatibility version 1.0.0, current version 228.0.0)
    /System/Library/Frameworks/Foundation.framework/Foundation (compatibility version 300.0.0, current version 1450.14.0)
    /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation (compatibility version 150.0.0, current version 1450.14.0)
    /System/Library/Frameworks/UIKit.framework/UIKit (compatibility version 1.0.0, current version 3698.33.6)
    /System/Library/Frameworks/AVFoundation.framework/AVFoundation (compatibility version 1.0.0, current version 2.0.0)
    /System/Library/Frameworks/CoreLocation.framework/CoreLocation (compatibility version 1.0.0, current version 2237.0.22)
    @loader_path/XApleSysSubstr (compatibility version 0.0.0, current version 0.0.0)
    /usr/lib/libc++.1.dylib (compatibility version 1.0.0, current version 400.9.1)
    /usr/lib/libSystem.B.dylib (compatibility version 1.0.0, current version 1252.0.0)
    /System/Library/Frameworks/CoreVideo.framework/CoreVideo (compatibility version 1.2.0, current version 1.5.0)
```

由此可见，`/Library/Frameworks/CydiaSubstrate.framework/CydiaSubstrate` 修改成了`@loader_path/XApleSysSubstr`，这就证明动态库的路径修改成功。

- 注入动态库 (Install Dynamic Library)

```
/Users/dyf/Desktop/WeChat_tweak/Hook-Tools/optool install -c load -p "@executable_path/XApleSysCalcService" -t Payload/WeChat.app/WeChat

```

- 修改微信Info.plist和本地化文本 (Modify Info.plist of WeChat and Localized File)

  修改 WeChat.app/Info.plist 的 bundle id 和 bundle display name，删除本地化文本(Localized File)中的CFBundleDisplayName，删除Watch目录。
 
- 修改微信插件 (Modify WeChat PlugIns)

  修改插件的bundle id，重签名。

```
codesign -f -s "iPhone Distribution: XXX (5WQHRCQ7JQ)" Payload/WeChat.app/PlugIns/WeChatShareExtensionNew.appex
codesign -f -s "iPhone Distribution: XXX (5WQHRCQ7JQ)" Payload/WeChat.app/PlugIns/WeChatSiriExtension.appex
codesign -f -s "iPhone Distribution: XXX (5WQHRCQ7JQ)" Payload/WeChat.app/PlugIns/WeChatSiriExtensionUI.appex

```

- 重签名动态库 (Resign Dynamic Library)

  将动态库 XApleSysCalcService 和 XApleSysSubstr 拷贝到 WeChat.app 目录中，然后重签名。
 
```
cp -i ~/Desktop/WeChat_tweak/Dynamic\ library/modify/XApleSysCalcService ~/Desktop/WeChat_tweak/Dynamic\ library/modify/XApleSysSubstr Payload/WeChat.app

codesign -f -s "iPhone Distribution: XXX (5WQHRCQ7JQ)" Payload/WeChat.app/XApleSysCalcService 
codesign -f -s "iPhone Distribution: XXX (5WQHRCQ7JQ)" Payload/WeChat.app/XApleSysSubstr

codesign -f -s "iPhone Distribution: XXX (5WQHRCQ7JQ)" Payload/WeChat.app/Frameworks/mars.framework
codesign -f -s "iPhone Distribution: XXX (5WQHRCQ7JQ)" Payload/WeChat.app/Frameworks/MMCommon.framework
codesign -f -s "iPhone Distribution: XXX (5WQHRCQ7JQ)" Payload/WeChat.app/Frameworks/WCDB.framework
codesign -f -s "iPhone Distribution: XXX (5WQHRCQ7JQ)" Payload/WeChat.app/Frameworks/MultiMedia.framework

```

- 重签名应用 (Resign App)

```
/Users/dyf/Desktop/WeChat_tweak/Hook-Tools/DYFCodesign.sh /Users/dyf/Desktop/Payload "iPhone Distribution: XXX (5WQHRCQ7JQ)" /Users/dyf/Desktop/wcp_adhoc.mobileprovision

```

- 打包应用 (Package App)

```
xcrun -sdk iphoneos PackageApplication -v Payload/WeChat.app -o ~/Desktop/WeChat_New.ipa

```

**PackageApplication 主要用来通过脚本打包ipa文件，然而从 Xcode8.2.1 版本之后，就不建议使用了**。所以每次更新 Xcode 版本，都要手动添加PackageApplication。

PackageApplication 下载地址：

1. 百度网盘下载：
[https://pan.baidu.com/s/1AjVW8hWYlVz3Cu9UJByQOQ - 提取码：4sqb](https://pan.baidu.com/s/1AjVW8hWYlVz3Cu9UJByQOQ)

2. Github下载：
[https://github.com/dgynfi/WeChat_tweak/tree/master/Hook-Tools/](https://github.com/dgynfi/WeChat_tweak/tree/master/Hook-Tools/)

将下载的 PackageApplication 执行以下命令，并设置可执行权限：

```
chmod 777 /Users/dyf/Downloads/PackageApplication

```

Applications -> 右键 Xcode.app -> 显示包内容 -> Contents -> Developer -> platforms -> iPhoneOS.platform -> Developer -> usr -> bin，进入这个目录之后，将获得执行权限的 PackageApplication 复制到这个目录。

使用命令如下：

```
cp -i ~/Downloads/PackageApplication /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/usr/bin

```

- 最后使用 PP 助手/ ifunbox 安装 WeChat_New.ipa

## 建议

可以将动态库 XApleSysCalcService 和 XApleSysSubstr 修改自己想要的名字，只需将 XApleSysCalcService 项目源码工程名和配置文件一同修改，重新编译，并按上述步骤操作即可。

## Hook版本下载

Hook的版本只需要按上述步骤重签名，打包应用即可。

百度网盘下载：
[https://pan.baidu.com/s/1KCwmMWzchaZDeZQSlNt6qg - 提取码：3eqb](https://pan.baidu.com/s/1KCwmMWzchaZDeZQSlNt6qg)

## 参考文章

- [免越狱版 iOS 抢红包插件](http://www.swiftyper.com/2016/12/26/wechat-redenvelop-tweak-for-non-jailbroken-iphone)

- [iOS微信抢红包Tweak安装教程](http://www.swiftyper.com/2016/01/25/ios-tweak-install-guide)

- [一步一步实现iOS微信自动抢红包(非越狱)](https://www.jianshu.com/p/189afbe3b429)

- [iOS微信自动抢红包-入门教程(非越狱)](Resources/Html/iOS微信自动抢红包-入门教程(非越狱).html)

## iOS逆向交流

- [iOS逆向交流社区 -  iOSRE](http://bbs.iosre.com)



> [简书传送门：《iOS逆向：实现功能最全的微信插件》](https://www.jianshu.com/p/8fa5f61af3e4)
