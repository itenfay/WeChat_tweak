//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "TXICameraCapturerInterfaceDelegate-Protocol.h"
#import "TXIScreenCaptureDelegate-Protocol.h"

@class TXCVideoFrame;

@protocol TXCVideoCaptureReportDelegate <TXICameraCapturerInterfaceDelegate, TXIScreenCaptureDelegate>
- (void)onCaptureFrame:(TXCVideoFrame *)arg1;
- (void)onCaptureFirstFrame;
@end

