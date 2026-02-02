//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAEJTexture;

@interface WAEJBindingWebGLTexture
{
    WAEJTexture *texture;
}

+ (id)getEGLContext:(struct OpaqueJSValue *)arg1;
+ (void)modifyWebGLTexture:(struct OpaqueJSValue *)arg1 glTexture:(unsigned int)arg2 target:(unsigned int)arg3;
+ (struct OpaqueJSValue *)createJSObjectWithTexture:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 texture:(id)arg3;
+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 webglContext:(id)arg3;
+ (id)textureFromJSValue:(struct OpaqueJSValue *)arg1;
- (struct OpaqueJSValue *)getJSObject;
- (id)getTexture;
- (void)invalidate;
- (id)initWithTexture:(id)arg1;
- (id)initWithWebGLContext:(id)arg1;

@end

