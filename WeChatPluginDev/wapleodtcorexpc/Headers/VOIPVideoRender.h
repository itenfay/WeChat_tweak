//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLView_v2;

@interface VOIPVideoRender : NSObject
{
    EAGLView_v2 *_glview;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EAGLView_v2 *glview; // @synthesize glview=_glview;
- (id)snapshot;
- (id)getView;
- (void)setDegrees:(float)arg1;
- (void)randerDefaultView:(id)arg1;
- (void)changeFrame:(struct CGRect)arg1;
- (void)renderImage3:(char **)arg1 pixelBuffer:(struct __CVBuffer *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4;
- (void)renderImage2:(char *)arg1 pixelBuffer:(struct __CVBuffer *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4;
- (void)renderImage:(char *)arg1 pixelBuffer:(struct __CVBuffer *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4;
- (void)restartRender;
- (void)transformFrontImage;
- (void)setSharpenFilter:(int)arg1 sharpenMode:(long long)arg2 enable1080pSharpen:(int)arg3;
- (void)transformBackImage;
- (void)dealloc;
- (void)setupMirror:(_Bool)arg1;
- (id)initWithView:(id)arg1 UseNV12:(_Bool)arg2 IsMirrored:(_Bool)arg3 Layer:(id)arg4;
- (id)initWithView:(id)arg1 Layer:(id)arg2;

@end

