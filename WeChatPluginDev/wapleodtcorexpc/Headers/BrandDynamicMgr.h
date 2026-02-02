//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BrandDynamicMgr
{
}

- (void)onDynamicCardInfoEvent:(int)arg1 msgId:(unsigned long long)arg2 frameSetName:(id)arg3 frameSetData:(id)arg4;
- (void)onRecFeedsAdServerInfoEvent:(id)arg1;
- (void)onAdServerInfoEvent:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

