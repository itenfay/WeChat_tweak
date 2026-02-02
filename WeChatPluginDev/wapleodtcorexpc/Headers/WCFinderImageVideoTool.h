//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderImageVideoTool : NSObject
{
}

+ (id)generateCGImageFromImage:(id)arg1;
+ (id)compressHeadImage:(id)arg1;
+ (void)accessAudioFromVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)getCompressImageDataBy:(id)arg1 defaultRate:(double)arg2 maxSize:(double)arg3 compressRate:(double *)arg4;
+ (id)getCompressImageDataBy:(id)arg1 imageType:(unsigned long long)arg2 compressRate:(double *)arg3;
+ (id)getVideoImageWithTime:(double)arg1 videoPath:(id)arg2 keyFrameRate:(double)arg3;
+ (id)imageResize:(id)arg1 andResizeConstraint:(struct CGSize)arg2;

@end

