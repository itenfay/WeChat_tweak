//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TXCGlFrameBuffer;

@interface TXCVideoTextureFrame : NSObject
{
    unsigned int _texture;
    TXCGlFrameBuffer *_frameBuffer;
    unsigned long long _width;
    unsigned long long _height;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
@property(nonatomic) unsigned int texture; // @synthesize texture=_texture;
@property(readonly, nonatomic) __weak TXCGlFrameBuffer *frameBuffer; // @synthesize frameBuffer=_frameBuffer;
- (id)initWithTexture:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (id)initWithFrameBuffer:(id)arg1;

@end

