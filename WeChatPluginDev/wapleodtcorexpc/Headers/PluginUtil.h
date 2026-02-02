//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PluginUtil : NSObject
{
}

+ (_Bool)isMinishopPluginSwitchEnabled;
+ (void)updatePluginHeadImageWithUserName:(id)arg1;
+ (_Bool)isInMyContactList:(long long)arg1;
+ (id)getWenxinAliasName;
+ (id)getOfficialLocalizedNickNameWithType:(long long)arg1;
+ (id)getOfficialUserNameWithType:(long long)arg1;
+ (_Bool)isOfficialExpectWeixinUserName:(id)arg1;
+ (_Bool)isOfficialExpectWeixinContact:(id)arg1;
+ (_Bool)isOfficialUserName:(id)arg1;
+ (void)closePlugin:(long long)arg1 sync:(_Bool)arg2;
+ (void)openPlugin:(long long)arg1 sync:(_Bool)arg2;
+ (unsigned int)getAlbumPrivacyOption;
+ (void)setAlbumPrivacyOption:(unsigned int)arg1;
+ (unsigned int)clearLBSPluginData;
+ (unsigned int)closePushMailPlugin;
+ (unsigned int)openPushMailPlugin:(id)arg1;
+ (unsigned int)opPushMailPlugin:(unsigned int)arg1 pwd:(id)arg2;
+ (_Bool)isPluginShow:(long long)arg1;
+ (void)newGenericFunctionSwitch:(unsigned int)arg1 statusBit:(unsigned int)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4;
+ (void)genericFunctionSwitch:(unsigned int)arg1 statusBit:(unsigned int)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4;
+ (_Bool)isPluginOpened:(long long)arg1;
+ (_Bool)isOfficialContact:(id)arg1;
+ (id)getPluginLocalizedNickName:(long long)arg1;
+ (id)getPluginUserName:(long long)arg1;
+ (long long)getPluginUserNameType:(id)arg1;
+ (long long)getPluginContactType:(id)arg1;
+ (id)getPluginContact:(long long)arg1;
+ (void)refreshLocalizedName;
+ (_Bool)isPluginUserName:(id)arg1;
+ (void)clearPluginData:(long long)arg1;
+ (void)unInstallPlugin:(long long)arg1;
+ (void)installPlugin:(long long)arg1;
+ (void)unInstallPlugin:(long long)arg1 sync:(_Bool)arg2;
+ (void)installPlugin:(long long)arg1 sync:(_Bool)arg2;
+ (_Bool)isUseSvrHeadImagePluginContact:(id)arg1;
+ (_Bool)isBrandContactPluginType:(long long)arg1;
+ (_Bool)isPluginPresentedContact:(id)arg1;
+ (_Bool)isPluginInstalled:(long long)arg1;
+ (unsigned int)pluginTypeToUnInstallBit:(long long)arg1;

@end

