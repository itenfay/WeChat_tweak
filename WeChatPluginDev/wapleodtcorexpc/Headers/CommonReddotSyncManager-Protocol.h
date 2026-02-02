//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class CommonReddotSyncRequest, NSArray, NSData, NSString;
@protocol CommonReddotEventListener;

@protocol CommonReddotSyncManager <NSObject, UnitRCBaseProtocol>
- (void)removeReddotListener:(id <CommonReddotEventListener>)arg1;
- (void)addReddotListener:(id <CommonReddotEventListener>)arg1;
- (void)removeReddotPathListener:(NSString *)arg1 listener:(id <CommonReddotEventListener>)arg2;
- (void)addReddotPathListener:(NSString *)arg1 listener:(id <CommonReddotEventListener>)arg2;
- (void)sync:(unsigned int)arg1 request:(CommonReddotSyncRequest *)arg2;
- (void)doSync:(unsigned int)arg1 syncScene:(int)arg2;
- (void)onEnterBiz:(unsigned int)arg1;
- (void)onReddotReplaced:(unsigned int)arg1;
- (void)onReddotChanged:(NSString *)arg1;
- (void)onAppForeground;
- (void)onActionNotify:(unsigned long long)arg1 bizType:(unsigned long long)arg2 recvData:(NSData *)arg3;
- (void)onNotifyReceived:(unsigned long long)arg1 recvData:(NSData *)arg2;
- (void)removeService:(unsigned int)arg1;
- (void)initService:(NSArray *)arg1;
@end

