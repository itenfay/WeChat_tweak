//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TXCCustomProcessBgraNonTextureBasedConverter : NSObject
{
    struct __CVBuffer *_srcPixelBuffer;
    struct __CVBuffer *_dstPixelBuffer;
}

@property(nonatomic) struct __CVBuffer *dstPixelBuffer; // @synthesize dstPixelBuffer=_dstPixelBuffer;
@property(nonatomic) struct __CVBuffer *srcPixelBuffer; // @synthesize srcPixelBuffer=_srcPixelBuffer;
- (struct __CVBuffer *)createBufferIfNeeded:(struct __CVBuffer *)arg1 forSize:(struct CGSize)arg2;
- (id)outputVideoFrameFromDstVideoFrame:(id)arg1 withTexture:(id)arg2;
- (id)dstVideoFrameFromTexture:(id)arg1 pts:(unsigned int)arg2;
- (id)srcVideoFrameFromVideoFrame:(id)arg1;
- (_Bool)needsYuvInput;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

