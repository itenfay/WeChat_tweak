//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveAnchorTaskEntranceMgr
{
    int _primarySettingEnrance;
    int _fetchMoneyEnrance;
    int _liveCompleteEnrance;
    int _liveCreateEnrance;
}

+ (void)gotoOperationWebPageFromNav:(id)arg1 urlStr:(id)arg2 webviewReturnBlock:(CDUnknownBlockType)arg3;
+ (void)gotoLiveAnchorTaskWebPageFromNav:(id)arg1 fromScene:(long long)arg2 webviewReturnBlock:(CDUnknownBlockType)arg3;
+ (void)reportForAnchorTaskClick:(long long)arg1;
+ (void)reportForAnchorTaskExpose:(long long)arg1;
@property(nonatomic) int liveCreateEnrance; // @synthesize liveCreateEnrance=_liveCreateEnrance;
@property(nonatomic) int liveCompleteEnrance; // @synthesize liveCompleteEnrance=_liveCompleteEnrance;
@property(nonatomic) int fetchMoneyEnrance; // @synthesize fetchMoneyEnrance=_fetchMoneyEnrance;
@property(nonatomic) int primarySettingEnrance; // @synthesize primarySettingEnrance=_primarySettingEnrance;
- (_Bool)enableShowLiveAnchorTaskEntrance:(long long)arg1;
- (void)onExptItemListChange;
- (_Bool)isEntranceEnableShowAnchorTask:(long long)arg1;
- (void)checkAndUpdateData;
- (void)resetData;
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

