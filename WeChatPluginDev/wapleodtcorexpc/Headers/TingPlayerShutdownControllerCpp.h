//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingPlayerShutdownControllerCpp
{
}

- (void)onPlayingTaskChanged:(id)arg1;
- (void)removeShutdownListener:(id)arg1;
- (void)addShutdownListener:(id)arg1;
- (void)setShutdown:(int)arg1 minLater:(unsigned long long)arg2;
- (unsigned long long)getShutdownTargetTimeMs;
- (unsigned long long)getShutdownMinLater;
- (int)getShutdownType;
- (void)setPlayTaskController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

