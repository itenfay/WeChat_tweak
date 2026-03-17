//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MagicBrushCVPixelBufferRT;

@protocol MagicBrushCVPixelBufferRTDelegate <NSObject>
- (void)onFrameAvailable:(struct __CVBuffer *)arg1 inRT:(MagicBrushCVPixelBufferRT *)arg2;
@end

