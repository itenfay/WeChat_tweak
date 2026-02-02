//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface VoipActionInfoObject
{
    _Bool _m_hasClickIgnoreCallOnce;
    _Bool _m_hasClickVoiceMinimizeWithEarMode;
    _Bool _m_hasClickVideoMinimize;
    _Bool _m_hasShowEarDeviceUnPluginTips;
}

+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (id)Instance;
+ (void)initialize;
+ (void)PBArrayAdd_m_hasShowEarDeviceUnPluginTips;
+ (void)PBArrayAdd_m_hasClickVideoMinimize;
+ (void)PBArrayAdd_m_hasClickVoiceMinimizeWithEarMode;
+ (void)PBArrayAdd_m_hasClickIgnoreCallOnce;
@property(nonatomic) _Bool m_hasShowEarDeviceUnPluginTips; // @synthesize m_hasShowEarDeviceUnPluginTips=_m_hasShowEarDeviceUnPluginTips;
@property(nonatomic) _Bool m_hasClickVideoMinimize; // @synthesize m_hasClickVideoMinimize=_m_hasClickVideoMinimize;
@property(nonatomic) _Bool m_hasClickVoiceMinimizeWithEarMode; // @synthesize m_hasClickVoiceMinimizeWithEarMode=_m_hasClickVoiceMinimizeWithEarMode;
@property(nonatomic) _Bool m_hasClickIgnoreCallOnce; // @synthesize m_hasClickIgnoreCallOnce=_m_hasClickIgnoreCallOnce;
- (void)saveToFile;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

