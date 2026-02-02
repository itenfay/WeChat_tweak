//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TXCGlFrameBuffer, TXCGlProgram, UIImage;
@protocol TXIGlContext;

@interface TXCImageBlendFilter
{
    float _vertices[8];
    float _imageTexCoords[8];
    id <TXIGlContext> _context;
    TXCGlFrameBuffer *_imageFrameBuffer;
    TXCGlProgram *_program;
    UIImage *_image;
    double _alpha;
    struct CGRect _imageRect;
}

- (void).cxx_destruct;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) struct CGRect imageRect; // @synthesize imageRect=_imageRect;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) TXCGlProgram *program; // @synthesize program=_program;
@property(retain, nonatomic) TXCGlFrameBuffer *imageFrameBuffer; // @synthesize imageFrameBuffer=_imageFrameBuffer;
@property(readonly, nonatomic) id <TXIGlContext> context; // @synthesize context=_context;
- (void)updateImageTexCoords:(struct CGSize)arg1;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (_Bool)createGlObjectsIfNeeded;
- (void)setBlendAlpha:(double)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 image:(id)arg2 atRect:(struct CGRect)arg3;

@end

