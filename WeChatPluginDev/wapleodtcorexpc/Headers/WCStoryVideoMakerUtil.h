//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCStoryVideoMakerUtil : NSObject
{
}

+ (id)imageCompressFitSizeScale:(id)arg1 targetSize:(struct CGSize)arg2;
+ (_Bool)appendToAdapter:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3 withInput:(id)arg4 withMovieWriter:(id)arg5;
+ (struct __CVBuffer *)pixelBufferFromCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2;
+ (void)createVideoCompostionWithHandler:(CDUnknownBlockType)arg1;
+ (void)createOriginalVideoWith:(id)arg1 complection:(CDUnknownBlockType)arg2;
+ (void)createOriginalVideoWith:(id)arg1 duration:(double)arg2 framerate:(double)arg3 targetSize:(struct CGSize)arg4 complection:(CDUnknownBlockType)arg5;
+ (_Bool)deleteTempVideoWithPathString:(id)arg1;
+ (id)getTempVideoPathString;
+ (void)playVideoToControllerWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

