//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVCaptureFileOutput, NSArray, NSError, NSURL;

@protocol AVCaptureFileOutputRecordingDelegate <NSObject>
- (void)captureOutput:(AVCaptureFileOutput *)arg1 didFinishRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3 error:(NSError *)arg4;

@optional
- (void)captureOutput:(AVCaptureFileOutput *)arg1 willFinishRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3 error:(NSError *)arg4;
- (void)captureOutput:(AVCaptureFileOutput *)arg1 didResumeRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3;
- (void)captureOutput:(AVCaptureFileOutput *)arg1 didPauseRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3;
- (void)captureOutput:(AVCaptureFileOutput *)arg1 didStartRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3;
@end

