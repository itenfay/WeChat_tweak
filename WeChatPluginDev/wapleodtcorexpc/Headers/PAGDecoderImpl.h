//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PAGDecoderImpl : NSObject
{
    shared_ptr_62164be8 pagDecoder;
}

+ (id)Make:(id)arg1 maxFrameRate:(float)arg2 scale:(float)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)frameAtIndex:(long long)arg1;
- (_Bool)readFrame:(long long)arg1 to:(struct __CVBuffer *)arg2;
- (_Bool)copyFrameTo:(void *)arg1 rowBytes:(unsigned long long)arg2 at:(long long)arg3;
- (_Bool)checkFrameChanged:(int)arg1;
- (float)frameRate;
- (long long)numFrames;
- (long long)height;
- (long long)width;
- (shared_ptr_62164be8)decoder;
- (id)initWithDecoder:(shared_ptr_62164be8)arg1;

@end

