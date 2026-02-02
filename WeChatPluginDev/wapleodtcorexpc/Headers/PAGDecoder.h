//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class PAGDecoderImpl;

@interface PAGDecoder : NSObject
{
    PAGDecoderImpl *pagDecoder;
}

+ (id)Make:(id)arg1 maxFrameRate:(float)arg2 scale:(float)arg3;
+ (id)Make:(id)arg1;
- (id)frameAtIndex:(long long)arg1;
- (_Bool)readFrame:(long long)arg1 to:(struct __CVBuffer *)arg2;
- (_Bool)copyFrameTo:(void *)arg1 rowBytes:(unsigned long long)arg2 at:(long long)arg3;
- (_Bool)checkFrameChanged:(int)arg1;
- (float)frameRate;
- (long long)numFrames;
- (long long)height;
- (long long)width;
- (id)impl;
- (void)dealloc;
- (id)initWithDecoder:(id)arg1;

@end

