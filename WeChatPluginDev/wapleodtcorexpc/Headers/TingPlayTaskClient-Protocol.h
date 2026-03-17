//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSArray, NSData, NSString, TingItem, TingListSourceRefreshContext, TingTapeItem;

@protocol TingPlayTaskClient <NSObject, UnitRCBaseProtocol>
- (void)onPlayTaskServiceRefresh:(TingListSourceRefreshContext *)arg1;
- (void)onLoadingStatusChanged:(int)arg1 loading:(_Bool)arg2;
- (void)onLoadError:(int)arg1 reload:(_Bool)arg2 errorCode:(int)arg3 errorMessage:(NSString *)arg4;
- (void)onPreloadDone:(unsigned long long)arg1;
- (void)onListMd5Changed:(NSString *)arg1 newMd5:(NSString *)arg2;
- (void)onLoadMoreWithDirection:(NSArray *)arg1 direction:(int)arg2;
- (void)onReloadItems:(NSArray *)arg1;
- (void)onPlayTaskServiceTapeItemUpdated:(TingTapeItem *)arg1;
- (void)onPlayTaskServiceTingItemUpdated:(TingItem *)arg1 newItem:(TingItem *)arg2;
- (void)onUpdate:(int)arg1 item:(NSData *)arg2;
- (void)onLoadMore:(NSArray *)arg1;
- (void)onLoad:(NSArray *)arg1;
@end

