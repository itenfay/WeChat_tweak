//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TXCGlFrameBuffer, TXCGlProgram, UIImage;
@protocol TXIGlContext;

@interface TXCLookupFilter
{
    _Bool _isGroupLUT;
    _Bool _enableFilter1;
    _Bool _enableFilter2;
    UIImage *_leftLutImage;
    UIImage *_rightLutImage;
    double _leftIntensity;
    double _rightIntensity;
    double _leftRatio;
    id <TXIGlContext> _context;
    TXCGlFrameBuffer *_frameBuffer;
    TXCGlFrameBuffer *_leftLutImageFrameBuffer;
    TXCGlFrameBuffer *_rightLutImageFrameBuffer;
    TXCGlProgram *_program;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableFilter2; // @synthesize enableFilter2=_enableFilter2;
@property(nonatomic) _Bool enableFilter1; // @synthesize enableFilter1=_enableFilter1;
@property(retain, nonatomic) TXCGlProgram *program; // @synthesize program=_program;
@property(retain, nonatomic) TXCGlFrameBuffer *rightLutImageFrameBuffer; // @synthesize rightLutImageFrameBuffer=_rightLutImageFrameBuffer;
@property(retain, nonatomic) TXCGlFrameBuffer *leftLutImageFrameBuffer; // @synthesize leftLutImageFrameBuffer=_leftLutImageFrameBuffer;
@property(retain, nonatomic) TXCGlFrameBuffer *frameBuffer; // @synthesize frameBuffer=_frameBuffer;
@property(readonly, nonatomic) id <TXIGlContext> context; // @synthesize context=_context;
@property(nonatomic) _Bool isGroupLUT; // @synthesize isGroupLUT=_isGroupLUT;
@property(nonatomic) double leftRatio; // @synthesize leftRatio=_leftRatio;
@property(nonatomic) double rightIntensity; // @synthesize rightIntensity=_rightIntensity;
@property(nonatomic) double leftIntensity; // @synthesize leftIntensity=_leftIntensity;
@property(readonly, nonatomic) UIImage *rightLutImage; // @synthesize rightLutImage=_rightLutImage;
@property(readonly, nonatomic) UIImage *leftLutImage; // @synthesize leftLutImage=_leftLutImage;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (_Bool)createGlObjectsIfNeeded;
- (void)dealloc;
- (id)initWithContext:(id)arg1 leftImage:(id)arg2 rightImage:(id)arg3 leftRatio:(float)arg4;
- (id)initWithContext:(id)arg1 image:(id)arg2;

@end

