## WeChat-tweak

iOS版功能最全的微信插件，支持最新版微信，具备自动抢红包，屏蔽消息和群消息，过滤特定的群聊，防止撤回消息，伪定位 (朋友圈和附近的人)，修改微信运动步数和实时取景做聊天页的背景等功能。

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


## QQ群 (ID:614799921)

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/g614799921.jpg" width="30%" />
</div>


## Preview

- 插件设置

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/wcplugin_settings.png" width="30%" />&nbsp; 
<img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/wcplugin_xwtx1.png" width="30%" />&nbsp; 
<img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/wcplugin_xwtx2.png" width="30%" />
</div>

- 自动抢红包

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/wcplugin_redenv.gif" width="30%" />
</div>

- 屏蔽消息

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/wcplugin_pbqxx.png" width="30%" />&nbsp; 
<img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/wcplugin_pbxx.png" width="30%" />
</div>

- 伪定位

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/fake_location.png" width="30%" />
</div>

- 防止撤回消息

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/prevent_msg_revoc.png" width="30%" />
</div>


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
    - [ios-app-signer](https://github.com/itenfay/OpenSource#MacOS) - 打包 ipa 与重签名图形化工具。
    - iOSOpenDev - Xcode 增强工具，通过它生成用于注入的 dylib 库。建议用 theos 编译 tweak 项目生成注入的 dylib 库。
- [Resources](Resources) - AppIcon 目录 (带抢红包的Icon) 和 Audios 目录 (音频文件)。。
- [WeChatPluginDev](WeChatPluginDev/wapleodtcorexpc) - 微信插件 tweak 源码开发。


## 开发

喜欢开发学习的同学请移步[Here](https://github.com/itenfay/WeChat_tweak/blob/master/README-dev.md)。


## 解压 ipa

解压 ipa ==> [Here](https://github.com/itenfay/WeChat_tweak/blob/master/README-dev.md#解压-ipa)


## 修改 app 配置

- 进入 WeChat 目录

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/show_wechatapp_dir.png" width="60%" />
</div>

> 注：右键 WeChat.app ，选择显示包内容，进入 WeChat 目录。

- 找出 Info.plist 文件

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/found_Info.plist.png" width="60%" />
</div>

双击，默认 Xcode 打开，修改 Info.plist 中的 Bundle display name 和 Bundle identifier，将 WeChatBundleVersion 的 Value 修改成 Bundle version 的 Value，将 URL types -> URL identifier 修改成新的 Bundle identifier，删除 build_time, by, path, rev, tag, uuid, ver 等 Key。

- 删除 PlugIns 和 Watch 目录中的文件

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/del_files.png" width="60%" />
</div>

- 删除 _CFBundleDisplayName

删除  zh_CN.lproj  InfoPlist.strings  _CFBundleDisplayName  <br />
删除  zh_HK.lproj  InfoPlist.strings  _CFBundleDisplayName  <br />
删除  zh_TW.lproj  InfoPlist.strings  _CFBundleDisplayName  <br />
删除  en.lproj     InfoPlist.strings  _CFBundleDisplayName  <br />

- 删除 Entitlements

删除  Entitlements_for_appstore.plist  <br />
删除  Entitlements_for_ext.plist  <br />
删除  Entitlements_for_jailbreak.plist  <br />
删除  Entitlements_wc_for_ext.plist  <br />
删除  Entitlements_wc.plist  <br />
删除  Entitlements_wx_for_ext.plist  <br />
删除  Entitlements_wx.plist  <br />


## 获取动态库

- 使用自己编译完成的动态库

- 已编译完成的动态库下载 ==> [Here](Dynamic%20library)


## 重签名动态库

打开钥匙串访问

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/keychain_access.png" width="20%" />
</div>

点击登录 -> 我的证书，找出要签名的证书，右击显示简介，找到常用名称，然后拷贝后面的字符串。

执行重签名 (Resign Dynamic Libraries) ：

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


## 重签名应用

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

执行重签名应用 (Resign app) ：

```
# 进入桌面，确保当前在桌面上操作
cd ~/Desktop/

./WeChat_tweak/Hook-Tools/DYFCodesign Payload/ "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" wcpl_adhoc.mobileprovision 
# /Users/xxx/Desktop/Payload/WeChat.app: replacing existing signature
```


## 打包应用

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

[https://github.com/itenfay/WeChat_tweak/tree/master/Hook-Tools/](https://github.com/itenfay/WeChat_tweak/tree/master/Hook-Tools/)

将下载的 **PackageApplication** 执行以下命令，并设置可执行权限：

```
chmod 777 ~/Downloads/PackageApplication
```

Applications -> 右键 Xcode.app -> 显示包内容 -> Contents -> Developer -> platforms -> iPhoneOS.platform -> Developer -> usr -> bin，进入这个目录之后，将设置了可执行权限的 **PackageApplication** 复制到这个目录。

或者使用命令如下：

```
cp ~/Downloads/PackageApplication /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/usr/bin
```

执行打包 (Package app) ：

```
xcrun -sdk iphoneos PackageApplication -v Payload/WeChat.app -o ~/Desktop/WeChat_705_New.ipa
```


## 安装 ipa 

1. 最后使用 **爱思助手/ifunbox** 安装 WeChat_705_New.ipa 。

2. 使用 Xcode -> Window -> Devices and Simulators ，右击自己的设备，选择 Connect via IP Adress...，输入设备的IP，然后点击 Connect ，最后在 INSTALLED APPS 处点击 “+” 号，然后选择 WeChat_705_New.ipa ，点击 Open ，然后漫长地等待安装，大约1 ~ 3分钟。


## 💰打赏作者

如果觉得这个插件对你有帮助 (帮你抢到了比之前更多的红包，帮你发在国外高大尚的朋友圈，帮你屏蔽了厌烦并叨扰的人和群，帮你不再错过任何消息，...) ，那么不妨请我喝杯**咖啡☕**。

<div align=left>
&emsp; <img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/wechat_paymentcode.jpg" width="25%" />&nbsp;&nbsp;
<img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/wechat_apprcode.jpg" width="35%" />&nbsp;&nbsp;
<img src="https://github.com/itenfay/WeChat_tweak/raw/master/images/alipay_paymentcode.jpg" width="25%" />
</div>


## Hook 版本下载

- 百度网盘下载：

[https://pan.baidu.com/s/1KCwmMWzchaZDeZQSlNt6qg - 提取码：3eqb](https://pan.baidu.com/s/1KCwmMWzchaZDeZQSlNt6qg)

Hook 的版本只需要按照[解压 ipa](#解压-ipa)，[重签名应用](#重签名应用)，[打包应用](#打包应用)，[安装 ipa](#安装-ipa)等步骤执行即可。


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


## 免责声明

- 本文所有纯属个人娱乐学习用，相关技术仅用于学习交流，请勿用于非法目的，不得有其他任何商业用途！！！
- 外挂有风险，使用需谨慎。
- 当使用本插件时，请使用者自行承担各种状况，包括但不限于“禁用红包功能”以及“微信封号”。


## 我的简书

- [iOS逆向学习：免越狱给微信添加新功能](https://www.jianshu.com/p/8fa5f61af3e4)


## 参考文章

- [移动App入侵与逆向破解技术－iOS篇](https://mp.weixin.qq.com/s?__biz=MzA3NTYzODYzMg==&mid=2653577384&idx=1&sn=b44a9c9651bf09c5bea7e0337031c53c&scene=0#wechat_redirect)

- [蒸米的文章 - iOS冰与火之歌系列](https://github.com/zhengmin1989/MyArticles)

- [iOS应用逆向工程(第2版)](https://www.amazon.cn/gp/product/B00VFDVY7E/ref=as_li_tf_tl?ie=UTF8&camp=536&creative=3200&creativeASIN=B00VFDVY7E&linkCode=as2&tag=buginux-23)


## iOS逆向交流

- [iOS逆向交流社区 -  iOSRE](http://bbs.iosre.com)


## 欢迎反馈

如果你遇到任何问题被卡住，请创建一个问题，我很乐意帮助你。
