//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MTLTexture;

@interface TXCMetalTexture : NSObject
{
    id <MTLTexture> _texture;
    struct __CVBuffer *_pixelBuffer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(readonly, nonatomic) id <MTLTexture> texture; // @synthesize texture=_texture;
- (void)dealloc;
- (id)initWithTexture:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2;

@end

