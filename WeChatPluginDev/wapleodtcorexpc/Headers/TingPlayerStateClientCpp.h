//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingPlayerStateClientCpp
{
}

- (void)onInactivated:(id)arg1 update:(_Bool)arg2;
- (void)onActivated:(id)arg1 taskId:(id)arg2 update:(_Bool)arg3;
- (void)onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)onPlayInfoEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)onPlayEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

