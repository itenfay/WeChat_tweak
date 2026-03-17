//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData, NSString, TingPlayerContext, TingPlayerEventContext, TingReportContext;
@protocol TingPlayTaskService;

@protocol TingPlayTaskStateListener <NSObject, UnitRCBaseProtocol>
- (void)onPlayTaskEvent:(int)arg1 currentState:(int)arg2 previousState:(int)arg3 message:(NSString *)arg4;
- (void)onCurrentPlayingListSourceWillChange:(id <TingPlayTaskService>)arg1 nextSource:(id <TingPlayTaskService>)arg2;
- (void)onTingPlayTaskReportAction:(int)arg1 context:(TingReportContext *)arg2;
- (void)onTingPlayTaskStateChanged:(TingPlayerContext *)arg1 state:(int)arg2 event:(int)arg3 eventContext:(TingPlayerEventContext *)arg4;
- (void)onTingPlayerStateChanged:(TingPlayerContext *)arg1 state:(int)arg2 event:(int)arg3 eventContext:(TingPlayerEventContext *)arg4;
- (void)onTingPlayTaskPlayingContextUpdated:(TingPlayerContext *)arg1;
- (void)onPlayingItemUpdate:(NSData *)arg1;
- (void)onPlayingIndexChanged:(int)arg1;
- (void)onPlayModeChanged;
- (void)onPlayTaskServiceWillPop:(id <TingPlayTaskService>)arg1;
- (void)onServiceChanged:(id <TingPlayTaskService>)arg1;
@end

