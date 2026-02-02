//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface ShakeTvHistoryMgr
{
    _Bool _hadLoadCache;
    NSMutableArray *_shakeTvList;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleOpTvHist:(id)arg1;
- (void)handleShakeTvTempSession:(id)arg1 deeplinkUrl:(id)arg2 currVC:(id)arg3 statScene:(unsigned int)arg4 openLinkScene:(int)arg5;
- (void)clearAllHistory;
- (id)getHistoryTvItemList;
- (void)deleteTvItem:(id)arg1;
- (void)notifyDeleteTvItem:(id)arg1;
- (void)deleteTvItem:(id)arg1 needSaveCache:(_Bool)arg2;
- (void)addTvItem:(id)arg1;
- (id)pathForCache;
- (void)opShakeTvHistory:(unsigned int)arg1 brandUserName:(id)arg2;
- (void)saveHistory;
- (void)tryLoadCache;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

