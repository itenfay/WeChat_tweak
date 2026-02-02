//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CIContext, CIFilter;

@interface WCAdAlphaVideoProcessor : NSObject
{
    int _videoCompositeType;
    struct __CVBuffer *_inputPixelBuffer;
    struct __CVBuffer *_resultPixelBuffer;
    CIContext *_context;
    CIFilter *_alphaVideoFilter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CIFilter *alphaVideoFilter; // @synthesize alphaVideoFilter=_alphaVideoFilter;
@property(nonatomic) int videoCompositeType; // @synthesize videoCompositeType=_videoCompositeType;
@property(retain, nonatomic) CIContext *context; // @synthesize context=_context;
@property(nonatomic) struct __CVBuffer *resultPixelBuffer; // @synthesize resultPixelBuffer=_resultPixelBuffer;
@property(nonatomic) struct __CVBuffer *inputPixelBuffer; // @synthesize inputPixelBuffer=_inputPixelBuffer;
- (struct __CVBuffer *)renderCompressByCIImage:(struct __CVBuffer *)arg1;
- (void)startRendering;
- (struct __CVBuffer *)processPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWithVideoCompositeType:(int)arg1;
- (void)dealloc;

@end

