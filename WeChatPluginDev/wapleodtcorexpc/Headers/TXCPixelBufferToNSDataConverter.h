//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCPixelBufferToNSDataConverter : NSObject
{
}

+ (unsigned long long)copyData:(const char *)arg1 toPixelBuffer:(struct __CVBuffer *)arg2 planeIndex:(int)arg3 planeWidth:(unsigned long long)arg4;
+ (void)copyPixelBuffer2dataPtr:(char **)arg1 pixelBuffer:(struct __CVBuffer *)arg2 planeIndex:(int)arg3;
+ (_Bool)copyData:(id)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;
+ (_Bool)copyPixelBuffer:(struct __CVBuffer *)arg1 toData:(id)arg2;
+ (id)dataFromPixelBuffer:(struct __CVBuffer *)arg1;

@end

