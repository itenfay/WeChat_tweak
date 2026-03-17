//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TAVFrame : NSObject
{
    struct __CVBuffer *_pixelBuffer;
}

@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (struct __CVBuffer *)copyPixelBuffer;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;

@end

