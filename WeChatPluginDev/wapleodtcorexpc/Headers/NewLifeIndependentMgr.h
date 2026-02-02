//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLRUCache, NSString;

@interface NewLifeIndependentMgr
{
    MMLRUCache *_localGlobalFavFlagCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLRUCache *localGlobalFavFlagCache; // @synthesize localGlobalFavFlagCache=_localGlobalFavFlagCache;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)onFinderInitSuccessful;
- (id)localGlobalFavFlagForFeedId:(id)arg1;
- (void)updateLocalGlobalFavFlag:(_Bool)arg1 forFavItem:(id)arg2;
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

