//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DeviceRankSetting, NSString;

@interface DeviceRankSettingMgr
{
    DeviceRankSetting *_rankSetting;
    _Bool bSettingChanged;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)UpdateSettingTOSVR;
- (void)UpdateSettingFromSVR;
- (void)SetTakePartIn:(_Bool)arg1;
- (_Bool)NeedTakePartIn;
- (void)SetLikeNotify:(_Bool)arg1;
- (_Bool)NeedLikeNotify;
- (void)SetRankNotify:(_Bool)arg1;
- (_Bool)NeedRankNotify;
- (void)SetRecordDataNotify:(_Bool)arg1;
- (_Bool)NeedRecordDataNotify;
- (void)saveRankSetting;
- (void)loadRankSetting;
- (id)getRankSettingFilePath;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

