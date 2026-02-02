//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMViewCapture;

@protocol MMViewCaptureDelegate <NSObject>

@optional
- (void)viewCapture:(MMViewCapture *)arg1 didCaptureSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 orientation:(long long)arg3;
- (void)viewCapture:(MMViewCapture *)arg1 didCaptureImageContext:(struct CGContext *)arg2 orientation:(long long)arg3;
@end

