//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TXCGlFrameBuffer, TXCVideoFrame;

@protocol TXICustomProcessConverter <NSObject>
- (TXCVideoFrame *)outputVideoFrameFromDstVideoFrame:(TXCVideoFrame *)arg1 withTexture:(TXCGlFrameBuffer *)arg2;
- (TXCVideoFrame *)dstVideoFrameFromTexture:(TXCGlFrameBuffer *)arg1 pts:(unsigned int)arg2;
- (TXCVideoFrame *)srcVideoFrameFromVideoFrame:(TXCVideoFrame *)arg1;
- (_Bool)needsYuvInput;
@end

