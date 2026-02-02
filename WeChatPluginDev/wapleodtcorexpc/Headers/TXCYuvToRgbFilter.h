//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class TXCFramebufferDrawer, TXCGlFrameBuffer;
@protocol TXIGlContext;

@interface TXCYuvToRgbFilter : NSObject
{
    id <TXIGlContext> _context;
    TXCGlFrameBuffer *_frameBuffer;
    TXCFramebufferDrawer *_framebufferDrawer;
}

@property(retain, nonatomic) TXCFramebufferDrawer *framebufferDrawer; // @synthesize framebufferDrawer=_framebufferDrawer;
@property(retain, nonatomic) TXCGlFrameBuffer *frameBuffer; // @synthesize frameBuffer=_frameBuffer;
@property(readonly, nonatomic) id <TXIGlContext> context; // @synthesize context=_context;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (_Bool)createGlObjectsIfNeeded;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end
