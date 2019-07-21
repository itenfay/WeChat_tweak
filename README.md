[如果你觉得能帮助到你，请给一颗小星星。谢谢！(If you think it can help you, please give it a star. Thanks!)](https://github.com/dgynfi/WeChat_tweak)

[![License MIT](https://img.shields.io/badge/license-MIT-green.svg?style=flat)](LICENSE)&nbsp;

## 技术交流群(群号:155353383) 

欢迎加入技术交流群，一起探讨技术问题。<br />
![](https://github.com/dgynfi/WeChat_tweak/raw/master/images/qq155353383.jpg)

## WeChat_tweak

 iOS 版功能较全的微信插件，具备抢红包，修改微信运动步数，伪定位（朋友圈和附近的人），屏蔽消息和群消息，过滤群，防撤回消息和信息内容页的背景透明等功能。

## 免责声明

- 本文所有纯属个人娱乐学习用，相关技术仅用于学习交流，请勿用于非法目的，不得有其他任何商业用途！！！
- 外挂有风险，使用需谨慎。
- 当使用本插件时，请使用者自行承担各种状况，包括但不限于“禁用红包功能”以及“微信封号”。

## tweak

- 何谓 tweak ?

tweak 定义是：对复杂的系统—通常是电子设备—进行微调或修改来增强其功能。而在 iOS 当中，tweak 是指那些能够增强其它进程功能的 dylib。可以将 tweak 理解为一个外挂，只不过这个外挂是以动态链接库的方式注入到目标应用当中。我们已经很了解外挂就是用来作一些原本的应用无法做到的事情。

## 安装 theos

theos 是一个越狱开发工具包，它可以生成 iOS 越狱APP以及tweak等程序的框架，并提供makefile来编译、打包和安装。

- 从 Github 下载 theos ，打开命令行，进行如下操作：
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

- [Dynamic library](Dynamic%20library) - dylib 目录 (Raw Library) 和 modify 目录 (Modified Library)
- [Hook-Tools](Hook-Tools) - Hook常用工具
- [Resources](Resources) - Icon 目录 (带抢红包的Icon) 和 wav 目录 (音频文件)
- [WeChatPluginDev](WeChatPluginDev) - 微信插件源码开发

## 获取砸壳版本的微信

- 直接在 PP 助手或爱思助手下载

[链接: https://pan.baidu.com/s/1Hx3qCxJm4qIUVi1fN3-xpQ - 提取码: 9vd8](https://pan.baidu.com/s/1Hx3qCxJm4qIUVi1fN3-xpQ)

- 使用 Clutch 越狱手机上的应用进行砸壳

将 Cluth 仓库 clone 到本地
```
$ git clone https://github.com/KJCracks/Clutch
$ cd Clutch
```

使用 Xcode 进行构建，得到可执行文件
```
$ xcodebuild -project Clutch.xcodeproj -configuration Release ARCHS="armv7s arm64" build
```

将可执行文件 clutch 拷贝到手机上
```
$ scp Clutch/clutch root@<your.device.ip>:/usr/bin/
```

先 ssh 到越狱手机上，然后查看当前安装的应用
```
$ ssh root@<your.device.ip>
$ clutch -i

# Installed apps:
# 1: WeChat <com.tencent.xin>
# 2: DingTalk <com.laiwang.DingTalk>
# 3: 喜马拉雅FM（听书社区）电台有声小说相声英语 <com.gemd.iting>
```

开始砸壳
```
$ clutch -d com.tencent.xin

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
$ cd /Users/dyf/Desktop/XApleSysCalcService
$ make
$ cp .theos/obj/debug/XApleSysCalcService.dylib ~/Desktop 

# 直接打开目录，拷贝或拖动dylib库至桌面
# $ open .theos/obj/debug/
```

- 移除架构 (Remove Architecture) 

```
$ lipo libsubstrate.dylib -remove armv6 -output ./libsubstrate.dylib
$ lipo -info libsubstrate.dylib
```

- 改变库的路径 (Change Library Path)

```
$ otool -L XApleSysCalcService
$ install_name_tool -change /Library/Frameworks/CydiaSubstrate.framework/CydiaSubstrate @loader_path/XApleSysSubstr XApleSysCalcService 
```

- 写入执行文件路径 (Write Executable Path)

```
$ /Users/dyf/Documents/Wks/Dev/WeChat_tweak/Hook-Tools/optool install -c load -p "@executable_path/XApleSysCalcService" -t ./WeChat
```

- Modify Info.plist of WeChat and Localized File

修改 WeChat.app/Info.plist 的 bundle id 和 bundle display name，本地化文本(Localized File)的CFBundleDisplayName，删除Watch目录。
 
- 修改微信插件 (Modify WeChat PlugIns)

修改插件的bundle id，重签名。

```
$ codesign -f -s "iPhone Distribution: XinQi Lee (5WQHRCQ7JQ)" Payload/WeChat.app/PlugIns/WeChatShareExtensionNew.appex
$ codesign -f -s "iPhone Distribution: XinQi Lee (5WQHRCQ7JQ)" Payload/WeChat.app/PlugIns/WeChatSiriExtension.appex
$ codesign -f -s "iPhone Distribution: XinQi Lee (5WQHRCQ7JQ)" Payload/WeChat.app/PlugIns/WeChatSiriExtensionUI.appex
```

- 重签名动态库 (Resign Dynamic Library)

```
$ codesign -f -s "iPhone Distribution: XinQi Lee (5WQHRCQ7JQ)" Payload/WeChat.app/Frameworks/mars.framework
$ codesign -f -s "iPhone Distribution: XinQi Lee (5WQHRCQ7JQ)" Payload/WeChat.app/Frameworks/MMCommon.framework
$ codesign -f -s "iPhone Distribution: XinQi Lee (5WQHRCQ7JQ)" Payload/WeChat.app/Frameworks/WCDB.framework
$ codesign -f -s "iPhone Distribution: XinQi Lee (5WQHRCQ7JQ)" Payload/WeChat.app/Frameworks/MultiMedia.framework
$ codesign -f -s "iPhone Distribution: XinQi Lee (5WQHRCQ7JQ)" Payload/WeChat.app/XApleSysCalcService 
$ codesign -f -s "iPhone Distribution: XinQi Lee (5WQHRCQ7JQ)" Payload/WeChat.app/XApleSysSubstr
```

- 重签名应用 (Resign app)

```
$ ./DYFCodesign.sh /Users/dyf/Desktop/Payload "iPhone Distribution: XinQi Lee (5WQHRCQ7JQ)" /Users/dyf/Desktop/wcp_adhoc.mobileprovision
```

- 打包应用 (Package app for Xcode7)

```
$ xcrun -sdk iphoneos PackageApplication -v Payload/WeChat.app -o ~/Desktop/WeChat_New.ipa
```

## 致谢

- [iOS版微信抢红包插件 - buginux](https://github.com/buginux/WeChatRedEnvelop)
    - [iOS微信抢红包Tweak安装教程](http://www.swiftyper.com/2016/01/25/ios-tweak-install-guide/)
    - [免越狱版 iOS 抢红包插件](http://www.swiftyper.com/2016/12/26/wechat-redenvelop-tweak-for-non-jailbroken-iphone/)
    
- [手把手教你制作一款iOS越狱App - jackrex](https://github.com/jackrex/FakeWeChatLoc)

- [iOS逆向交流社区 -  iOSRE](http://bbs.iosre.com)
