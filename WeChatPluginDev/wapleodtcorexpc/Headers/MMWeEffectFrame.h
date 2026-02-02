//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class XImage;

@interface MMWeEffectFrame : NSObject
{
    _Bool _mirror;
    _Bool _isFront;
    int _texture;
    int _maskTexture;
    int _faceTrackRet;
    long long _inputFormat;
    struct opaqueCMSampleBuffer *_sampleBuffer;
    struct __CVBuffer *_pixelBuffer;
    long long _renderRotation;
    XImage *_rgbaImage;
    struct CGSize _textureSize;
    struct CGSize _faceTrackScaledSize;
    struct CGRect _normalizeFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize faceTrackScaledSize; // @synthesize faceTrackScaledSize=_faceTrackScaledSize;
@property(nonatomic) int faceTrackRet; // @synthesize faceTrackRet=_faceTrackRet;
@property(nonatomic) struct CGRect normalizeFrame; // @synthesize normalizeFrame=_normalizeFrame;
@property(retain, nonatomic) XImage *rgbaImage; // @synthesize rgbaImage=_rgbaImage;
@property(nonatomic) _Bool isFront; // @synthesize isFront=_isFront;
@property(nonatomic) long long renderRotation; // @synthesize renderRotation=_renderRotation;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(nonatomic) int maskTexture; // @synthesize maskTexture=_maskTexture;
@property(nonatomic) struct CGSize textureSize; // @synthesize textureSize=_textureSize;
@property(nonatomic) int texture; // @synthesize texture=_texture;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(nonatomic) struct opaqueCMSampleBuffer *sampleBuffer; // @synthesize sampleBuffer=_sampleBuffer;
@property(nonatomic) long long inputFormat; // @synthesize inputFormat=_inputFormat;

@end

