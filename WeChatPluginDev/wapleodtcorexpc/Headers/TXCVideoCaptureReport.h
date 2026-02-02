//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol TXCVideoCaptureReportDelegate;

@interface TXCVideoCaptureReport
{
    id <TXCVideoCaptureReportDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TXCVideoCaptureReportDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onScreenSizeChange:(struct CGSize)arg1;
- (void)onCapturerDidResume;
- (void)onCapturerDidPause;
- (void)onCapturerDidStop;
- (void)onCapturerDidStart;
- (void)onCameraInterruptionEnd;
- (void)onCameraInterrupted:(long long)arg1;
- (void)onCameraStateChanged:(id)arg1 isConnected:(_Bool)arg2;
- (void)onProcessFrame:(id)arg1 isFirstFrame:(_Bool)arg2;
- (void)onTickLog:(long long)arg1 inDuration:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

