//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLOpenVoiceView;

@interface OpenVoiceVideoRender : NSObject
{
    EAGLOpenVoiceView *_glview;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EAGLOpenVoiceView *glview; // @synthesize glview=_glview;
- (_Bool)isUnmatch;
- (id)getView;
- (id)getGLView;
- (void)setDegrees:(float)arg1;
- (void)randerDefaultView:(id)arg1;
- (void)changeFrame:(struct CGRect)arg1;
- (void)renderImage3:(char **)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage2:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 objectFit:(int)arg4;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 fitView:(_Bool)arg4;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)stopRender;
- (void)restartRender;
- (void)transformFrontImage;
- (void)transformBackImage;
- (void)addSingleTapTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (id)initWithView:(id)arg1 UseNV12:(_Bool)arg2 IsMirrored:(_Bool)arg3 Layer:(id)arg4;
- (id)initWithView:(id)arg1 Layer:(id)arg2;

@end

