//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSArray, TingItem, TingListSourceRefreshContext, TingTapeItem;
@protocol TingPlayList, TingPlayTaskService;

@protocol TingPlayListListener <NSObject, UnitRCBaseProtocol>
- (void)onPlayListRefresh:(TingListSourceRefreshContext *)arg1;
- (void)onLoadingStatusChanged:(int)arg1 loading:(_Bool)arg2;
- (void)onRecommendListSourceChanged:(id <TingPlayTaskService>)arg1;
- (void)onPlayListTingItemUpdated:(TingItem *)arg1 newItem:(TingItem *)arg2;
- (void)onPlayListRecommendListSourceDisabled:(id <TingPlayList>)arg1;
- (void)onPlayListRecommendListSourceAvailable:(id <TingPlayList>)arg1 recommendListSource:(id <TingPlayTaskService>)arg2;
- (void)onPlayListLoadMoreItems:(NSArray *)arg1 direction:(int)arg2;
- (void)onPlayListReloadItems:(NSArray *)arg1;
- (void)onPlayListTapeItemUpdated:(TingTapeItem *)arg1;
- (void)onPlayListLoadMore:(NSArray *)arg1;
- (void)onPlayListLoad:(NSArray *)arg1;
- (void)onPlaylistChanged;

@optional
- (void)onLoadMore:(NSArray *)arg1;
- (void)onReloadItems:(NSArray *)arg1;
@end

