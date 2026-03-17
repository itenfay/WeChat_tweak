//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TAVPixelBufferWrap : NSObject
{
    struct __CVBuffer *_pixelBuf;
}

+ (id)wrapWithPixelBuf:(struct __CVBuffer *)arg1;
@property(nonatomic) struct __CVBuffer *pixelBuf; // @synthesize pixelBuf=_pixelBuf;
- (void)dealloc;
- (id)initWithPixelBuf:(struct __CVBuffer *)arg1;

@end

