//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface CameraScanService
{
}

- (void)captureSessionInterruptionEnded:(id)arg1;
- (void)captureSessionWasInterrupted:(id)arg1;
- (void)captureSessionDidStopRunning:(id)arg1;
- (void)captureSessionDidStartRunning:(id)arg1;
- (void)captureSessionRuntimeError:(id)arg1;
- (void)unRegisterExtensionAndObserver;
- (void)registerExtensionAndObserver;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

