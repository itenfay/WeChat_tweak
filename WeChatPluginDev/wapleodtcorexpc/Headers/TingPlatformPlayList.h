//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TingTapeItem;
@protocol TingPlayListListener, TingPlayTaskClient, TingPlayTaskService;

@interface TingPlatformPlayList : NSObject
{
    TingTapeItem *_tapeItem;
    id <TingPlayTaskService> _taskService;
    id <TingPlayListListener> _listListener;
    id <TingPlayTaskClient> _weakProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TingPlayTaskClient> weakProxy; // @synthesize weakProxy=_weakProxy;
@property(nonatomic) __weak id <TingPlayListListener> listListener; // @synthesize listListener=_listListener;
@property(retain, nonatomic) id <TingPlayTaskService> taskService; // @synthesize taskService=_taskService;
@property(retain, nonatomic) TingTapeItem *tapeItem; // @synthesize tapeItem=_tapeItem;
- (void)onPreloadDone:(unsigned long long)arg1;
- (void)onListMd5Changed:(id)arg1 newMd5:(id)arg2;
- (void)onPlayTaskServiceTapeItemUpdated:(id)arg1;
- (void)onPlayTaskServiceTingItemUpdated:(id)arg1 newItem:(id)arg2;
- (void)onUpdate:(int)arg1 item:(id)arg2;
- (void)onLoadMore:(id)arg1;
- (void)onLoad:(id)arg1;
- (void)onLoadMoreWithDirection:(id)arg1 direction:(int)arg2;
- (void)onReloadItems:(id)arg1;
- (id)getItems;
- (_Bool)hasMore;
- (void)loadMore;
- (void)applyListListener:(id)arg1;
- (void)dealloc;
- (id)initWithTapeItem:(id)arg1 scene:(int)arg2 config:(id)arg3;
- (id)initWithTapeItem:(id)arg1 scene:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

