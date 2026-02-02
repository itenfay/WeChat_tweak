//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CIContext, EAGLContext;

@interface WCStoryPhotoFilterObj : NSObject
{
    CIContext *_context;
    EAGLContext *_eaglContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EAGLContext *eaglContext; // @synthesize eaglContext=_eaglContext;
@property(retain, nonatomic) CIContext *context; // @synthesize context=_context;
- (struct CGRect)getBlurRegionWithBlurSize:(struct CGSize)arg1 targetSize:(struct CGSize)arg2 originalImageSize:(struct CGSize)arg3;
- (struct CGSize)getImageSizeToScaleAspectFitSize:(id)arg1 targetSize:(struct CGSize)arg2;
- (struct CGSize)getImageSizeToScaleAspectFillSize:(id)arg1 targetSize:(struct CGSize)arg2;
- (id)imageByCroppingWithImage:(id)arg1 targetRect:(struct CGRect)arg2;
- (id)imageByCroppingWithImage:(id)arg1 targetSize:(struct CGSize)arg2;
- (id)compositeBlurImage:(id)arg1 originalImage:(id)arg2;
- (id)scalingImage:(id)arg1 toSize:(struct CGSize)arg2;
- (id)creatBlurBackgound:(id)arg1 blurRadius:(double)arg2 offset:(double)arg3;
- (id)creatBlurBackgound:(id)arg1 blurRadius:(double)arg2;
- (id)createPureBlurImageBackgroundWithOriginalImage:(id)arg1 targetSize:(struct CGSize)arg2;
- (id)createBlurImageBackgroundWithOriginalImage:(id)arg1 targetSize:(struct CGSize)arg2 blurRadius:(double)arg3;
- (void)dealloc;
- (id)init;

@end

