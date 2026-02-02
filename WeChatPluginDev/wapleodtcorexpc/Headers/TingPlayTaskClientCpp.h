//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingPlayTaskClientCpp
{
}

- (void)onPlayTaskServiceRefresh:(id)arg1;
- (void)onLoadingStatusChanged:(int)arg1 loading:(_Bool)arg2;
- (void)onLoadError:(int)arg1 reload:(_Bool)arg2 errorCode:(int)arg3 errorMessage:(id)arg4;
- (void)onPreloadDone:(unsigned long long)arg1;
- (void)onListMd5Changed:(id)arg1 newMd5:(id)arg2;
- (void)onLoadMoreWithDirection:(id)arg1 direction:(int)arg2;
- (void)onReloadItems:(id)arg1;
- (void)onPlayTaskServiceTapeItemUpdated:(id)arg1;
- (void)onPlayTaskServiceTingItemUpdated:(id)arg1 newItem:(id)arg2;
- (void)onUpdate:(int)arg1 item:(id)arg2;
- (void)onLoadMore:(id)arg1;
- (void)onLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

