//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVCaptureConnection, AVCaptureOutput, NSArray;

@protocol AVCaptureMetadataOutputObjectsDelegate <NSObject>

@optional
- (void)captureOutput:(AVCaptureOutput *)arg1 didOutputMetadataObjects:(NSArray *)arg2 fromConnection:(AVCaptureConnection *)arg3;
@end

