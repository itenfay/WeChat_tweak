//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class XImage;

@interface WeVisRenderFrame : NSObject
{
    int _rgbaTexture;
    long long _format;
    struct opaqueCMSampleBuffer *_sampleBuffer;
    struct __CVBuffer *_pixelBuffer;
    XImage *_rgbaImage;
    struct CGSize _rgbaTexSize;
    struct CGRect _normalizeFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect normalizeFrame; // @synthesize normalizeFrame=_normalizeFrame;
@property(nonatomic) struct CGSize rgbaTexSize; // @synthesize rgbaTexSize=_rgbaTexSize;
@property(retain, nonatomic) XImage *rgbaImage; // @synthesize rgbaImage=_rgbaImage;
@property(nonatomic) int rgbaTexture; // @synthesize rgbaTexture=_rgbaTexture;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(nonatomic) struct opaqueCMSampleBuffer *sampleBuffer; // @synthesize sampleBuffer=_sampleBuffer;
@property(nonatomic) long long format; // @synthesize format=_format;

@end

