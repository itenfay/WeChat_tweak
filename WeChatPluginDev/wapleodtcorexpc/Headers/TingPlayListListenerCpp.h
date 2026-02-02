//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingPlayListListenerCpp
{
}

- (void)onPlayListRefresh:(id)arg1;
- (void)onLoadingStatusChanged:(int)arg1 loading:(_Bool)arg2;
- (void)onRecommendListSourceChanged:(id)arg1;
- (void)onPlayListTingItemUpdated:(id)arg1 newItem:(id)arg2;
- (void)onPlayListRecommendListSourceDisabled:(id)arg1;
- (void)onPlayListRecommendListSourceAvailable:(id)arg1 recommendListSource:(id)arg2;
- (void)onPlayListLoadMoreItems:(id)arg1 direction:(int)arg2;
- (void)onPlayListReloadItems:(id)arg1;
- (void)onPlayListTapeItemUpdated:(id)arg1;
- (void)onPlayListLoadMore:(id)arg1;
- (void)onPlayListLoad:(id)arg1;
- (void)onPlaylistChanged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

