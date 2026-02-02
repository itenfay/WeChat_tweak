//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BrandTimelineSettingMgr
{
    unsigned int _timelineSettingInfoControlBit;
}

@property(nonatomic) unsigned int timelineSettingInfoControlBit; // @synthesize timelineSettingInfoControlBit=_timelineSettingInfoControlBit;
- (void)clearAllData;
- (void)initData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (_Bool)creationCenterNotifySwitch;
- (void)runSetCgi:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (void)setHeadForPaySwitch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setFinderRecommendSwitch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setCreationCenterNotifySwitch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPersonalRecommendSwitch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getTimelineSetting:(CDUnknownBlockType)arg1;
- (unsigned int)getTimelineSettingInfoControlBit;
- (_Bool)shouldShowBrandTimelineSettingEntry;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

