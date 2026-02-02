//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface CommonReddotSyncManagerCpp
{
}

+ (id)sharedInstance;
- (void)removeReddotListener:(id)arg1;
- (void)addReddotListener:(id)arg1;
- (void)removeReddotPathListener:(id)arg1 listener:(id)arg2;
- (void)addReddotPathListener:(id)arg1 listener:(id)arg2;
- (void)sync:(unsigned int)arg1 request:(id)arg2;
- (void)doSync:(unsigned int)arg1 syncScene:(int)arg2;
- (void)onEnterBiz:(unsigned int)arg1;
- (void)onReddotReplaced:(unsigned int)arg1;
- (void)onReddotChanged:(id)arg1;
- (void)onAppForeground;
- (void)onActionNotify:(unsigned long long)arg1 bizType:(unsigned long long)arg2 recvData:(id)arg3;
- (void)onNotifyReceived:(unsigned long long)arg1 recvData:(id)arg2;
- (void)removeService:(unsigned int)arg1;
- (void)initService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

