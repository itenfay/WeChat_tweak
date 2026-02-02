//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;
@protocol WCDeviceJSApiBatchSearchLogicHelpDelegate;

@interface WCDeviceJSApiBatchSearchLogicHelp
{
    NSString *_brandUserName;
    NSMutableArray *_batchSearchRunningQueue;
    NSMutableArray *_batchWaitingQueue;
    NSMutableArray *_failedSearchedQueue;
    _Bool _batchSearchDeviceRunning;
    id <WCDeviceJSApiBatchSearchLogicHelpDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCDeviceJSApiBatchSearchLogicHelpDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onBatchSearchWCDevice:(id)arg1 Scene:(int)arg2 Error:(int)arg3;
- (id)getRunningDeviceScanExt:(id)arg1;
- (void)forceBatchSearchDevice:(id)arg1;
- (void)checkBatchSearchDeviceWaitingQueue;
- (void)addDevice:(id)arg1;
- (void)removeAllSearchDevice;
- (id)initWithBrandUserName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

