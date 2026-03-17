//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveILinkCompositerTextureWrap : NSObject
{
    unsigned int _textureID;
    struct __CVBuffer *_openGLESTexture;
    struct __CVBuffer *_pixelBuffer;
    unsigned long long _textureWidth;
    unsigned long long _textureHeight;
}

@property(nonatomic) unsigned int textureID; // @synthesize textureID=_textureID;
@property(nonatomic) unsigned long long textureHeight; // @synthesize textureHeight=_textureHeight;
@property(nonatomic) unsigned long long textureWidth; // @synthesize textureWidth=_textureWidth;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(nonatomic) struct __CVBuffer *openGLESTexture; // @synthesize openGLESTexture=_openGLESTexture;
- (void)dealloc;

@end

