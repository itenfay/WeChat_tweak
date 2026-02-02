//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TXCGlFrameBuffer, TXCGlProgram;
@protocol TXIGlContext;

@interface TXCTransformFilter
{
    id <TXIGlContext> _context;
    TXCGlFrameBuffer *_frameBuffer;
    TXCGlProgram *_program;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCGlProgram *program; // @synthesize program=_program;
@property(retain, nonatomic) TXCGlFrameBuffer *frameBuffer; // @synthesize frameBuffer=_frameBuffer;
@property(readonly, nonatomic) id <TXIGlContext> context; // @synthesize context=_context;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (_Bool)createGlObjectsIfNeeded;
- (id)initWithContext:(id)arg1;

@end

