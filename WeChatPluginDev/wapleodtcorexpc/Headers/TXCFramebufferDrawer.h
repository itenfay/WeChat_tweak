//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TXCGLDrawer, TXCVideoFrameCoords;
@protocol TXIGlContext;

@interface TXCFramebufferDrawer : NSObject
{
    id <TXIGlContext> _context;
    TXCVideoFrameCoords *_coords;
    TXCGLDrawer *_drawer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCGLDrawer *drawer; // @synthesize drawer=_drawer;
@property(readonly, nonatomic) TXCVideoFrameCoords *coords; // @synthesize coords=_coords;
@property(readonly, nonatomic) id <TXIGlContext> context; // @synthesize context=_context;
- (void)redrawCurrentFrame;
- (_Bool)drawTexture:(unsigned int)arg1 width:(double)arg2 height:(double)arg3;
- (_Bool)drawPixelBuffer:(struct __CVBuffer *)arg1;
@property(readonly, nonatomic) struct CGSize imageSize;
- (void)updateDrawerWithFormatIfNeed:(unsigned long long)arg1;
- (unsigned long long)getDrawerTypeWithFormat:(unsigned long long)arg1;
- (id)initWithContext:(id)arg1 coords:(id)arg2 pixelFormat:(unsigned long long)arg3;

@end

