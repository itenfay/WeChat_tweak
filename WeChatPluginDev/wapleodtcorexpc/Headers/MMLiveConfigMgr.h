//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface MMLiveConfigMgr
{
    _Bool _isLiveUIPerfMonitorEnable;
    _Bool _isLiveBackgroundDecodeEnable;
    NSArray *_iphoneExtendIgnoreVCArray;
    NSArray *_ipadExtendIgnoreVCArray;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLiveBackgroundDecodeEnable; // @synthesize isLiveBackgroundDecodeEnable=_isLiveBackgroundDecodeEnable;
@property(nonatomic) _Bool isLiveUIPerfMonitorEnable; // @synthesize isLiveUIPerfMonitorEnable=_isLiveUIPerfMonitorEnable;
@property(retain, nonatomic) NSArray *ipadExtendIgnoreVCArray; // @synthesize ipadExtendIgnoreVCArray=_ipadExtendIgnoreVCArray;
@property(retain, nonatomic) NSArray *iphoneExtendIgnoreVCArray; // @synthesize iphoneExtendIgnoreVCArray=_iphoneExtendIgnoreVCArray;
- (void)onExptItemListChange;
- (_Bool)getLiveBackgroundDecodeSwitch;
- (void)customEventConfigForLiveAudience;
- (void)customEventConfigForLiveAnchor;
- (void)updateLiveBusinessInfoFromJsonString:(id)arg1;
- (void)checkAndUpdateData;
- (void)clearData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

