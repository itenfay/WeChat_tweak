//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MagicBrushProfileTrait <NSObject>
+ (_Bool)supportRenderdoc;
- (void)stopGLProfile;
- (void)startGLProfile:(NSString *)arg1;
- (void)stopCaptureFrames:(int)arg1;
- (void)startCaptureFrames:(int)arg1 count:(int)arg2;
- (void)setupFrameCapture:(unsigned long long)arg1;
@end

