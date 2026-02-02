//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WeVisGLComposeQuad;

@interface WeVisGLCompose2RGBA : NSObject
{
    WeVisGLComposeQuad *mQuadDrawer;
    _Bool _isInitialized;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
- (void)composeElements:(id)arg1 transpose:(_Bool)arg2 rotation:(int)arg3;
- (void)setOutputWidth:(int)arg1 outputHeight:(int)arg2;
- (id)initWithMaxSupportTextureCnt:(int)arg1;

@end

