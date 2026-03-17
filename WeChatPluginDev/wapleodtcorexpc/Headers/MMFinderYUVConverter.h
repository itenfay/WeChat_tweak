//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderYUVConverter : NSObject
{
}

+ (struct opaqueCMSampleBuffer *)pixelBufferToSampleBuffer:(struct __CVBuffer *)arg1;
+ (int)rotateMode:(unsigned char)arg1;
+ (struct __CVBuffer *)i420FrameToPixelBuffer:(id)arg1;
+ (id)pixelBufferToI420:(struct __CVBuffer *)arg1 orientation:(unsigned char)arg2;

@end

