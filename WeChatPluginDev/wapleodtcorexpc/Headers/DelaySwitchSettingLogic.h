//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NotificationBannerDisplayContentSettingOplog;

@interface DelaySwitchSettingLogic
{
    _Bool m_bNeedToSync;
    NotificationBannerDisplayContentSettingOplog *_quickReplyOplog;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NotificationBannerDisplayContentSettingOplog *quickReplyOplog; // @synthesize quickReplyOplog=_quickReplyOplog;
- (void)commitQuickReplySettingChange;
- (void)saveQuickReplyLocalChange;
- (void)setQuickReplyContentSetting:(unsigned int)arg1;
- (void)setQuickReplySwitchOn:(_Bool)arg1;
- (void)setDiscoverEtranceSettingFlagMask:(unsigned long long)arg1 setOpen:(_Bool)arg2;
- (void)CreateSettingExtStautsEventType:(unsigned int)arg1 andValue:(_Bool)arg2 andBitset:(unsigned long long)arg3;
- (void)CreateSettingEventType:(unsigned int)arg1 andValue:(_Bool)arg2 andBitset:(unsigned int)arg3;
- (void)setExtStatus2SwitchInvertedAtServerWithFunctionId:(unsigned int)arg1 statusBit:(unsigned long long)arg2 andSetOpen:(_Bool)arg3;
- (void)setExtStatusSwitchInvertedAtServerWithFunctionId:(unsigned int)arg1 statusBit:(unsigned long long)arg2 andSetClose:(_Bool)arg3;
- (void)discoverEntrancePluginSwitchSetting:(unsigned long long)arg1 andValue:(_Bool)arg2;
- (void)discoverEntranceSwitchSetting:(unsigned long long)arg1 andValue:(_Bool)arg2;
- (void)setWCPaySettingDelaySwitch:(unsigned long long)arg1 clearBitMask:(unsigned long long)arg2;
- (void)setWCPayTransferDelaySwitch:(unsigned long long)arg1;
- (void)processPluginSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)processMessageNotifycationSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)processIndividualPrivacySetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)processContactProfileSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)processChatProfileSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)pluginSwitchSetting:(unsigned long long)arg1 andValue:(_Bool)arg2;
- (void)messageNotifycationSwitchSetting:(unsigned long long)arg1 andValue:(_Bool)arg2;
- (void)individualPrivacySwitchSetting:(unsigned long long)arg1 andValue:(_Bool)arg2;
- (void)contactProfileSwitchSetting:(id)arg1 withType:(unsigned long long)arg2 andValue:(_Bool)arg3;
- (void)chatProfileSwitchSetting:(id)arg1 withType:(unsigned long long)arg2 andValue:(_Bool)arg3;
- (void)commitAllSwitchSetting;
- (void)enterBackground;
- (void)dealloc;
- (id)init;

@end

