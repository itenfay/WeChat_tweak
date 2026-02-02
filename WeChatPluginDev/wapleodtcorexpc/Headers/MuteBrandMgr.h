//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface MuteBrandMgr
{
    NSArray *_openBrandList;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onProfileChange;
- (void)onFailOpenUseBizMuteFlag;
- (void)requestUseBizMuteFlag;
- (void)updateUnreadCount:(_Bool)arg1;
- (void)updateUnreadCount;
- (void)openUseBizMuteFlagWith:(id)arg1;
- (_Bool)useBizMuteFlag;
- (void)showGuideView:(id)arg1;
- (id)init;
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

