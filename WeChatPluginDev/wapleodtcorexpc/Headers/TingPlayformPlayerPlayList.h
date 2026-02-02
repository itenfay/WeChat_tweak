//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol TingPlayListListener, TingPlayTaskClient;

@interface TingPlayformPlayerPlayList : NSObject
{
    id <TingPlayListListener> _listListener;
    id <TingPlayTaskClient> _weakProxy;
}

+ (id)taskService;
+ (_Bool)hasPlayingPlayList;
- (void).cxx_destruct;
@property(retain, nonatomic) id <TingPlayTaskClient> weakProxy; // @synthesize weakProxy=_weakProxy;
@property(nonatomic) __weak id <TingPlayListListener> listListener; // @synthesize listListener=_listListener;
- (void)onPlayTaskServiceRefresh:(id)arg1;
- (void)onPreloadDone:(unsigned long long)arg1;
- (void)onListMd5Changed:(id)arg1 newMd5:(id)arg2;
- (void)onPlayTaskServiceTapeItemUpdated:(id)arg1;
- (void)onPlayTaskServiceTingItemUpdated:(id)arg1 newItem:(id)arg2;
- (void)onUpdate:(int)arg1 item:(id)arg2;
- (void)onLoadMore:(id)arg1;
- (void)onLoad:(id)arg1;
- (void)onLoadMoreWithDirection:(id)arg1 direction:(int)arg2;
- (void)onReloadItems:(id)arg1;
- (void)applyListListener:(id)arg1;
- (void)dealloc;
- (id)getItems;
- (_Bool)hasMore;
- (void)loadMore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

